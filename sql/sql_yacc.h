/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_SYM = 258,
     ACCESSIBLE_SYM = 259,
     ACTION = 260,
     ADD = 261,
     ADDDATE_SYM = 262,
     AFTER_SYM = 263,
     AGAINST = 264,
     AGGREGATE_SYM = 265,
     ALGORITHM_SYM = 266,
     ALL = 267,
     ALTER = 268,
     ANALYZE_SYM = 269,
     AND_AND_SYM = 270,
     AND_SYM = 271,
     ANY_SYM = 272,
     AS = 273,
     ASC = 274,
     ASCII_SYM = 275,
     ASENSITIVE_SYM = 276,
     AT_SYM = 277,
     AUTHORS_SYM = 278,
     AUTOEXTEND_SIZE_SYM = 279,
     AUTO_INC = 280,
     AVG_ROW_LENGTH = 281,
     AVG_SYM = 282,
     BACKUP_SYM = 283,
     BEFORE_SYM = 284,
     BEGIN_SYM = 285,
     BETWEEN_SYM = 286,
     BIGINT = 287,
     BINARY = 288,
     BINLOG_SYM = 289,
     BIN_NUM = 290,
     BIT_AND = 291,
     BIT_OR = 292,
     BIT_SYM = 293,
     BIT_XOR = 294,
     BLOB_SYM = 295,
     BLOCK_SYM = 296,
     BOOLEAN_SYM = 297,
     BOOL_SYM = 298,
     BOTH = 299,
     BTREE_SYM = 300,
     BY = 301,
     BYTE_SYM = 302,
     CACHE_SYM = 303,
     CALL_SYM = 304,
     CASCADE = 305,
     CASCADED = 306,
     CASE_SYM = 307,
     CAST_SYM = 308,
     CATALOG_NAME_SYM = 309,
     CHAIN_SYM = 310,
     CHANGE = 311,
     CHANGED = 312,
     CHARSET = 313,
     CHAR_SYM = 314,
     CHECKSUM_SYM = 315,
     CHECK_SYM = 316,
     CIPHER_SYM = 317,
     CLASS_ORIGIN_SYM = 318,
     CLIENT_SYM = 319,
     CLOSE_SYM = 320,
     COALESCE = 321,
     CODE_SYM = 322,
     COLLATE_SYM = 323,
     COLLATION_SYM = 324,
     COLUMNS = 325,
     COLUMN_SYM = 326,
     COLUMN_NAME_SYM = 327,
     COMMENT_SYM = 328,
     COMMITTED_SYM = 329,
     COMMIT_SYM = 330,
     COMPACT_SYM = 331,
     COMPLETION_SYM = 332,
     COMPRESSED_SYM = 333,
     CONCURRENT = 334,
     CONDITION_SYM = 335,
     CONNECTION_SYM = 336,
     CONSISTENT_SYM = 337,
     CONSTRAINT = 338,
     CONSTRAINT_CATALOG_SYM = 339,
     CONSTRAINT_NAME_SYM = 340,
     CONSTRAINT_SCHEMA_SYM = 341,
     CONTAINS_SYM = 342,
     CONTEXT_SYM = 343,
     CONTINUE_SYM = 344,
     CONTRIBUTORS_SYM = 345,
     CONVERT_SYM = 346,
     COUNT_SYM = 347,
     CPU_SYM = 348,
     CREATE = 349,
     CROSS = 350,
     CUBE_SYM = 351,
     CURDATE = 352,
     CURRENT_SYM = 353,
     CURRENT_USER = 354,
     CURSOR_SYM = 355,
     CURSOR_NAME_SYM = 356,
     CURTIME = 357,
     DATABASE = 358,
     DATABASES = 359,
     DATAFILE_SYM = 360,
     DATA_SYM = 361,
     DATETIME = 362,
     DATE_ADD_INTERVAL = 363,
     DATE_SUB_INTERVAL = 364,
     DATE_SYM = 365,
     DAY_HOUR_SYM = 366,
     DAY_MICROSECOND_SYM = 367,
     DAY_MINUTE_SYM = 368,
     DAY_SECOND_SYM = 369,
     DAY_SYM = 370,
     DEALLOCATE_SYM = 371,
     DECIMAL_NUM = 372,
     DECIMAL_SYM = 373,
     DECLARE_SYM = 374,
     DEFAULT = 375,
     DEFAULT_AUTH_SYM = 376,
     DEFINER_SYM = 377,
     DELAYED_SYM = 378,
     DELAY_KEY_WRITE_SYM = 379,
     DELETE_SYM = 380,
     DESC = 381,
     DESCRIBE = 382,
     DES_KEY_FILE = 383,
     DETERMINISTIC_SYM = 384,
     DIAGNOSTICS_SYM = 385,
     DIRECTORY_SYM = 386,
     DISABLE_SYM = 387,
     DISCARD = 388,
     DISK_SYM = 389,
     DISTINCT = 390,
     DIV_SYM = 391,
     DOUBLE_SYM = 392,
     DO_SYM = 393,
     DROP = 394,
     DUAL_SYM = 395,
     DUMPFILE = 396,
     DUPLICATE_SYM = 397,
     DYNAMIC_SYM = 398,
     EACH_SYM = 399,
     ELSE = 400,
     ELSEIF_SYM = 401,
     ENABLE_SYM = 402,
     ENCLOSED = 403,
     END = 404,
     ENDS_SYM = 405,
     END_OF_INPUT = 406,
     ENGINES_SYM = 407,
     ENGINE_SYM = 408,
     ENUM = 409,
     EQ = 410,
     EQUAL_SYM = 411,
     ERROR_SYM = 412,
     ERRORS = 413,
     ESCAPED = 414,
     ESCAPE_SYM = 415,
     EVENTS_SYM = 416,
     EVENT_SYM = 417,
     EVERY_SYM = 418,
     EXCHANGE_SYM = 419,
     EXECUTE_SYM = 420,
     EXISTS = 421,
     EXIT_SYM = 422,
     EXPANSION_SYM = 423,
     EXTENDED_SYM = 424,
     EXTENT_SIZE_SYM = 425,
     EXTRACT_SYM = 426,
     FALSE_SYM = 427,
     FAST_SYM = 428,
     FAULTS_SYM = 429,
     FETCH_SYM = 430,
     FILE_SYM = 431,
     FIRST_SYM = 432,
     FIXED_SYM = 433,
     FLOAT_NUM = 434,
     FLOAT_SYM = 435,
     FLUSH_SYM = 436,
     FORCE_SYM = 437,
     FOREIGN = 438,
     FOR_SYM = 439,
     FORMAT_SYM = 440,
     FOUND_SYM = 441,
     FROM = 442,
     FULL = 443,
     FULLTEXT_SYM = 444,
     FUNCTION_SYM = 445,
     GE = 446,
     GENERAL = 447,
     GEOMETRYCOLLECTION = 448,
     GEOMETRY_SYM = 449,
     GET_FORMAT = 450,
     GET_SYM = 451,
     GLOBAL_SYM = 452,
     GRANT = 453,
     GRANTS = 454,
     GROUP_SYM = 455,
     GROUP_CONCAT_SYM = 456,
     GT_SYM = 457,
     HANDLER_SYM = 458,
     HASH_SYM = 459,
     HAVING = 460,
     HELP_SYM = 461,
     HEX_NUM = 462,
     HIGH_PRIORITY = 463,
     HOST_SYM = 464,
     HOSTS_SYM = 465,
     HOUR_MICROSECOND_SYM = 466,
     HOUR_MINUTE_SYM = 467,
     HOUR_SECOND_SYM = 468,
     HOUR_SYM = 469,
     IDENT = 470,
     IDENTIFIED_SYM = 471,
     IDENT_QUOTED = 472,
     IF = 473,
     IGNORE_SYM = 474,
     IGNORE_SERVER_IDS_SYM = 475,
     IMPORT = 476,
     INDEXES = 477,
     INDEX_SYM = 478,
     INFILE = 479,
     INITIAL_SIZE_SYM = 480,
     INNER_SYM = 481,
     INOUT_SYM = 482,
     INSENSITIVE_SYM = 483,
     INSERT = 484,
     INSERT_METHOD = 485,
     INSTALL_SYM = 486,
     INTERVAL_SYM = 487,
     INTO = 488,
     INT_SYM = 489,
     INVOKER_SYM = 490,
     IN_SYM = 491,
     IO_AFTER_GTIDS = 492,
     IO_BEFORE_GTIDS = 493,
     IO_SYM = 494,
     IPC_SYM = 495,
     IS = 496,
     ISOLATION = 497,
     ISSUER_SYM = 498,
     ITERATE_SYM = 499,
     JOIN_SYM = 500,
     KEYS = 501,
     KEY_BLOCK_SIZE = 502,
     KEY_SYM = 503,
     KILL_SYM = 504,
     LANGUAGE_SYM = 505,
     LAST_SYM = 506,
     LE = 507,
     LEADING = 508,
     LEAVES = 509,
     LEAVE_SYM = 510,
     LEFT = 511,
     LESS_SYM = 512,
     LEVEL_SYM = 513,
     LEX_HOSTNAME = 514,
     LIKE = 515,
     LIMIT = 516,
     LINEAR_SYM = 517,
     LINES = 518,
     LINESTRING = 519,
     LIST_SYM = 520,
     LOAD = 521,
     LOCAL_SYM = 522,
     LOCATOR_SYM = 523,
     LOCKS_SYM = 524,
     LOCK_SYM = 525,
     LOGFILE_SYM = 526,
     LOGS_SYM = 527,
     LONGBLOB = 528,
     LONGTEXT = 529,
     LONG_NUM = 530,
     LONG_SYM = 531,
     LOOP_SYM = 532,
     LOW_PRIORITY = 533,
     LT = 534,
     MASTER_AUTO_POSITION_SYM = 535,
     MASTER_BIND_SYM = 536,
     MASTER_CONNECT_RETRY_SYM = 537,
     MASTER_DELAY_SYM = 538,
     MASTER_HOST_SYM = 539,
     MASTER_LOG_FILE_SYM = 540,
     MASTER_LOG_POS_SYM = 541,
     MASTER_PASSWORD_SYM = 542,
     MASTER_PORT_SYM = 543,
     MASTER_RETRY_COUNT_SYM = 544,
     MASTER_SERVER_ID_SYM = 545,
     MASTER_SSL_CAPATH_SYM = 546,
     MASTER_SSL_CA_SYM = 547,
     MASTER_SSL_CERT_SYM = 548,
     MASTER_SSL_CIPHER_SYM = 549,
     MASTER_SSL_CRL_SYM = 550,
     MASTER_SSL_CRLPATH_SYM = 551,
     MASTER_SSL_KEY_SYM = 552,
     MASTER_SSL_SYM = 553,
     MASTER_SSL_VERIFY_SERVER_CERT_SYM = 554,
     MASTER_SYM = 555,
     MASTER_USER_SYM = 556,
     MASTER_HEARTBEAT_PERIOD_SYM = 557,
     MATCH = 558,
     MAX_CONNECTIONS_PER_HOUR = 559,
     MAX_QUERIES_PER_HOUR = 560,
     MAX_ROWS = 561,
     MAX_SIZE_SYM = 562,
     MAX_SYM = 563,
     MAX_UPDATES_PER_HOUR = 564,
     MAX_USER_CONNECTIONS_SYM = 565,
     MAX_VALUE_SYM = 566,
     MEDIUMBLOB = 567,
     MEDIUMINT = 568,
     MEDIUMTEXT = 569,
     MEDIUM_SYM = 570,
     MEMORY_SYM = 571,
     MERGE_SYM = 572,
     MESSAGE_TEXT_SYM = 573,
     MICROSECOND_SYM = 574,
     MIGRATE_SYM = 575,
     MINUTE_MICROSECOND_SYM = 576,
     MINUTE_SECOND_SYM = 577,
     MINUTE_SYM = 578,
     MIN_ROWS = 579,
     MIN_SYM = 580,
     MODE_SYM = 581,
     MODIFIES_SYM = 582,
     MODIFY_SYM = 583,
     MOD_SYM = 584,
     MONTH_SYM = 585,
     MULTILINESTRING = 586,
     MULTIPOINT = 587,
     MULTIPOLYGON = 588,
     MUTEX_SYM = 589,
     MYSQL_ERRNO_SYM = 590,
     NAMES_SYM = 591,
     NAME_SYM = 592,
     NATIONAL_SYM = 593,
     NATURAL = 594,
     NCHAR_STRING = 595,
     NCHAR_SYM = 596,
     NDBCLUSTER_SYM = 597,
     NE = 598,
     NEG = 599,
     NEW_SYM = 600,
     NEXT_SYM = 601,
     NODEGROUP_SYM = 602,
     NONE_SYM = 603,
     NOT2_SYM = 604,
     NOT_SYM = 605,
     NOW_SYM = 606,
     NO_SYM = 607,
     NO_WAIT_SYM = 608,
     NO_WRITE_TO_BINLOG = 609,
     NULL_SYM = 610,
     NUM = 611,
     NUMBER_SYM = 612,
     NUMERIC_SYM = 613,
     NVARCHAR_SYM = 614,
     OFFSET_SYM = 615,
     OLD_PASSWORD = 616,
     ON = 617,
     ONE_SYM = 618,
     ONLY_SYM = 619,
     OPEN_SYM = 620,
     OPTIMIZE = 621,
     OPTIONS_SYM = 622,
     OPTION = 623,
     OPTIONALLY = 624,
     OR2_SYM = 625,
     ORDER_SYM = 626,
     OR_OR_SYM = 627,
     OR_SYM = 628,
     OUTER = 629,
     OUTFILE = 630,
     OUT_SYM = 631,
     OWNER_SYM = 632,
     PACK_KEYS_SYM = 633,
     PAGE_SYM = 634,
     PARAM_MARKER = 635,
     PARSER_SYM = 636,
     PARTIAL = 637,
     PARTITION_SYM = 638,
     PARTITIONS_SYM = 639,
     PARTITIONING_SYM = 640,
     PASSWORD = 641,
     PHASE_SYM = 642,
     PLUGIN_DIR_SYM = 643,
     PLUGIN_SYM = 644,
     PLUGINS_SYM = 645,
     POINT_SYM = 646,
     POLYGON = 647,
     PORT_SYM = 648,
     POSITION_SYM = 649,
     PRECISION = 650,
     PREPARE_SYM = 651,
     PRESERVE_SYM = 652,
     PREV_SYM = 653,
     PRIMARY_SYM = 654,
     PRIVILEGES = 655,
     PROCEDURE_SYM = 656,
     PROCESS = 657,
     PROCESSLIST_SYM = 658,
     PROFILE_SYM = 659,
     PROFILES_SYM = 660,
     PROXY_SYM = 661,
     PURGE = 662,
     QUARTER_SYM = 663,
     QUERY_SYM = 664,
     QUICK = 665,
     RANGE_SYM = 666,
     READS_SYM = 667,
     READ_ONLY_SYM = 668,
     READ_SYM = 669,
     READ_WRITE_SYM = 670,
     REAL = 671,
     REBUILD_SYM = 672,
     RECOVER_SYM = 673,
     REDOFILE_SYM = 674,
     REDO_BUFFER_SIZE_SYM = 675,
     REDUNDANT_SYM = 676,
     REFERENCES = 677,
     REGEXP = 678,
     RELAY = 679,
     RELAYLOG_SYM = 680,
     RELAY_LOG_FILE_SYM = 681,
     RELAY_LOG_POS_SYM = 682,
     RELAY_THREAD = 683,
     RELEASE_SYM = 684,
     RELOAD = 685,
     REMOVE_SYM = 686,
     RENAME = 687,
     REORGANIZE_SYM = 688,
     REPAIR = 689,
     REPEATABLE_SYM = 690,
     REPEAT_SYM = 691,
     REPLACE = 692,
     REPLICATION = 693,
     REQUIRE_SYM = 694,
     RESET_SYM = 695,
     RESIGNAL_SYM = 696,
     RESOURCES = 697,
     RESTORE_SYM = 698,
     RESTRICT = 699,
     RESUME_SYM = 700,
     RETURNED_SQLSTATE_SYM = 701,
     RETURNS_SYM = 702,
     RETURN_SYM = 703,
     REVERSE_SYM = 704,
     REVOKE = 705,
     RIGHT = 706,
     ROLLBACK_SYM = 707,
     ROLLUP_SYM = 708,
     ROUTINE_SYM = 709,
     ROWS_SYM = 710,
     ROW_FORMAT_SYM = 711,
     ROW_SYM = 712,
     ROW_COUNT_SYM = 713,
     RTREE_SYM = 714,
     SAVEPOINT_SYM = 715,
     SCHEDULE_SYM = 716,
     SCHEMA_NAME_SYM = 717,
     SECOND_MICROSECOND_SYM = 718,
     SECOND_SYM = 719,
     SECURITY_SYM = 720,
     SELECT_SYM = 721,
     SENSITIVE_SYM = 722,
     SEPARATOR_SYM = 723,
     SERIALIZABLE_SYM = 724,
     SERIAL_SYM = 725,
     SESSION_SYM = 726,
     SERVER_SYM = 727,
     SERVER_OPTIONS = 728,
     SET = 729,
     SET_VAR = 730,
     SHARE_SYM = 731,
     SHIFT_LEFT = 732,
     SHIFT_RIGHT = 733,
     SHOW = 734,
     SHUTDOWN = 735,
     SIGNAL_SYM = 736,
     SIGNED_SYM = 737,
     SIMPLE_SYM = 738,
     SLAVE = 739,
     SLOW = 740,
     SMALLINT = 741,
     SNAPSHOT_SYM = 742,
     SOCKET_SYM = 743,
     SONAME_SYM = 744,
     SOUNDS_SYM = 745,
     SOURCE_SYM = 746,
     SPATIAL_SYM = 747,
     SPECIFIC_SYM = 748,
     SQLEXCEPTION_SYM = 749,
     SQLSTATE_SYM = 750,
     SQLWARNING_SYM = 751,
     SQL_AFTER_GTIDS = 752,
     SQL_BEFORE_GTIDS = 753,
     SQL_BIG_RESULT = 754,
     SQL_BUFFER_RESULT = 755,
     SQL_CACHE_SYM = 756,
     SQL_CALC_FOUND_ROWS = 757,
     SQL_NO_CACHE_SYM = 758,
     SQL_SMALL_RESULT = 759,
     SQL_SYM = 760,
     SQL_THREAD = 761,
     SSL_SYM = 762,
     STARTING = 763,
     STARTS_SYM = 764,
     START_SYM = 765,
     STATUS_SYM = 766,
     STDDEV_SAMP_SYM = 767,
     STD_SYM = 768,
     STOP_SYM = 769,
     STORAGE_SYM = 770,
     STRAIGHT_JOIN = 771,
     STRING_SYM = 772,
     SUBCLASS_ORIGIN_SYM = 773,
     SUBDATE_SYM = 774,
     SUBJECT_SYM = 775,
     SUBPARTITIONS_SYM = 776,
     SUBPARTITION_SYM = 777,
     SUBSTRING = 778,
     SUM_SYM = 779,
     SUPER_SYM = 780,
     SUSPEND_SYM = 781,
     SWAPS_SYM = 782,
     SWITCHES_SYM = 783,
     SYSDATE = 784,
     TABLES = 785,
     TABLESPACE = 786,
     TABLE_REF_PRIORITY = 787,
     TABLE_SYM = 788,
     TABLE_CHECKSUM_SYM = 789,
     TABLE_NAME_SYM = 790,
     TEMPORARY = 791,
     TEMPTABLE_SYM = 792,
     TERMINATED = 793,
     TEXT_STRING = 794,
     TEXT_SYM = 795,
     THAN_SYM = 796,
     THEN_SYM = 797,
     TIMESTAMP = 798,
     TIMESTAMP_ADD = 799,
     TIMESTAMP_DIFF = 800,
     TIME_SYM = 801,
     TINYBLOB = 802,
     TINYINT = 803,
     TINYTEXT = 804,
     TO_SYM = 805,
     TRAILING = 806,
     TRANSACTION_SYM = 807,
     TRIGGERS_SYM = 808,
     TRIGGER_SYM = 809,
     TRIM = 810,
     TRUE_SYM = 811,
     TRUNCATE_SYM = 812,
     TYPES_SYM = 813,
     TYPE_SYM = 814,
     UDF_RETURNS_SYM = 815,
     ULONGLONG_NUM = 816,
     UNCOMMITTED_SYM = 817,
     UNDEFINED_SYM = 818,
     UNDERSCORE_CHARSET = 819,
     UNDOFILE_SYM = 820,
     UNDO_BUFFER_SIZE_SYM = 821,
     UNDO_SYM = 822,
     UNICODE_SYM = 823,
     UNINSTALL_SYM = 824,
     UNION_SYM = 825,
     UNIQUE_SYM = 826,
     UNKNOWN_SYM = 827,
     UNLOCK_SYM = 828,
     UNSIGNED = 829,
     UNTIL_SYM = 830,
     UPDATE_SYM = 831,
     UPGRADE_SYM = 832,
     USAGE = 833,
     USER = 834,
     USE_FRM = 835,
     USE_SYM = 836,
     USING = 837,
     UTC_DATE_SYM = 838,
     UTC_TIMESTAMP_SYM = 839,
     UTC_TIME_SYM = 840,
     VALUES = 841,
     VALUE_SYM = 842,
     VARBINARY = 843,
     VARCHAR = 844,
     VARIABLES = 845,
     VARIANCE_SYM = 846,
     VARYING = 847,
     VAR_SAMP_SYM = 848,
     VIEW_SYM = 849,
     WAIT_SYM = 850,
     WARNINGS = 851,
     WEEK_SYM = 852,
     WEIGHT_STRING_SYM = 853,
     WHEN_SYM = 854,
     WHERE = 855,
     WHILE_SYM = 856,
     WITH = 857,
     WITH_CUBE_SYM = 858,
     WITH_ROLLUP_SYM = 859,
     WORK_SYM = 860,
     WRAPPER_SYM = 861,
     WRITE_SYM = 862,
     X509_SYM = 863,
     XA_SYM = 864,
     XML_SYM = 865,
     XOR = 866,
     YEAR_MONTH_SYM = 867,
     YEAR_SYM = 868,
     ZEROFILL = 869
   };
