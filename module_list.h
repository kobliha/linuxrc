static module_t mod_scsi_mod_arm [] = 
{
{ ID_AHA_2940,   "Adaptec 274x/284x/294x",             "aic7xxx",    0, __LINE__ },
{ ID_NCR_53C8XX, "NCR 53c8xx",                         "ncr53c8xx",  0, __LINE__ },
{ ID_SYM_53C8XX, "Symbios 53c896",                     "sym53c8xx",  0, __LINE__ },
{ ID_BUSLOGIC,   "BusLogic",                           "BusLogic",   0, __LINE__ },
{ ID_ADVANSYS,   "AdvanSys",                           "advansys",   "asc_iopflag=1 asc_ioport=0x110", __LINE__ },
{ ID_GDTH,       "ICP Vortex GDTH Disk Array",         "gdth",       0, __LINE__ },
{ ID_DAC960,     "Mylex DAC-960/DAC1100",              "DAC960",     0, __LINE__ },
{ ID_SMART2,     "Compaq SMART2 RAID",                 "cpqarray",   0, __LINE__ },
{ ID_DPT_I2O,    "DPT I2O SmartRAID V",                "dpt_i2o",    0, __LINE__ },
{ ID_IPS,        "IBM ServeRAID",                      "ips",        0, __LINE__ },
{ ID_EATA_DMA,   "EATA-DMA (DPT, NEC, AT&T, SNI etc)", "eata_dma",   0, __LINE__ },
{ ID_DC390T,     "Tekram DC390(T) (AM53C974 chip)",    "tmscsim",    0, __LINE__ },
{ ID_DC395,      "Tekram Tekram DC395U/UW/F, DC315/U", "dc395x_trm", 0, __LINE__ },
{ ID_AHA_154x,   "Adaptec 154x",                       "aha1542",    0, __LINE__ },
{ ID_AMIMEGA,    "AMI Megaraid",                       "megaraid",   0, __LINE__ },
{ ID_INITIO,     "Initio INI-9X00U/UW",                "initio",     0, __LINE__ },
{ ID_INIA100,    "Initio INI-A100U2W",                 "a100u2w",    0, __LINE__ },
{ ID_AHA_152x,   "Adaptec 1505/151x/152x/2825",        "aha152x",    "aha152x=0x340,11,7,0,0,0,100,0", __LINE__ },
{ ID_AHA_1740,   "Adaptec 1740",                       "aha1740",    0, __LINE__ },
{ ID_ULTRAST_14, "UltraStor 14F/34F",                  "u14-34f",    0, __LINE__ },
{ ID_FDOMAIN,    "Future Domain 16xx",                 "fdomain",    0, __LINE__ },
{ ID_IN2000,     "Always IN 2000",                     "in2000",     0, __LINE__ },
{ ID_SEAGATE,    "Seagate ST-02/Fut. Domain TMC-8xx",  "seagate",    0, __LINE__ },
{ ID_TRANTOR,    "Trantor T128/T128F/T228",            "t128",       0, __LINE__ },
{ ID_DTC,        "DTC 3180/3280",                      "dtc",        0, __LINE__ },
{ ID_EATA_ISA,   "EATA (E)ISA (PM2011/021/012 etc)",   "eata",       0, __LINE__ },
{ ID_AM53C974,   "AM53/79C974",                        "AM53C974",   0, __LINE__ },
{ ID_EATA_PIO,   "EATA-PIO (old DPT PM2001, PM2012A)", "eata_pio",   0, __LINE__ },
{ ID_PAS16,      "Pro Audio Spectrum SCSI",            "pas16",      0, __LINE__ },
{ ID_IOMEGA,     "IOMEGA Parallel Port ZIP drive",     "ppa",        "ppa_base=0x378", __LINE__ },
{ ID_IMM,        "IOMEGA Parallel Port new driver",    "imm",        0, __LINE__ },
{ ID_NCR_53C406, "NCR53c406a",                         "NCR53c406a", 0, __LINE__ },
{ ID_WD7000,     "Western Digital 7000 FASST",         "wd7000",     0, __LINE__ },
{ ID_NCR_5380,   "Generic NCR5380/53c400",             "g_NCR5380",  0, __LINE__ },
{ ID_53C78XX,    "NCR 53c7,8xx (old driver)",          "53c7,8xx",   0, __LINE__ },
{ ID_QLOGIC_ISP, "QLogic ISP 1020",                    "qlogicisp",  0, __LINE__ },
{ ID_QLOGIC_FC,  "QLogic ISP 2100 SCSI-FCP",           "qlogicfc",   0, __LINE__ },
{ ID_QLOGIC_FAS, "Qlogic FAS",                         "qlogicfas",  0, __LINE__ },
{ ID_ULTRASTOR,  "UltraStor (alternate driver)",       "ultrastor",  0, __LINE__ },
{ ID_ACARD,      "ACARD AEC-671X",                     "atp870u",    0, __LINE__ },
{ ID_PCI2000,    "PCI-2000",                           "pci2000",    0, __LINE__ },
{ ID_PCI2220I,   "PCI-2220I",                          "pci2220i",   0, __LINE__ },
{ ID_PSI240I,    "PSI-240i",                           "psi240i",    0, __LINE__ },
{ ID_SYM53C416,  "Symbios 53C416",                     "sym53c416",  0, __LINE__ },
{ ID_SIM710,     "Simple 53c710 (Compaq, NCR)",        "sim710",     0, __LINE__ },
};

