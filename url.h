typedef struct url_data_s {
  url_t *url;
  char *file_name;
  FILE *f;
  int err;
  char *err_buf;
  char *curl_err_buf;
  unsigned err_buf_len;
  unsigned p_now, p_total;
  unsigned zp_now, zp_total;
  unsigned z_progress:1;
  unsigned flush:1;
  unsigned gzip:1;
  unsigned cramfs:1;
  unsigned file_opened:1;
  unsigned unzip:1;
  int pipe_fd;
  char *orig_name;
  unsigned image_size;
  char *tmp_file;
  struct {
    unsigned len, max;
    unsigned char *data;
  } buf;
  int (*progress)(struct url_data_s *);
} url_data_t;

void url_read(url_data_t *url_data);
url_t *url_set(char *str);
url_t *url_free(url_t *url);
void url_cleanup(void);
url_data_t *url_data_new(void);
void url_data_free(url_data_t *url_data);