#endif
/* Tokens.  */
#define ABORT_SYM 258
#define ACCESSIBLE_SYM 259
#define ACTION 260
#define ADD 261
#define ADDDATE_SYM 262
#define AFTER_SYM 263
#define AGAINST 264
#define AGGREGATE_SYM 265
#define ALGORITHM_SYM 266
#define ALL 267
#define ALTER 268
#define ANALYZE_SYM 269
#define AND_AND_SYM 270
#define AND_SYM 271
#define ANY_SYM 272
#define AS 273
#define ASC 274
#define ASCII_SYM 275
#define ASENSITIVE_SYM 276
#define AT_SYM 277
#define AUTHORS_SYM 278
#define AUTOEXTEND_SIZE_SYM 279
#define AUTO_INC 280
#define AVG_ROW_LENGTH 281
#define AVG_SYM 282
#define BACKUP_SYM 283
#define BEFORE_SYM 284
#define BEGIN_SYM 285
#define BETWEEN_SYM 286
#define BIGINT 287
#define BINARY 288
#define BINLOG_SYM 289
#define BIN_NUM 290
#define BIT_AND 291
#define BIT_OR 292
#define BIT_SYM 293
#define BIT_XOR 294
#define BLOB_SYM 295
#define BLOCK_SYM 296
#define BOOLEAN_SYM 297
#define BOOL_SYM 298
#define BOTH 299
#define BTREE_SYM 300
#define BY 301
#define BYTE_SYM 302
#define CACHE_SYM 303
#define CALL_SYM 304
#define CASCADE 305
#define CASCADED 306
#define CASE_SYM 307
#define CAST_SYM 308
#define CATALOG_NAME_SYM 309
#define CHAIN_SYM 310
#define CHANGE 311
#define CHANGED 312
#define CHARSET 313
#define CHAR_SYM 314
#define CHECKSUM_SYM 315
#define CHECK_SYM 316
#define CIPHER_SYM 317
#define CLASS_ORIGIN_SYM 318
#define CLIENT_SYM 319
#define CLOSE_SYM 320
#define COALESCE 321
#define CODE_SYM 322
#define COLLATE_SYM 323
#define COLLATION_SYM 324
#define COLUMNS 325
#define COLUMN_SYM 326
#define COLUMN_NAME_SYM 327
#define COMMENT_SYM 328
#define COMMITTED_SYM 329
#define COMMIT_SYM 330
#define COMPACT_SYM 331
#define COMPLETION_SYM 332
#define COMPRESSED_SYM 333
#define CONCURRENT 334
#define CONDITION_SYM 335
#define CONNECTION_SYM 336
#define CONSISTENT_SYM 337
#define CONSTRAINT 338
#define CONSTRAINT_CATALOG_SYM 339
#define CONSTRAINT_NAME_SYM 340
#define CONSTRAINT_SCHEMA_SYM 341
#define CONTAINS_SYM 342
#define CONTEXT_SYM 343
#define CONTINUE_SYM 344
#define CONTRIBUTORS_SYM 345
#define CONVERT_SYM 346
#define COUNT_SYM 347
#define CPU_SYM 348
#define CREATE 349
#define CROSS 350
#define CUBE_SYM 351
#define CURDATE 352
#define CURRENT_SYM 353
#define CURRENT_USER 354
#define CURSOR_SYM 355
#define CURSOR_NAME_SYM 356
#define CURTIME 357
#define DATABASE 358
#define DATABASES 359
#define DATAFILE_SYM 360
#define DATA_SYM 361
#define DATETIME 362
#define DATE_ADD_INTERVAL 363
#define DATE_SUB_INTERVAL 364
#define DATE_SYM 365
#define DAY_HOUR_SYM 366
#define DAY_MICROSECOND_SYM 367
#define DAY_MINUTE_SYM 368
#define DAY_SECOND_SYM 369
#define DAY_SYM 370
#define DEALLOCATE_SYM 371
#define DECIMAL_NUM 372
#define DECIMAL_SYM 373
#define DECLARE_SYM 374
#define DEFAULT 375
#define DEFAULT_AUTH_SYM 376
#define DEFINER_SYM 377
#define DELAYED_SYM 378
#define DELAY_KEY_WRITE_SYM 379
#define DELETE_SYM 380
#define DESC 381
#define DESCRIBE 382
#define DES_KEY_FILE 383
#define DETERMINISTIC_SYM 384
#define DIAGNOSTICS_SYM 385
#define DIRECTORY_SYM 386
#define DISABLE_SYM 387
#define DISCARD 388
#define DISK_SYM 389
#define DISTINCT 390
#define DIV_SYM 391
#define DOUBLE_SYM 392
#define DO_SYM 393
#define DROP 394
#define DUAL_SYM 395
#define DUMPFILE 396
#define DUPLICATE_SYM 397
#define DYNAMIC_SYM 398
#define EACH_SYM 399
#define ELSE 400
#define ELSEIF_SYM 401
#define ENABLE_SYM 402
#define ENCLOSED 403
#define END 404
#define ENDS_SYM 405
#define END_OF_INPUT 406
#define ENGINES_SYM 407
#define ENGINE_SYM 408
#define ENUM 409
#define EQ 410
#define EQUAL_SYM 411
#define ERROR_SYM 412
#define ERRORS 413
#define ESCAPED 414
#define ESCAPE_SYM 415
#define EVENTS_SYM 416
#define EVENT_SYM 417
#define EVERY_SYM 418
#define EXCHANGE_SYM 419
#define EXECUTE_SYM 420
#define EXISTS 421
#define EXIT_SYM 422
#define EXPANSION_SYM 423
#define EXTENDED_SYM 424
#define EXTENT_SIZE_SYM 425
#define EXTRACT_SYM 426
#define FALSE_SYM 427
#define FAST_SYM 428
#define FAULTS_SYM 429
#define FETCH_SYM 430
#define FILE_SYM 431
#define FIRST_SYM 432
#define FIXED_SYM 433
#define FLOAT_NUM 434
#define FLOAT_SYM 435
#define FLUSH_SYM 436
#define FORCE_SYM 437
#define FOREIGN 438
#define FOR_SYM 439
#define FORMAT_SYM 440
#define FOUND_SYM 441
#define FROM 442
#define FULL 443
#define FULLTEXT_SYM 444
#define FUNCTION_SYM 445
#define GE 446
#define GENERAL 447
#define GEOMETRYCOLLECTION 448
#define GEOMETRY_SYM 449
#define GET_FORMAT 450
#define GET_SYM 451
#define GLOBAL_SYM 452
#define GRANT 453
#define GRANTS 454
#define GROUP_SYM 455
#define GROUP_CONCAT_SYM 456
#define GT_SYM 457
#define HANDLER_SYM 458
#define HASH_SYM 459
#define HAVING 460
#define HELP_SYM 461
#define HEX_NUM 462
#define HIGH_PRIORITY 463
#define HOST_SYM 464
#define HOSTS_SYM 465
#define HOUR_MICROSECOND_SYM 466
#define HOUR_MINUTE_SYM 467
#define HOUR_SECOND_SYM 468
#define HOUR_SYM 469
#define IDENT 470
#define IDENTIFIED_SYM 471
#define IDENT_QUOTED 472
#define IF 473
#define IGNORE_SYM 474
#define IGNORE_SERVER_IDS_SYM 475
#define IMPORT 476
#define INDEXES 477
#define INDEX_SYM 478
#define INFILE 479
#define INITIAL_SIZE_SYM 480
#define INNER_SYM 481
#define INOUT_SYM 482
#define INSENSITIVE_SYM 483
#define INSERT 484
#define INSERT_METHOD 485
#define INSTALL_SYM 486
#define INTERVAL_SYM 487
#define INTO 488
#define INT_SYM 489
#define INVOKER_SYM 490
#define IN_SYM 491
#define IO_AFTER_GTIDS 492
#define IO_BEFORE_GTIDS 493
#define IO_SYM 494
#define IPC_SYM 495
#define IS 496
#define ISOLATION 497
#define ISSUER_SYM 498
#define ITERATE_SYM 499
#define JOIN_SYM 500
#define KEYS 501
#define KEY_BLOCK_SIZE 502
#define KEY_SYM 503
#define KILL_SYM 504
#define LANGUAGE_SYM 505
#define LAST_SYM 506
#define LE 507
#define LEADING 508
#define LEAVES 509
#define LEAVE_SYM 510
#define LEFT 511
#define LESS_SYM 512
#define LEVEL_SYM 513
#define LEX_HOSTNAME 514
#define LIKE 515
#define LIMIT 516
#define LINEAR_SYM 517
#define LINES 518
#define LINESTRING 519
#define LIST_SYM 520
#define LOAD 521
#define LOCAL_SYM 522
#define LOCATOR_SYM 523
#define LOCKS_SYM 524
#define LOCK_SYM 525
#define LOGFILE_SYM 526
#define LOGS_SYM 527
#define LONGBLOB 528
#define LONGTEXT 529
#define LONG_NUM 530
#define LONG_SYM 531
#define LOOP_SYM 532
#define LOW_PRIORITY 533
#define LT 534
#define MASTER_AUTO_POSITION_SYM 535
#define MASTER_BIND_SYM 536
#define MASTER_CONNECT_RETRY_SYM 537
#define MASTER_DELAY_SYM 538
#define MASTER_HOST_SYM 539
#define MASTER_LOG_FILE_SYM 540
#define MASTER_LOG_POS_SYM 541
#define MASTER_PASSWORD_SYM 542
#define MASTER_PORT_SYM 543
#define MASTER_RETRY_COUNT_SYM 544
#define MASTER_SERVER_ID_SYM 545
#define MASTER_SSL_CAPATH_SYM 546
#define MASTER_SSL_CA_SYM 547
#define MASTER_SSL_CERT_SYM 548
#define MASTER_SSL_CIPHER_SYM 549
#define MASTER_SSL_CRL_SYM 550
#define MASTER_SSL_CRLPATH_SYM 551
#define MASTER_SSL_KEY_SYM 552
#define MASTER_SSL_SYM 553
#define MASTER_SSL_VERIFY_SERVER_CERT_SYM 554
#define MASTER_SYM 555
#define MASTER_USER_SYM 556
#define MASTER_HEARTBEAT_PERIOD_SYM 557
#define MATCH 558
#define MAX_CONNECTIONS_PER_HOUR 559
#define MAX_QUERIES_PER_HOUR 560
#define MAX_ROWS 561
#define MAX_SIZE_SYM 562
#define MAX_SYM 563
#define MAX_UPDATES_PER_HOUR 564
#define MAX_USER_CONNECTIONS_SYM 565
#define MAX_VALUE_SYM 566
#define MEDIUMBLOB 567
#define MEDIUMINT 568
#define MEDIUMTEXT 569
#define MEDIUM_SYM 570
#define MEMORY_SYM 571
#define MERGE_SYM 572
#define MESSAGE_TEXT_SYM 573
#define MICROSECOND_SYM 574
#define MIGRATE_SYM 575
#define MINUTE_MICROSECOND_SYM 576
#define MINUTE_SECOND_SYM 577
#define MINUTE_SYM 578
#define MIN_ROWS 579
#define MIN_SYM 580
#define MODE_SYM 581
#define MODIFIES_SYM 582
#define MODIFY_SYM 583
#define MOD_SYM 584
#define MONTH_SYM 585
#define MULTILINESTRING 586
#define MULTIPOINT 587
#define MULTIPOLYGON 588
#define MUTEX_SYM 589
#define MYSQL_ERRNO_SYM 590
#define NAMES_SYM 591
#define NAME_SYM 592
#define NATIONAL_SYM 593
#define NATURAL 594
#define NCHAR_STRING 595
#define NCHAR_SYM 596
#define NDBCLUSTER_SYM 597
#define NE 598
#define NEG 599
#define NEW_SYM 600
#define NEXT_SYM 601
#define NODEGROUP_SYM 602
#define NONE_SYM 603
#define NOT2_SYM 604
#define NOT_SYM 605
#define NOW_SYM 606
#define NO_SYM 607
#define NO_WAIT_SYM 608
#define NO_WRITE_TO_BINLOG 609
#define NULL_SYM 610
#define NUM 611
#define NUMBER_SYM 612
#define NUMERIC_SYM 613
#define NVARCHAR_SYM 614
#define OFFSET_SYM 615
#define OLD_PASSWORD 616
#define ON 617
#define ONE_SYM 618
#define ONLY_SYM 619
#define OPEN_SYM 620
#define OPTIMIZE 621
#define OPTIONS_SYM 622
#define OPTION 623
#define OPTIONALLY 624
#define OR2_SYM 625
#define ORDER_SYM 626
#define OR_OR_SYM 627
#define OR_SYM 628
#define OUTER 629
#define OUTFILE 630
#define OUT_SYM 631
#define OWNER_SYM 632
#define PACK_KEYS_SYM 633
#define PAGE_SYM 634
#define PARAM_MARKER 635
#define PARSER_SYM 636
#define PARTIAL 637
#define PARTITION_SYM 638
#define PARTITIONS_SYM 639
#define PARTITIONING_SYM 640
#define PASSWORD 641
#define PHASE_SYM 642
#define PLUGIN_DIR_SYM 643
#define PLUGIN_SYM 644
#define PLUGINS_SYM 645
#define POINT_SYM 646
#define POLYGON 647
#define PORT_SYM 648
#define POSITION_SYM 649
#define PRECISION 650
#define PREPARE_SYM 651
#define PRESERVE_SYM 652
#define PREV_SYM 653
#define PRIMARY_SYM 654
#define PRIVILEGES 655
#define PROCEDURE_SYM 656
#define PROCESS 657
#define PROCESSLIST_SYM 658
#define PROFILE_SYM 659
#define PROFILES_SYM 660
#define PROXY_SYM 661
#define PURGE 662
#define QUARTER_SYM 663
#define QUERY_SYM 664
#define QUICK 665
#define RANGE_SYM 666
#define READS_SYM 667
#define READ_ONLY_SYM 668
#define READ_SYM 669
#define READ_WRITE_SYM 670
#define REAL 671
#define REBUILD_SYM 672
#define RECOVER_SYM 673
#define REDOFILE_SYM 674
#define REDO_BUFFER_SIZE_SYM 675
#define REDUNDANT_SYM 676
#define REFERENCES 677
#define REGEXP 678
#define RELAY 679
#define RELAYLOG_SYM 680
#define RELAY_LOG_FILE_SYM 681
#define RELAY_LOG_POS_SYM 682
#define RELAY_THREAD 683
#define RELEASE_SYM 684
#define RELOAD 685
#define REMOVE_SYM 686
#define RENAME 687
#define REORGANIZE_SYM 688
#define REPAIR 689
#define REPEATABLE_SYM 690
#define REPEAT_SYM 691
#define REPLACE 692
#define REPLICATION 693
#define REQUIRE_SYM 694
#define RESET_SYM 695
#define RESIGNAL_SYM 696
#define RESOURCES 697
#define RESTORE_SYM 698
#define RESTRICT 699
#define RESUME_SYM 700
#define RETURNED_SQLSTATE_SYM 701
#define RETURNS_SYM 702
#define RETURN_SYM 703
#define REVERSE_SYM 704
#define REVOKE 705
#define RIGHT 706
#define ROLLBACK_SYM 707
#define ROLLUP_SYM 708
#define ROUTINE_SYM 709
#define ROWS_SYM 710
#define ROW_FORMAT_SYM 711
#define ROW_SYM 712
#define ROW_COUNT_SYM 713
#define RTREE_SYM 714
#define SAVEPOINT_SYM 715
#define SCHEDULE_SYM 716
#define SCHEMA_NAME_SYM 717
#define SECOND_MICROSECOND_SYM 718
#define SECOND_SYM 719
#define SECURITY_SYM 720
#define SELECT_SYM 721
#define SENSITIVE_SYM 722
#define SEPARATOR_SYM 723
#define SERIALIZABLE_SYM 724
#define SERIAL_SYM 725
#define SESSION_SYM 726
#define SERVER_SYM 727
#define SERVER_OPTIONS 728
#define SET 729
#define SET_VAR 730
#define SHARE_SYM 731
#define SHIFT_LEFT 732
#define SHIFT_RIGHT 733
#define SHOW 734
#define SHUTDOWN 735
#define SIGNAL_SYM 736
#define SIGNED_SYM 737
#define SIMPLE_SYM 738
#define SLAVE 739
#define SLOW 740
#define SMALLINT 741
#define SNAPSHOT_SYM 742
#define SOCKET_SYM 743
#define SONAME_SYM 744
#define SOUNDS_SYM 745
#define SOURCE_SYM 746
#define SPATIAL_SYM 747
#define SPECIFIC_SYM 748
#define SQLEXCEPTION_SYM 749
#define SQLSTATE_SYM 750
#define SQLWARNING_SYM 751
#define SQL_AFTER_GTIDS 752
#define SQL_BEFORE_GTIDS 753
#define SQL_BIG_RESULT 754
#define SQL_BUFFER_RESULT 755
#define SQL_CACHE_SYM 756
#define SQL_CALC_FOUND_ROWS 757
#define SQL_NO_CACHE_SYM 758
#define SQL_SMALL_RESULT 759
#define SQL_SYM 760
#define SQL_THREAD 761
#define SSL_SYM 762
#define STARTING 763
#define STARTS_SYM 764
#define START_SYM 765
#define STATUS_SYM 766
#define STDDEV_SAMP_SYM 767
#define STD_SYM 768
#define STOP_SYM 769
#define STORAGE_SYM 770
#define STRAIGHT_JOIN 771
#define STRING_SYM 772
#define SUBCLASS_ORIGIN_SYM 773
#define SUBDATE_SYM 774
#define SUBJECT_SYM 775
#define SUBPARTITIONS_SYM 776
#define SUBPARTITION_SYM 777
#define SUBSTRING 778
#define SUM_SYM 779
#define SUPER_SYM 780
#define SUSPEND_SYM 781
#define SWAPS_SYM 782
#define SWITCHES_SYM 783
#define SYSDATE 784
#define TABLES 785
#define TABLESPACE 786
#define TABLE_REF_PRIORITY 787
#define TABLE_SYM 788
#define TABLE_CHECKSUM_SYM 789
#define TABLE_NAME_SYM 790
#define TEMPORARY 791
#define TEMPTABLE_SYM 792
#define TERMINATED 793
#define TEXT_STRING 794
#define TEXT_SYM 795
#define THAN_SYM 796
#define THEN_SYM 797
#define TIMESTAMP 798
#define TIMESTAMP_ADD 799
#define TIMESTAMP_DIFF 800
#define TIME_SYM 801
#define TINYBLOB 802
#define TINYINT 803
#define TINYTEXT 804
#define TO_SYM 805
#define TRAILING 806
#define TRANSACTION_SYM 807
#define TRIGGERS_SYM 808
#define TRIGGER_SYM 809
#define TRIM 810
#define TRUE_SYM 811
#define TRUNCATE_SYM 812
#define TYPES_SYM 813
#define TYPE_SYM 814
#define UDF_RETURNS_SYM 815
#define ULONGLONG_NUM 816
#define UNCOMMITTED_SYM 817
#define UNDEFINED_SYM 818
#define UNDERSCORE_CHARSET 819
#define UNDOFILE_SYM 820
#define UNDO_BUFFER_SIZE_SYM 821
#define UNDO_SYM 822
#define UNICODE_SYM 823
#define UNINSTALL_SYM 824
#define UNION_SYM 825
#define UNIQUE_SYM 826
#define UNKNOWN_SYM 827
#define UNLOCK_SYM 828
#define UNSIGNED 829
#define UNTIL_SYM 830
#define UPDATE_SYM 831
#define UPGRADE_SYM 832
#define USAGE 833
#define USER 834
#define USE_FRM 835
#define USE_SYM 836
#define USING 837
#define UTC_DATE_SYM 838
#define UTC_TIMESTAMP_SYM 839
#define UTC_TIME_SYM 840
#define VALUES 841
#define VALUE_SYM 842
#define VARBINARY 843
#define VARCHAR 844
#define VARIABLES 845
#define VARIANCE_SYM 846
#define VARYING 847
#define VAR_SAMP_SYM 848
#define VIEW_SYM 849
#define WAIT_SYM 850
#define WARNINGS 851
#define WEEK_SYM 852
#define WEIGHT_STRING_SYM 853
#define WHEN_SYM 854
#define WHERE 855
#define WHILE_SYM 856
#define WITH 857
#define WITH_CUBE_SYM 858
#define WITH_ROLLUP_SYM 859
#define WORK_SYM 860
#define WRAPPER_SYM 861
#define WRITE_SYM 862
#define X509_SYM 863
#define XA_SYM 864
#define XML_SYM 865
#define XOR 866
#define YEAR_MONTH_SYM 867
#define YEAR_SYM 868
#define ZEROFILL 869




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 914 "/export/home/pb2/build/sb_0-5372937-1333009038.16/mysql-5.6.5-m8-release-export-3282244/sql/sql_yacc.yy"
{
  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;
  LEX_STRING lex_str;
  LEX_STRING *lex_str_ptr;
  LEX_SYMBOL symbol;
  Table_ident *table;
  char *simple_string;
  Item *item;
  Item_num *item_num;
  List<Item> *item_list;
  List<String> *string_list;
  String *string;
  Key_part_spec *key_part;
  TABLE_LIST *table_list;
  udf_func *udf;
  LEX_USER *lex_user;
  struct sys_var_with_base variable;
  enum enum_var_type var_type;
  Key::Keytype key_type;
  enum ha_key_alg key_alg;
  handlerton *db_type;
  enum row_type row_type;
  enum ha_rkey_function ha_rkey_mode;
  enum enum_ha_read_modes ha_read_mode;
  enum enum_tx_isolation tx_isolation;
  enum Cast_target cast_type;
  enum Item_udftype udf_type;
  const CHARSET_INFO *charset;
  thr_lock_type lock_type;
  interval_type interval, interval_time_st;
  timestamp_type date_time_type;
  st_select_lex *select_lex;
  chooser_compare_func_creator boolfunc2creator;
  class sp_condition_value *spcondvalue;
  struct { int vars, conds, hndlrs, curs; } spblock;
  sp_name *spname;
  LEX *lex;
  sp_head *sphead;
  struct p_elem_val *p_elem_value;
  enum index_hint_type index_hint;
  enum enum_filetype filetype;
  enum Foreign_key::fk_option m_fk_option;
  enum enum_yes_no_unknown m_yes_no_unk;
  Diag_condition_item_name diag_condition_item_name;
  Diagnostics_information::Which_area diag_area;
  Diagnostics_information *diag_info;
  Statement_information_item *stmt_info_item;
  Statement_information_item::Name stmt_info_item_name;
  List<Statement_information_item> *stmt_info_list;
  Condition_information_item *cond_info_item;
  Condition_information_item::Name cond_info_item_name;
  List<Condition_information_item> *cond_info_list;
}
/* Line 1529 of yacc.c.  */
#line 1334 "/export/home/pb2/build/sb_0-5372937-1333009038.16/dist/sql/sql_yacc.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