static module_t mod_cdrom_mod_arm [] = 
{
{ ID_SBPCD,      "SBPCD (Matsushita/Panasonic etc.)",  "sbpcd",      "sbpcd=0x230,1", __LINE__ },
{ ID_MCD,        "Mitsumi (standard)",                 "mcd",        "mcd=0x300,10", __LINE__ },
{ ID_AZTECH,     "Aztech/Orchid/Okano/Wearnes/TXC",    "aztcd",      "aztcd=0x320", __LINE__ },
{ ID_CDU31A,     "Sony CDU31A/CDU33A",                 "cdu31a",     "cdu31a_port=0x340 cdu31a_irq=0", __LINE__ },
{ ID_SONY535,    "Sony CDU535",                        "sonycd535",  "sonycd535=0x340", __LINE__ },
{ ID_GOLDSTAR,   "Goldstar R420",                      "gscd",       "gscd=0x340", __LINE__ },
{ ID_MCDX,       "Mitsumi (XA/MultiSession)",          "mcdx",       "mcdx=0x300,10", __LINE__ },
{ ID_OPTCD,      "Optics Storage DOLPHIN 8000AT",      "optcd",      "optcd=0x340", __LINE__ },
{ ID_CM206,      "Philips/LMS CM206",                  "cm206",      "cm206=0x340,11", __LINE__ },
{ ID_SANYO,      "Sanyo CDR-H94A",                     "sjcd",       "sjcd_base=0x340", __LINE__ },
{ ID_ISP16,      "ISP16/MAD16/Mozart",                 "isp16",      "isp16_cdrom_base=0x340 isp16_cdrom_irq=0 isp16_cdrom_dma=0 isp16_cdrom_type=Sanyo", __LINE__ },
{ ID_ATEN,       "ATEN EH-100 parallel port",          "aten",       0, __LINE__ },
{ ID_BPCK,       "MicroSolutions parallel port",       "bpck",       0, __LINE__ },
{ ID_COMM,       "DataStor (old) parallel port",       "comm",       0, __LINE__ },
{ ID_DSTR,       "DataStor EP2000 parallel port",      "dstr",       0, __LINE__ },
{ ID_EPAT,       "Shuttle EPAT parallel port",         "epat",       0, __LINE__ },
{ ID_EPIA,       "Shuttle EPIA parallel port",         "epia",       0, __LINE__ },
{ ID_FIT2,       "FIT TD-2000 parallel port",          "fit2",       0, __LINE__ },
{ ID_FIT3,       "FIT TD-3000 parallel port",          "fit3",       0, __LINE__ },
{ ID_FRPW,       "Freecom Power parallel port",        "frpw",       0, __LINE__ },
{ ID_FRIQ,       "Freecom Power IQ (vers. 2)",         "friq",       0, __LINE__ },
{ ID_KBIC,       "KBIC-951A/971A parallel port",       "kbic",       0, __LINE__ },
{ ID_KTTI,       "KT Technology parallel port",        "ktti",       0, __LINE__ },
{ ID_ON20,       "OnSpec 90c20 parallel port",         "on20",       0, __LINE__ },
{ ID_ON26,       "OnSpec 90c26 parallel port",         "on26",       0, __LINE__ },
};

static module_t mod_net_mod_arm [] =
{
{ ID_DE_45,      "DE425, DE434, DE435, DE450, DE500",  "de4x5",      0, __LINE__ },
{ ID_TULIP,      "DEC Tulip (DC21x4x) PCI",            "tulip",      "options=0", __LINE__ },
{ ID_TULIP_OLD,  "DEC Tulip (DC21x4x) (old driver)",   "old_tulip",  "options=0", __LINE__ },
{ ID_EEPRO100,   "Intel EtherExpress Pro 100",         "eepro100",   0         , __LINE__ },
{ ID_EEPRO100_OLD,"Intel EtherExpress Pro 100 (old)",  "eepro100-old",0         , __LINE__ },
{ ID_3C590,      "3Com 3c59x/3c90x (592/595/597)",     "3c59x",      0, __LINE__ },
{ ID_3C90X,      "3Com 3c90x/3c980 B/C series",        "3c90x",      0, __LINE__ },
{ ID_3C509,      "3Com 3c509/3c579",                   "3c509",      0, __LINE__ },
{ ID_RTL8139,    "RealTek RTL8129/8139",               "rtl8139",    0, __LINE__ },
{ ID_NE2000,     "NE 2000 / NE 1000 (ISA)",            "ne",         "io=0x300", __LINE__ },
{ ID_NE2K_PCI,   "NE 2000 (PCI)",                      "ne2k-pci",   0, __LINE__ },
{ ID_WD_80X3,    "Western Digital WD80x3",             "wd",         0, __LINE__ },
{ ID_EPIC100,    "SMC 83c170 EPIC/100",                "epic100",    0         , __LINE__ },
{ ID_TLAN,       "Compaq Netelligent 10/100/NetFlex 3","tlan",       0, __LINE__ },
{ ID_3C515,      "3Com 3c515",                         "3c515",      "options=0", __LINE__ },
{ ID_LANCE,      "AMD LANCE and PCnet (AT1500/NE2100)","lance",      0, __LINE__ },
{ ID_TOKEN,      "IBM Tropic chipset token ring",      "ibmtr",      "io=0xa20", __LINE__ },
{ ID_PCNET32,    "AMD PCI PCnet32 (PCI bus NE2100)",   "pcnet32",    0, __LINE__ },
{ ID_PLIP,       "PLIP (IP via parallel port)",        "plip",       0, __LINE__ },
{ ID_WD_ULTRA,   "SMC Ultra",                          "smc-ultra",  "io=0x200", __LINE__ },
{ ID_ULTRA32,    "SMC Ultra32",                        "smc-ultra32",0, __LINE__ },
{ ID_AC3200,     "Ansel Communications EISA 3200",     "ac3200",     "io=0x300 irq=10 mem=0xd0000", __LINE__ },
{ ID_APRICOT,    "Apricot Xen-II on board ethernet",   "apricot",    "io=0x300", __LINE__ },
{ ID_ARCNET,     "ARCnet",                             "arcnet",     "io=0x300", __LINE__ },
{ ID_AT1700,     "AT1700",                             "at1700",     "io=0x260", __LINE__ },
{ ID_ATP,        "AT-LAN-TEC/RealTek pocket adaptor",  "atp",        0, __LINE__ },
{ ID_DE600,      "D-Link DE600 pocket adaptor",        "de600",      0       , __LINE__ },
{ ID_DE620,      "D-Link DE620 pocket adaptor",        "de620",      "io=0x378 irq=7 bnc=1", __LINE__ },
{ ID_DEPCA,      "DEPCA,DE10x,DE200,DE201,DE202,DE422","depca",      "io=0x200", __LINE__ },
{ ID_DGRS,       "Digi Intl. RightSwitch SE-X",        "dgrs",       0, __LINE__ },
{ ID_E2100,      "Cabletron E21xx",                    "e2100",      "io=0x300", __LINE__ },
{ ID_EEPRO,      "Intel EtherExpressPro",              "eepro",      "io=0x260", __LINE__ },
{ ID_EEXPRESS,   "Intel EtherExpress 16",              "eexpress",   "io=0x300", __LINE__ },
{ ID_ETH16I,     "ICL EtherTeam 16i/32",               "eth16i",     "io=0x2a0", __LINE__ },
{ ID_EWORK,      "EtherWORKS 3 (DE203, DE204, DE205)", "ewrk3",      "io=0x300", __LINE__ },
{ ID_FMV18X,     "FMV-181/182/183/184",                "fmv18x",     "io=0x220", __LINE__ },
{ ID_HP_PLUS,    "HP PCLAN+ (27247B and 27252A)",      "hp-plus",    "io=0x300", __LINE__ },
{ ID_HP_PCLAN,   "HP PCLAN (27245 / 27xxx)",           "hp",         "io=0x300", __LINE__ },
{ ID_HP_100,     "HP 10/100VG PCLAN (ISA, EISA, PCI)", "hp100",      "hp100_port=0x380", __LINE__ },
{ ID_NI5210,     "NI5210",                             "ni52",       "io=0x360 irq=9 memstart=0xd0000 memend=0xd4000", __LINE__ },
{ ID_NI6510,     "ni6510 (am7990 \"lance\" chip)",     "ni65",       "io=0x360 irq=9 dma=0", __LINE__ },
{ ID_WD_9194,    "SMC 9194",                           "smc9194",    "io=0x200", __LINE__ },
{ ID_SKTR,       "SysKonnect Token Ring",              "sktr",       0, __LINE__ },
{ ID_SK98X,      "SysKonnect Gigabit Ethernet 984x",   "sk98lin",    0, __LINE__ },
{ ID_YELLOWFIN,  "Packet Engines Yellowfin Gigabit",   "yellowfin",  0, __LINE__ },
{ ID_3C501,      "3Com 3c501",                         "3c501",      "io=0x280", __LINE__ },
{ ID_3C503,      "3Com 3c503",                         "3c503",      "io=0x280", __LINE__ },
{ ID_3C505,      "3Com 3c505",                         "3c505",      "io=0x300", __LINE__ },
{ ID_3C507,      "3Com 3c507",                         "3c507",      "io=0x300", __LINE__ },
{ ID_RL100ATX,   "Compex RL-100ATX",                   "rl100a",     0, __LINE__ },
{ ID_VIA_RHINE,  "VIA VT86c100A Rhine-II",             "via-rhine",  0, __LINE__ },
{ ID_MTOK,       "Madge Token Ring",                   "mtok",       0, __LINE__ },
{ ID_ACENIC,     "Alteon AceNIC/3C985/NetGear GA620",  "acenic",     0, __LINE__ },
{ ID_CS89X0,     "CS89x0",                             "cs89x0",     0, __LINE__ },
{ ID_DM9102,     "DM9102 PCI Fast Ethernet",           "dmfe",       0, __LINE__ },
{ ID_ES3210,     "Racal-Interlan EISA ES3210",         "es3210",     0, __LINE__ },
{ ID_LNE390,     "Mylex EISA LNE390A/B",               "lne390",     0, __LINE__ },
{ ID_NE3210,     "Novell/Eagle/Microdyne NE3210 EISA", "ne3210",     0, __LINE__ },
{ ID_NI5010,     "NI5010",                             "ni5010",     0, __LINE__ },
{ ID_OLYMPIC,    "IBM Olympic chipset PCI Token Ring", "olympic",    0, __LINE__ },
{ ID_RRUNNER,    "Essential RoadRunner HIPPI",         "rrunner",    0, __LINE__ },
{ ID_SIS900,     "SiS 900 PCI Fast Ethernet",          "sis900",     0, __LINE__ },
};

static enum modid_t mod_noauto_arm [] =
{
  ID_SBPCD,
  ID_WD7000,
  ID_CDU31A,
  ID_3C501,
  ID_PLIP,
  ID_IOMEGA,
  ID_AZTECH,
  ID_DE600,
  ID_DE620,
  ID_E2100,
  ID_AC3200,
  ID_NCR_5380,
  ID_NCR_53C810,
  ID_EEPRO100,
  ID_TLAN,
  ID_ATEN,
  ID_BPCK,
  ID_COMM,
  ID_DSTR,
  ID_EPAT,
  ID_EPIA,
  ID_FIT2,
  ID_FIT3,
  ID_FRPW,
  ID_FRIQ,
  ID_KBIC,
  ID_KTTI,
  ID_ON20,
  ID_ON26,
  ID_ATP,
  ID_EEPRO,
#ifdef LINUXRC_AXP
  ID_EATA_DMA,
#endif
  ID_ADVANSYS
};

static enum modid_t mod_is_ppcd_arm [] =
{
  ID_ATEN,
  ID_BPCK,
  ID_COMM,
  ID_DSTR,
  ID_EPAT,
  ID_EPIA,
  ID_FIT2,
  ID_FIT3,
  ID_FRPW,
  ID_FRIQ,
  ID_KBIC,
  ID_KTTI,
  ID_ON20,
  ID_ON26
};
