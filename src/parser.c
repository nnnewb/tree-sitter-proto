#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 295
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 10

enum {
  anon_sym_SEMI = 1,
  anon_sym_syntax = 2,
  anon_sym_EQ = 3,
  anon_sym_DQUOTEproto3_DQUOTE = 4,
  anon_sym_import = 5,
  anon_sym_weak = 6,
  anon_sym_public = 7,
  anon_sym_package = 8,
  anon_sym_option = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_DOT = 12,
  anon_sym_enum = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_DASH = 16,
  anon_sym_LBRACK = 17,
  anon_sym_COMMA = 18,
  anon_sym_RBRACK = 19,
  anon_sym_message = 20,
  anon_sym_optional = 21,
  anon_sym_repeated = 22,
  anon_sym_oneof = 23,
  anon_sym_map = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_int32 = 27,
  anon_sym_int64 = 28,
  anon_sym_uint32 = 29,
  anon_sym_uint64 = 30,
  anon_sym_sint32 = 31,
  anon_sym_sint64 = 32,
  anon_sym_fixed32 = 33,
  anon_sym_fixed64 = 34,
  anon_sym_sfixed32 = 35,
  anon_sym_sfixed64 = 36,
  anon_sym_bool = 37,
  anon_sym_string = 38,
  anon_sym_double = 39,
  anon_sym_float = 40,
  anon_sym_bytes = 41,
  anon_sym_reserved = 42,
  anon_sym_to = 43,
  anon_sym_max = 44,
  anon_sym_service = 45,
  anon_sym_rpc = 46,
  anon_sym_stream = 47,
  anon_sym_returns = 48,
  anon_sym_PLUS = 49,
  anon_sym_COLON = 50,
  sym_identifier = 51,
  sym_true = 52,
  sym_false = 53,
  sym_decimal_lit = 54,
  sym_octal_lit = 55,
  sym_hex_lit = 56,
  sym_float_lit = 57,
  anon_sym_DQUOTE = 58,
  aux_sym_string_token1 = 59,
  anon_sym_SQUOTE = 60,
  aux_sym_string_token2 = 61,
  sym_escape_sequence = 62,
  sym_comment = 63,
  sym_source_file = 64,
  sym_empty_statement = 65,
  sym_syntax = 66,
  sym_import = 67,
  sym_package = 68,
  sym_option = 69,
  sym__option_name = 70,
  sym_enum = 71,
  sym_enum_name = 72,
  sym_enum_body = 73,
  sym_enum_field = 74,
  sym_enum_value_option = 75,
  sym_message = 76,
  sym_message_body = 77,
  sym_message_name = 78,
  sym_field = 79,
  sym_field_name = 80,
  sym_field_options = 81,
  sym_field_option = 82,
  sym_oneof = 83,
  sym_oneof_field = 84,
  sym_map_field = 85,
  sym_key_type = 86,
  sym_type = 87,
  sym_reserved = 88,
  sym_ranges = 89,
  sym_range = 90,
  sym_field_names = 91,
  sym_message_or_enum_type = 92,
  sym_field_number = 93,
  sym_service = 94,
  sym_service_name = 95,
  sym_rpc = 96,
  sym_rpc_name = 97,
  sym_constant = 98,
  sym_block_lit = 99,
  sym_full_ident = 100,
  sym_bool = 101,
  sym_int_lit = 102,
  sym_string = 103,
  aux_sym_source_file_repeat1 = 104,
  aux_sym__option_name_repeat1 = 105,
  aux_sym_enum_body_repeat1 = 106,
  aux_sym_enum_field_repeat1 = 107,
  aux_sym_message_body_repeat1 = 108,
  aux_sym_field_options_repeat1 = 109,
  aux_sym_oneof_repeat1 = 110,
  aux_sym_ranges_repeat1 = 111,
  aux_sym_field_names_repeat1 = 112,
  aux_sym_message_or_enum_type_repeat1 = 113,
  aux_sym_service_repeat1 = 114,
  aux_sym_rpc_repeat1 = 115,
  aux_sym_block_lit_repeat1 = 116,
  aux_sym_block_lit_repeat2 = 117,
  aux_sym_string_repeat1 = 118,
  aux_sym_string_repeat2 = 119,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_syntax] = "syntax",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTEproto3_DQUOTE] = "\"proto3\"",
  [anon_sym_import] = "import",
  [anon_sym_weak] = "weak",
  [anon_sym_public] = "public",
  [anon_sym_package] = "package",
  [anon_sym_option] = "option",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_message] = "message",
  [anon_sym_optional] = "optional",
  [anon_sym_repeated] = "repeated",
  [anon_sym_oneof] = "oneof",
  [anon_sym_map] = "map",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_sint32] = "sint32",
  [anon_sym_sint64] = "sint64",
  [anon_sym_fixed32] = "fixed32",
  [anon_sym_fixed64] = "fixed64",
  [anon_sym_sfixed32] = "sfixed32",
  [anon_sym_sfixed64] = "sfixed64",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_double] = "double",
  [anon_sym_float] = "float",
  [anon_sym_bytes] = "bytes",
  [anon_sym_reserved] = "reserved",
  [anon_sym_to] = "to",
  [anon_sym_max] = "max",
  [anon_sym_service] = "service",
  [anon_sym_rpc] = "rpc",
  [anon_sym_stream] = "stream",
  [anon_sym_returns] = "returns",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_decimal_lit] = "decimal_lit",
  [sym_octal_lit] = "octal_lit",
  [sym_hex_lit] = "hex_lit",
  [sym_float_lit] = "float_lit",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_empty_statement] = "empty_statement",
  [sym_syntax] = "syntax",
  [sym_import] = "import",
  [sym_package] = "package",
  [sym_option] = "option",
  [sym__option_name] = "_option_name",
  [sym_enum] = "enum",
  [sym_enum_name] = "enum_name",
  [sym_enum_body] = "enum_body",
  [sym_enum_field] = "enum_field",
  [sym_enum_value_option] = "enum_value_option",
  [sym_message] = "message",
  [sym_message_body] = "message_body",
  [sym_message_name] = "message_name",
  [sym_field] = "field",
  [sym_field_name] = "field_name",
  [sym_field_options] = "field_options",
  [sym_field_option] = "field_option",
  [sym_oneof] = "oneof",
  [sym_oneof_field] = "oneof_field",
  [sym_map_field] = "map_field",
  [sym_key_type] = "key_type",
  [sym_type] = "type",
  [sym_reserved] = "reserved",
  [sym_ranges] = "ranges",
  [sym_range] = "range",
  [sym_field_names] = "field_names",
  [sym_message_or_enum_type] = "message_or_enum_type",
  [sym_field_number] = "field_number",
  [sym_service] = "service",
  [sym_service_name] = "service_name",
  [sym_rpc] = "rpc",
  [sym_rpc_name] = "rpc_name",
  [sym_constant] = "constant",
  [sym_block_lit] = "block_lit",
  [sym_full_ident] = "full_ident",
  [sym_bool] = "bool",
  [sym_int_lit] = "int_lit",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__option_name_repeat1] = "_option_name_repeat1",
  [aux_sym_enum_body_repeat1] = "enum_body_repeat1",
  [aux_sym_enum_field_repeat1] = "enum_field_repeat1",
  [aux_sym_message_body_repeat1] = "message_body_repeat1",
  [aux_sym_field_options_repeat1] = "field_options_repeat1",
  [aux_sym_oneof_repeat1] = "oneof_repeat1",
  [aux_sym_ranges_repeat1] = "ranges_repeat1",
  [aux_sym_field_names_repeat1] = "field_names_repeat1",
  [aux_sym_message_or_enum_type_repeat1] = "message_or_enum_type_repeat1",
  [aux_sym_service_repeat1] = "service_repeat1",
  [aux_sym_rpc_repeat1] = "rpc_repeat1",
  [aux_sym_block_lit_repeat1] = "block_lit_repeat1",
  [aux_sym_block_lit_repeat2] = "block_lit_repeat2",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_syntax] = anon_sym_syntax,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTEproto3_DQUOTE] = anon_sym_DQUOTEproto3_DQUOTE,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_weak] = anon_sym_weak,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_repeated] = anon_sym_repeated,
  [anon_sym_oneof] = anon_sym_oneof,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_sint32] = anon_sym_sint32,
  [anon_sym_sint64] = anon_sym_sint64,
  [anon_sym_fixed32] = anon_sym_fixed32,
  [anon_sym_fixed64] = anon_sym_fixed64,
  [anon_sym_sfixed32] = anon_sym_sfixed32,
  [anon_sym_sfixed64] = anon_sym_sfixed64,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_reserved] = anon_sym_reserved,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_rpc] = anon_sym_rpc,
  [anon_sym_stream] = anon_sym_stream,
  [anon_sym_returns] = anon_sym_returns,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_decimal_lit] = sym_decimal_lit,
  [sym_octal_lit] = sym_octal_lit,
  [sym_hex_lit] = sym_hex_lit,
  [sym_float_lit] = sym_float_lit,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_empty_statement] = sym_empty_statement,
  [sym_syntax] = sym_syntax,
  [sym_import] = sym_import,
  [sym_package] = sym_package,
  [sym_option] = sym_option,
  [sym__option_name] = sym__option_name,
  [sym_enum] = sym_enum,
  [sym_enum_name] = sym_enum_name,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_field] = sym_enum_field,
  [sym_enum_value_option] = sym_enum_value_option,
  [sym_message] = sym_message,
  [sym_message_body] = sym_message_body,
  [sym_message_name] = sym_message_name,
  [sym_field] = sym_field,
  [sym_field_name] = sym_field_name,
  [sym_field_options] = sym_field_options,
  [sym_field_option] = sym_field_option,
  [sym_oneof] = sym_oneof,
  [sym_oneof_field] = sym_oneof_field,
  [sym_map_field] = sym_map_field,
  [sym_key_type] = sym_key_type,
  [sym_type] = sym_type,
  [sym_reserved] = sym_reserved,
  [sym_ranges] = sym_ranges,
  [sym_range] = sym_range,
  [sym_field_names] = sym_field_names,
  [sym_message_or_enum_type] = sym_message_or_enum_type,
  [sym_field_number] = sym_field_number,
  [sym_service] = sym_service,
  [sym_service_name] = sym_service_name,
  [sym_rpc] = sym_rpc,
  [sym_rpc_name] = sym_rpc_name,
  [sym_constant] = sym_constant,
  [sym_block_lit] = sym_block_lit,
  [sym_full_ident] = sym_full_ident,
  [sym_bool] = sym_bool,
  [sym_int_lit] = sym_int_lit,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__option_name_repeat1] = aux_sym__option_name_repeat1,
  [aux_sym_enum_body_repeat1] = aux_sym_enum_body_repeat1,
  [aux_sym_enum_field_repeat1] = aux_sym_enum_field_repeat1,
  [aux_sym_message_body_repeat1] = aux_sym_message_body_repeat1,
  [aux_sym_field_options_repeat1] = aux_sym_field_options_repeat1,
  [aux_sym_oneof_repeat1] = aux_sym_oneof_repeat1,
  [aux_sym_ranges_repeat1] = aux_sym_ranges_repeat1,
  [aux_sym_field_names_repeat1] = aux_sym_field_names_repeat1,
  [aux_sym_message_or_enum_type_repeat1] = aux_sym_message_or_enum_type_repeat1,
  [aux_sym_service_repeat1] = aux_sym_service_repeat1,
  [aux_sym_rpc_repeat1] = aux_sym_rpc_repeat1,
  [aux_sym_block_lit_repeat1] = aux_sym_block_lit_repeat1,
  [aux_sym_block_lit_repeat2] = aux_sym_block_lit_repeat2,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syntax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEproto3_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oneof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reserved] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rpc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_float_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym__option_name] = {
    .visible = false,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_name] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_value_option] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_message_body] = {
    .visible = true,
    .named = true,
  },
  [sym_message_name] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym_field_options] = {
    .visible = true,
    .named = true,
  },
  [sym_field_option] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof_field] = {
    .visible = true,
    .named = true,
  },
  [sym_map_field] = {
    .visible = true,
    .named = true,
  },
  [sym_key_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved] = {
    .visible = true,
    .named = true,
  },
  [sym_ranges] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_field_names] = {
    .visible = true,
    .named = true,
  },
  [sym_message_or_enum_type] = {
    .visible = true,
    .named = true,
  },
  [sym_field_number] = {
    .visible = true,
    .named = true,
  },
  [sym_service] = {
    .visible = true,
    .named = true,
  },
  [sym_service_name] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_name] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_block_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_full_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__option_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneof_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ranges_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_names_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_or_enum_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rpc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_lit_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_enum_member_name = 1,
  field_message_name = 2,
  field_modifier = 3,
  field_package_name = 4,
  field_path = 5,
  field_request_type = 6,
  field_response_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_enum_member_name] = "enum_member_name",
  [field_message_name] = "message_name",
  [field_modifier] = "modifier",
  [field_package_name] = "package_name",
  [field_path] = "path",
  [field_request_type] = "request_type",
  [field_response_type] = "response_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_package_name, 1},
  [2] =
    {field_message_name, 1},
  [3] =
    {field_modifier, 1},
    {field_path, 2},
  [5] =
    {field_enum_member_name, 0},
  [6] =
    {field_request_type, 3},
    {field_response_type, 7},
  [8] =
    {field_request_type, 4},
    {field_response_type, 8},
  [10] =
    {field_request_type, 3},
    {field_response_type, 8},
  [12] =
    {field_request_type, 4},
    {field_response_type, 9},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(172);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(186);
      if (lookahead == '+') ADVANCE(248);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(360);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '<') ADVANCE(207);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(208);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == ']') ADVANCE(196);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(68);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '+') ADVANCE(248);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(360);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(176);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(362);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(186);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(362);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(208);
      if (lookahead == ']') ADVANCE(196);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(386);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(385);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(362);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(209);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(217);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(213);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(221);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(225);
      END_STATE();
    case 22:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(3);
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == '4') ADVANCE(211);
      END_STATE();
    case 29:
      if (lookahead == '4') ADVANCE(219);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(215);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(223);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(227);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(169);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == 'x') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(365);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(365);
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(203);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 89:
      if (lookahead == 'k') ADVANCE(178);
      END_STATE();
    case 90:
      if (lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(245);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(205);
      if (lookahead == 'x') ADVANCE(242);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 152:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 153:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 154:
      if (lookahead == 'x') ADVANCE(242);
      END_STATE();
    case 155:
      if (lookahead == 'x') ADVANCE(174);
      END_STATE();
    case 156:
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 157:
      if (lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 158:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 170:
      if (eof) ADVANCE(172);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(186);
      if (lookahead == '+') ADVANCE(248);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(360);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '<') ADVANCE(207);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(208);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == ']') ADVANCE(196);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(68);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 171:
      if (eof) ADVANCE(172);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(360);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(171)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto3_DQUOTE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_repeated);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_repeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_oneof);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_oneof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_sint32);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_sint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_sint64);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_sint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_fixed32);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_fixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_fixed64);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_fixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_reserved);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_rpc);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_stream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(250);
      if (lookahead == '6') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(251);
      if (lookahead == '6') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(252);
      if (lookahead == '6') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(253);
      if (lookahead == '6') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(254);
      if (lookahead == '6') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          lookahead == 'g' ||
          lookahead == 'h' ||
          ('j' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          lookahead == 'j' ||
          lookahead == 'k' ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          lookahead == 'o' ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(335);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(316);
      if (lookahead == 'y') ADVANCE(334);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          lookahead == 'q' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'p') ADVANCE(286);
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'b') ADVANCE(303);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'f') ADVANCE(353);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'f') ADVANCE(204);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'm') ADVANCE(246);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'u') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'v') ADVANCE(287);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(353);
      if (lookahead == 'x') ADVANCE(277);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(353);
      if (lookahead == 'x') ADVANCE(290);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_octal_lit);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_hex_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_float_lit);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead == '/') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(374);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(381);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(386);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 171},
  [49] = {.lex_state = 171},
  [50] = {.lex_state = 171},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 171},
  [53] = {.lex_state = 171},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 171},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 171},
  [58] = {.lex_state = 171},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 171},
  [61] = {.lex_state = 171},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 171},
  [65] = {.lex_state = 171},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 171},
  [69] = {.lex_state = 171},
  [70] = {.lex_state = 171},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 171},
  [73] = {.lex_state = 171},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 171},
  [76] = {.lex_state = 171},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 171},
  [79] = {.lex_state = 171},
  [80] = {.lex_state = 171},
  [81] = {.lex_state = 171},
  [82] = {.lex_state = 171},
  [83] = {.lex_state = 171},
  [84] = {.lex_state = 171},
  [85] = {.lex_state = 171},
  [86] = {.lex_state = 171},
  [87] = {.lex_state = 171},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 171},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 14},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 171},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 171},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 171},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 171},
  [123] = {.lex_state = 171},
  [124] = {.lex_state = 171},
  [125] = {.lex_state = 171},
  [126] = {.lex_state = 171},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 171},
  [129] = {.lex_state = 171},
  [130] = {.lex_state = 171},
  [131] = {.lex_state = 171},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 171},
  [135] = {.lex_state = 16},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 16},
  [140] = {.lex_state = 16},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 16},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 6},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_syntax] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_weak] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_repeated] = ACTIONS(1),
    [anon_sym_oneof] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_sint32] = ACTIONS(1),
    [anon_sym_sint64] = ACTIONS(1),
    [anon_sym_fixed32] = ACTIONS(1),
    [anon_sym_fixed64] = ACTIONS(1),
    [anon_sym_sfixed32] = ACTIONS(1),
    [anon_sym_sfixed64] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_reserved] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_rpc] = ACTIONS(1),
    [anon_sym_stream] = ACTIONS(1),
    [anon_sym_returns] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_decimal_lit] = ACTIONS(1),
    [sym_octal_lit] = ACTIONS(1),
    [sym_hex_lit] = ACTIONS(1),
    [sym_float_lit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(288),
    [sym_syntax] = STATE(49),
    [anon_sym_syntax] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(10), 1,
      anon_sym_option,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(16), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_message,
    ACTIONS(24), 1,
      anon_sym_optional,
    ACTIONS(27), 1,
      anon_sym_repeated,
    ACTIONS(30), 1,
      anon_sym_oneof,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(39), 1,
      anon_sym_reserved,
    ACTIONS(42), 1,
      sym_identifier,
    STATE(201), 1,
      sym_message_or_enum_type,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(211), 1,
      sym_type,
    STATE(2), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(36), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [77] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      anon_sym_option,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_message,
    ACTIONS(57), 1,
      anon_sym_optional,
    ACTIONS(59), 1,
      anon_sym_repeated,
    ACTIONS(61), 1,
      anon_sym_oneof,
    ACTIONS(63), 1,
      anon_sym_map,
    ACTIONS(67), 1,
      anon_sym_reserved,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(201), 1,
      sym_message_or_enum_type,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(211), 1,
      sym_type,
    STATE(4), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(65), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [154] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      anon_sym_option,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(55), 1,
      anon_sym_message,
    ACTIONS(57), 1,
      anon_sym_optional,
    ACTIONS(59), 1,
      anon_sym_repeated,
    ACTIONS(61), 1,
      anon_sym_oneof,
    ACTIONS(63), 1,
      anon_sym_map,
    ACTIONS(67), 1,
      anon_sym_reserved,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_message_or_enum_type,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(211), 1,
      sym_type,
    STATE(2), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(65), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [231] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      anon_sym_option,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(55), 1,
      anon_sym_message,
    ACTIONS(57), 1,
      anon_sym_optional,
    ACTIONS(59), 1,
      anon_sym_repeated,
    ACTIONS(61), 1,
      anon_sym_oneof,
    ACTIONS(63), 1,
      anon_sym_map,
    ACTIONS(67), 1,
      anon_sym_reserved,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_message_or_enum_type,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(211), 1,
      sym_type,
    STATE(2), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(65), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [308] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      anon_sym_option,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(55), 1,
      anon_sym_message,
    ACTIONS(57), 1,
      anon_sym_optional,
    ACTIONS(59), 1,
      anon_sym_repeated,
    ACTIONS(61), 1,
      anon_sym_oneof,
    ACTIONS(63), 1,
      anon_sym_map,
    ACTIONS(67), 1,
      anon_sym_reserved,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_message_or_enum_type,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(211), 1,
      sym_type,
    STATE(5), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(65), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(79), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(83), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(87), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [490] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      anon_sym_option,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_message_or_enum_type,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(210), 1,
      sym_type,
    STATE(19), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(65), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(97), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [576] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      anon_sym_option,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_message_or_enum_type,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(210), 1,
      sym_type,
    STATE(10), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(65), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(103), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(107), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(111), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(115), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(119), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(123), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [837] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    ACTIONS(128), 1,
      anon_sym_option,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(201), 1,
      sym_message_or_enum_type,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(210), 1,
      sym_type,
    STATE(19), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(136), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(144), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(148), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(152), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(156), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(160), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(164), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(168), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(172), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(174), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(176), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1193] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(180), 1,
      anon_sym_repeated,
    STATE(191), 1,
      sym_type,
    STATE(201), 1,
      sym_message_or_enum_type,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    ACTIONS(65), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(184), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(188), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1289] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(201), 1,
      sym_message_or_enum_type,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(214), 1,
      sym_type,
    ACTIONS(65), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1325] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(201), 1,
      sym_message_or_enum_type,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(286), 1,
      sym_type,
    ACTIONS(65), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1361] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      anon_sym_COLON,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym_hex_lit,
    ACTIONS(206), 1,
      sym_float_lit,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    STATE(117), 1,
      sym_constant,
    ACTIONS(192), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(200), 2,
      sym_true,
      sym_false,
    ACTIONS(202), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(106), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(83), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(115), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1467] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(191), 1,
      sym_type,
    STATE(201), 1,
      sym_message_or_enum_type,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    ACTIONS(65), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1503] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym_hex_lit,
    ACTIONS(206), 1,
      sym_float_lit,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    STATE(132), 1,
      sym_constant,
    ACTIONS(192), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(200), 2,
      sym_true,
      sym_false,
    ACTIONS(202), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(106), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1550] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_float_lit,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      sym_hex_lit,
    STATE(279), 1,
      sym_constant,
    ACTIONS(200), 2,
      sym_true,
      sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(216), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(106), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1594] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_float_lit,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      sym_hex_lit,
    STATE(188), 1,
      sym_constant,
    ACTIONS(200), 2,
      sym_true,
      sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(216), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(106), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1638] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_float_lit,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      sym_hex_lit,
    STATE(283), 1,
      sym_constant,
    ACTIONS(200), 2,
      sym_true,
      sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(216), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(106), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1682] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_float_lit,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      sym_hex_lit,
    STATE(195), 1,
      sym_constant,
    ACTIONS(200), 2,
      sym_true,
      sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(216), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(106), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1726] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_float_lit,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      sym_hex_lit,
    STATE(257), 1,
      sym_constant,
    ACTIONS(200), 2,
      sym_true,
      sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(216), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(106), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1770] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_float_lit,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      sym_hex_lit,
    STATE(155), 1,
      sym_constant,
    ACTIONS(200), 2,
      sym_true,
      sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(216), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(106), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1814] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_float_lit,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      sym_hex_lit,
    STATE(282), 1,
      sym_constant,
    ACTIONS(200), 2,
      sym_true,
      sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(216), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(106), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1858] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_float_lit,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      sym_hex_lit,
    STATE(215), 1,
      sym_constant,
    ACTIONS(200), 2,
      sym_true,
      sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(216), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(106), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1902] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_float_lit,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      sym_hex_lit,
    STATE(172), 1,
      sym_constant,
    ACTIONS(200), 2,
      sym_true,
      sym_false,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(216), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(106), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1946] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(225), 1,
      anon_sym_import,
    ACTIONS(228), 1,
      anon_sym_package,
    ACTIONS(231), 1,
      anon_sym_option,
    ACTIONS(234), 1,
      anon_sym_enum,
    ACTIONS(237), 1,
      anon_sym_message,
    ACTIONS(240), 1,
      anon_sym_service,
    STATE(48), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      aux_sym_source_file_repeat1,
  [1984] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(247), 1,
      anon_sym_import,
    ACTIONS(249), 1,
      anon_sym_package,
    ACTIONS(251), 1,
      anon_sym_option,
    ACTIONS(253), 1,
      anon_sym_enum,
    ACTIONS(255), 1,
      anon_sym_message,
    ACTIONS(257), 1,
      anon_sym_service,
    STATE(50), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      aux_sym_source_file_repeat1,
  [2022] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(247), 1,
      anon_sym_import,
    ACTIONS(249), 1,
      anon_sym_package,
    ACTIONS(251), 1,
      anon_sym_option,
    ACTIONS(253), 1,
      anon_sym_enum,
    ACTIONS(255), 1,
      anon_sym_message,
    ACTIONS(257), 1,
      anon_sym_service,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    STATE(48), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      aux_sym_source_file_repeat1,
  [2060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(250), 1,
      sym_key_type,
    ACTIONS(261), 12,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
  [2081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_service,
      anon_sym_rpc,
  [2097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_service,
      anon_sym_rpc,
  [2113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DOT,
    STATE(54), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(263), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2146] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_SEMI,
    ACTIONS(272), 1,
      anon_sym_option,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 1,
      sym_identifier,
    STATE(67), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2168] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    ACTIONS(281), 1,
      anon_sym_option,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(286), 1,
      anon_sym_rpc,
    STATE(57), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [2190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2204] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_SEMI,
    ACTIONS(272), 1,
      anon_sym_option,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(56), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(293), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2272] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_SEMI,
    ACTIONS(272), 1,
      anon_sym_option,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(67), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2336] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    ACTIONS(304), 1,
      anon_sym_option,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      sym_identifier,
    STATE(67), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2372] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_option,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      anon_sym_rpc,
    STATE(78), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [2394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2408] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_octal_lit,
    ACTIONS(318), 1,
      sym_identifier,
    STATE(163), 1,
      sym_range,
    STATE(169), 1,
      sym_int_lit,
    ACTIONS(218), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(249), 2,
      sym_ranges,
      sym_field_names,
  [2432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2460] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_SEMI,
    ACTIONS(272), 1,
      anon_sym_option,
    ACTIONS(276), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(63), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOT,
    STATE(54), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(326), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2528] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_option,
    ACTIONS(316), 1,
      anon_sym_rpc,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    STATE(57), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [2550] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_option,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    STATE(83), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2568] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_option,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(82), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2586] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_option,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(82), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2604] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_SEMI,
    ACTIONS(339), 1,
      anon_sym_option,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(82), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2622] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_option,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(82), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2640] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_option,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    STATE(82), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2658] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_option,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(81), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_option,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(80), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2694] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_option,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(84), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2712] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym_octal_lit,
    STATE(28), 1,
      sym_field_number,
    STATE(30), 1,
      sym_int_lit,
    ACTIONS(354), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2729] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(358), 1,
      anon_sym_stream,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(256), 1,
      sym_message_or_enum_type,
  [2748] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_octal_lit,
    STATE(30), 1,
      sym_int_lit,
    STATE(182), 1,
      sym_field_number,
    ACTIONS(218), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_octal_lit,
    ACTIONS(362), 1,
      anon_sym_DASH,
    STATE(189), 1,
      sym_int_lit,
    ACTIONS(218), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2804] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_hex_lit,
    ACTIONS(366), 1,
      sym_float_lit,
    STATE(95), 1,
      sym_int_lit,
    ACTIONS(216), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [2821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2832] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_octal_lit,
    STATE(30), 1,
      sym_int_lit,
    STATE(162), 1,
      sym_field_number,
    ACTIONS(218), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2849] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_stream,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(240), 1,
      sym_message_or_enum_type,
  [2868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_octal_lit,
    STATE(169), 1,
      sym_int_lit,
    STATE(207), 1,
      sym_range,
    ACTIONS(218), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2907] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    STATE(270), 1,
      sym_string,
    ACTIONS(376), 2,
      anon_sym_weak,
      anon_sym_public,
  [2924] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_octal_lit,
    STATE(30), 1,
      sym_int_lit,
    STATE(224), 1,
      sym_field_number,
    ACTIONS(218), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2941] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(378), 1,
      anon_sym_stream,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(246), 1,
      sym_message_or_enum_type,
  [2960] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_octal_lit,
    ACTIONS(380), 1,
      anon_sym_max,
    STATE(223), 1,
      sym_int_lit,
    ACTIONS(218), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2977] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_octal_lit,
    STATE(30), 1,
      sym_int_lit,
    STATE(164), 1,
      sym_field_number,
    ACTIONS(218), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 5,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_to,
  [3016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_hex_lit,
    ACTIONS(366), 1,
      sym_float_lit,
    STATE(95), 1,
      sym_int_lit,
    ACTIONS(202), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [3033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3044] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(238), 1,
      sym_message_or_enum_type,
  [3060] = 4,
    ACTIONS(388), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      sym_comment,
    STATE(133), 1,
      aux_sym_string_repeat1,
    ACTIONS(390), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3074] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      aux_sym_string_repeat1,
    ACTIONS(396), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3088] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      aux_sym_string_repeat2,
    ACTIONS(398), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [3102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(115), 2,
      anon_sym_option,
      sym_identifier,
  [3114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [3124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(83), 2,
      anon_sym_option,
      sym_identifier,
  [3136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(402), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_octal_lit,
    STATE(231), 1,
      sym_int_lit,
    ACTIONS(218), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DOT,
    ACTIONS(408), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [3194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3244] = 4,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    ACTIONS(392), 1,
      sym_comment,
    STATE(137), 1,
      aux_sym_string_repeat2,
    ACTIONS(422), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [3258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(434), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3310] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      aux_sym_string_repeat1,
    ACTIONS(438), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(445), 2,
      anon_sym_option,
      sym_identifier,
  [3346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(160), 1,
      sym_enum_value_option,
    STATE(294), 1,
      sym__option_name,
  [3362] = 4,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SQUOTE,
    STATE(137), 1,
      aux_sym_string_repeat2,
    ACTIONS(453), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [3376] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(241), 1,
      sym_message_or_enum_type,
  [3392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(458), 2,
      anon_sym_option,
      sym_identifier,
  [3404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(462), 2,
      anon_sym_option,
      sym_identifier,
  [3416] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(216), 1,
      sym_field_option,
    STATE(236), 1,
      sym__option_name,
  [3432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DOT,
    ACTIONS(464), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [3444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(468), 2,
      anon_sym_option,
      sym_identifier,
  [3456] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(472), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3468] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(196), 1,
      sym_enum_value_option,
    STATE(294), 1,
      sym__option_name,
  [3484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(476), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3496] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(153), 1,
      sym_field_option,
    STATE(236), 1,
      sym__option_name,
  [3512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DOT,
    ACTIONS(478), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [3524] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(177), 1,
      sym_enum_value_option,
    STATE(294), 1,
      sym__option_name,
  [3540] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(284), 1,
      sym_message_or_enum_type,
  [3556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(482), 2,
      anon_sym_option,
      sym_identifier,
  [3568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(486), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_field_options_repeat1,
  [3593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      aux_sym_block_lit_repeat1,
  [3606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      aux_sym_block_lit_repeat1,
  [3619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(496), 1,
      anon_sym_EQ,
    STATE(54), 1,
      aux_sym__option_name_repeat1,
  [3632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(291), 1,
      sym__option_name,
  [3645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(498), 1,
      anon_sym_EQ,
    STATE(167), 1,
      aux_sym__option_name_repeat1,
  [3658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(290), 1,
      sym__option_name,
  [3671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      aux_sym_enum_field_repeat1,
  [3684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(289), 1,
      sym__option_name,
  [3697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_SEMI,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    STATE(278), 1,
      sym_field_options,
  [3710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_SEMI,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_ranges_repeat1,
  [3723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      anon_sym_SEMI,
    STATE(285), 1,
      sym_field_options,
  [3736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    ACTIONS(516), 1,
      sym_identifier,
    STATE(178), 1,
      aux_sym_block_lit_repeat2,
  [3749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      anon_sym_SEMI,
    STATE(174), 1,
      aux_sym_ranges_repeat1,
  [3762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(520), 1,
      anon_sym_EQ,
    STATE(54), 1,
      aux_sym__option_name_repeat1,
  [3775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_SEMI,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_field_names_repeat1,
  [3788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_to,
    ACTIONS(526), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(265), 1,
      sym__option_name,
  [3812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      aux_sym_block_lit_repeat2,
  [3825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      aux_sym_block_lit_repeat1,
  [3838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      aux_sym_field_options_repeat1,
  [3851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_SEMI,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_ranges_repeat1,
  [3864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      aux_sym_block_lit_repeat1,
  [3877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      aux_sym_block_lit_repeat1,
  [3890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym_enum_field_repeat1,
  [3903] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      sym_identifier,
    STATE(178), 1,
      aux_sym_block_lit_repeat2,
  [3916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      aux_sym_field_options_repeat1,
  [3929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    STATE(168), 1,
      aux_sym_field_names_repeat1,
  [3942] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      aux_sym_enum_field_repeat1,
  [3955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    ACTIONS(560), 1,
      anon_sym_SEMI,
    STATE(268), 1,
      sym_field_options,
  [3968] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(562), 1,
      anon_sym_EQ,
    STATE(156), 1,
      aux_sym__option_name_repeat1,
  [3981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(567), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      aux_sym_enum_field_repeat1,
  [3994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_SEMI,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_field_names_repeat1,
  [4007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    STATE(251), 1,
      sym_string,
  [4020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(574), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      aux_sym_enum_field_repeat1,
  [4033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_SEMI,
    ACTIONS(578), 1,
      anon_sym_LBRACK,
  [4051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(267), 1,
      sym_field_name,
  [4061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(255), 1,
      sym_field_name,
  [4071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_message_body,
  [4081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_enum_body,
  [4091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym_identifier,
    STATE(242), 1,
      sym_full_ident,
  [4141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym_identifier,
    STATE(253), 1,
      sym_service_name,
  [4151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 2,
      anon_sym_GT,
      sym_identifier,
  [4159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym_identifier,
    STATE(202), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_enum_body,
  [4179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(202), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 2,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [4197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym_identifier,
    STATE(219), 1,
      sym_message_name,
  [4207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(273), 1,
      sym_field_name,
  [4225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(292), 1,
      sym_field_name,
  [4243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(271), 1,
      sym_field_name,
  [4253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    STATE(247), 1,
      sym_field_options,
  [4273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(239), 1,
      sym_field_name,
  [4283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [4307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym_identifier,
    STATE(260), 1,
      sym_rpc_name,
  [4317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_message_body,
  [4327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym_identifier,
    STATE(203), 1,
      sym_enum_name,
  [4345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym_identifier,
    STATE(193), 1,
      sym_enum_name,
  [4355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_SEMI,
    ACTIONS(621), 1,
      anon_sym_LBRACK,
  [4373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym_identifier,
    STATE(192), 1,
      sym_message_name,
  [4383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_SEMI,
    ACTIONS(625), 1,
      anon_sym_LBRACE,
  [4393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym_identifier,
    STATE(269), 1,
      sym_full_ident,
  [4403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LBRACK,
    STATE(237), 1,
      sym_field_options,
  [4413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_SEMI,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
  [4423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_SEMI,
    ACTIONS(633), 1,
      anon_sym_LBRACE,
  [4433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    ACTIONS(637), 1,
      anon_sym_LBRACK,
  [4443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_SEMI,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
  [4461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_identifier,
    STATE(202), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 2,
      anon_sym_EQ,
      anon_sym_LBRACE,
  [4479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_EQ,
  [4486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RBRACK,
  [4493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
  [4500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_EQ,
  [4507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
  [4514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
  [4521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
  [4528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DOT,
  [4535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      sym_identifier,
  [4542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_SEMI,
  [4549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_RPAREN,
  [4556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RBRACK,
  [4563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      sym_identifier,
  [4570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_SEMI,
  [4577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_COMMA,
  [4584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_SEMI,
  [4591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
  [4598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LBRACE,
  [4605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_LBRACE,
  [4612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_EQ,
  [4619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
  [4626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_SEMI,
  [4633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_EQ,
  [4640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_SEMI,
  [4647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
  [4654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_LBRACE,
  [4661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
  [4668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_LPAREN,
  [4675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
  [4682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_EQ,
  [4689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LT,
  [4696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_EQ,
  [4703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_SEMI,
  [4710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_SEMI,
  [4717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_SEMI,
  [4724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_EQ,
  [4731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_identifier,
  [4738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_LBRACE,
  [4745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_SEMI,
  [4752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_LPAREN,
  [4759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SEMI,
  [4766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_returns,
  [4773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_SEMI,
  [4780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_SEMI,
  [4787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_SEMI,
  [4794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_returns,
  [4801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_SEMI,
  [4808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_SEMI,
  [4815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
  [4822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_SEMI,
  [4829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_GT,
  [4836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_DQUOTEproto3_DQUOTE,
  [4843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      ts_builtin_sym_end,
  [4850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_EQ,
  [4857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_EQ,
  [4864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_EQ,
  [4871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_EQ,
  [4878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_EQ,
  [4885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 308,
  [SMALL_STATE(7)] = 385,
  [SMALL_STATE(8)] = 420,
  [SMALL_STATE(9)] = 455,
  [SMALL_STATE(10)] = 490,
  [SMALL_STATE(11)] = 541,
  [SMALL_STATE(12)] = 576,
  [SMALL_STATE(13)] = 627,
  [SMALL_STATE(14)] = 662,
  [SMALL_STATE(15)] = 697,
  [SMALL_STATE(16)] = 732,
  [SMALL_STATE(17)] = 767,
  [SMALL_STATE(18)] = 802,
  [SMALL_STATE(19)] = 837,
  [SMALL_STATE(20)] = 888,
  [SMALL_STATE(21)] = 923,
  [SMALL_STATE(22)] = 958,
  [SMALL_STATE(23)] = 993,
  [SMALL_STATE(24)] = 1028,
  [SMALL_STATE(25)] = 1063,
  [SMALL_STATE(26)] = 1098,
  [SMALL_STATE(27)] = 1133,
  [SMALL_STATE(28)] = 1162,
  [SMALL_STATE(29)] = 1193,
  [SMALL_STATE(30)] = 1232,
  [SMALL_STATE(31)] = 1261,
  [SMALL_STATE(32)] = 1289,
  [SMALL_STATE(33)] = 1325,
  [SMALL_STATE(34)] = 1361,
  [SMALL_STATE(35)] = 1411,
  [SMALL_STATE(36)] = 1439,
  [SMALL_STATE(37)] = 1467,
  [SMALL_STATE(38)] = 1503,
  [SMALL_STATE(39)] = 1550,
  [SMALL_STATE(40)] = 1594,
  [SMALL_STATE(41)] = 1638,
  [SMALL_STATE(42)] = 1682,
  [SMALL_STATE(43)] = 1726,
  [SMALL_STATE(44)] = 1770,
  [SMALL_STATE(45)] = 1814,
  [SMALL_STATE(46)] = 1858,
  [SMALL_STATE(47)] = 1902,
  [SMALL_STATE(48)] = 1946,
  [SMALL_STATE(49)] = 1984,
  [SMALL_STATE(50)] = 2022,
  [SMALL_STATE(51)] = 2060,
  [SMALL_STATE(52)] = 2081,
  [SMALL_STATE(53)] = 2097,
  [SMALL_STATE(54)] = 2113,
  [SMALL_STATE(55)] = 2132,
  [SMALL_STATE(56)] = 2146,
  [SMALL_STATE(57)] = 2168,
  [SMALL_STATE(58)] = 2190,
  [SMALL_STATE(59)] = 2204,
  [SMALL_STATE(60)] = 2226,
  [SMALL_STATE(61)] = 2240,
  [SMALL_STATE(62)] = 2254,
  [SMALL_STATE(63)] = 2272,
  [SMALL_STATE(64)] = 2294,
  [SMALL_STATE(65)] = 2308,
  [SMALL_STATE(66)] = 2322,
  [SMALL_STATE(67)] = 2336,
  [SMALL_STATE(68)] = 2358,
  [SMALL_STATE(69)] = 2372,
  [SMALL_STATE(70)] = 2394,
  [SMALL_STATE(71)] = 2408,
  [SMALL_STATE(72)] = 2432,
  [SMALL_STATE(73)] = 2446,
  [SMALL_STATE(74)] = 2460,
  [SMALL_STATE(75)] = 2482,
  [SMALL_STATE(76)] = 2496,
  [SMALL_STATE(77)] = 2510,
  [SMALL_STATE(78)] = 2528,
  [SMALL_STATE(79)] = 2550,
  [SMALL_STATE(80)] = 2568,
  [SMALL_STATE(81)] = 2586,
  [SMALL_STATE(82)] = 2604,
  [SMALL_STATE(83)] = 2622,
  [SMALL_STATE(84)] = 2640,
  [SMALL_STATE(85)] = 2658,
  [SMALL_STATE(86)] = 2676,
  [SMALL_STATE(87)] = 2694,
  [SMALL_STATE(88)] = 2712,
  [SMALL_STATE(89)] = 2729,
  [SMALL_STATE(90)] = 2748,
  [SMALL_STATE(91)] = 2765,
  [SMALL_STATE(92)] = 2776,
  [SMALL_STATE(93)] = 2793,
  [SMALL_STATE(94)] = 2804,
  [SMALL_STATE(95)] = 2821,
  [SMALL_STATE(96)] = 2832,
  [SMALL_STATE(97)] = 2849,
  [SMALL_STATE(98)] = 2868,
  [SMALL_STATE(99)] = 2879,
  [SMALL_STATE(100)] = 2890,
  [SMALL_STATE(101)] = 2907,
  [SMALL_STATE(102)] = 2924,
  [SMALL_STATE(103)] = 2941,
  [SMALL_STATE(104)] = 2960,
  [SMALL_STATE(105)] = 2977,
  [SMALL_STATE(106)] = 2994,
  [SMALL_STATE(107)] = 3005,
  [SMALL_STATE(108)] = 3016,
  [SMALL_STATE(109)] = 3033,
  [SMALL_STATE(110)] = 3044,
  [SMALL_STATE(111)] = 3060,
  [SMALL_STATE(112)] = 3074,
  [SMALL_STATE(113)] = 3088,
  [SMALL_STATE(114)] = 3102,
  [SMALL_STATE(115)] = 3114,
  [SMALL_STATE(116)] = 3124,
  [SMALL_STATE(117)] = 3136,
  [SMALL_STATE(118)] = 3148,
  [SMALL_STATE(119)] = 3158,
  [SMALL_STATE(120)] = 3172,
  [SMALL_STATE(121)] = 3182,
  [SMALL_STATE(122)] = 3194,
  [SMALL_STATE(123)] = 3204,
  [SMALL_STATE(124)] = 3214,
  [SMALL_STATE(125)] = 3224,
  [SMALL_STATE(126)] = 3234,
  [SMALL_STATE(127)] = 3244,
  [SMALL_STATE(128)] = 3258,
  [SMALL_STATE(129)] = 3268,
  [SMALL_STATE(130)] = 3278,
  [SMALL_STATE(131)] = 3288,
  [SMALL_STATE(132)] = 3298,
  [SMALL_STATE(133)] = 3310,
  [SMALL_STATE(134)] = 3324,
  [SMALL_STATE(135)] = 3334,
  [SMALL_STATE(136)] = 3346,
  [SMALL_STATE(137)] = 3362,
  [SMALL_STATE(138)] = 3376,
  [SMALL_STATE(139)] = 3392,
  [SMALL_STATE(140)] = 3404,
  [SMALL_STATE(141)] = 3416,
  [SMALL_STATE(142)] = 3432,
  [SMALL_STATE(143)] = 3444,
  [SMALL_STATE(144)] = 3456,
  [SMALL_STATE(145)] = 3468,
  [SMALL_STATE(146)] = 3484,
  [SMALL_STATE(147)] = 3496,
  [SMALL_STATE(148)] = 3512,
  [SMALL_STATE(149)] = 3524,
  [SMALL_STATE(150)] = 3540,
  [SMALL_STATE(151)] = 3556,
  [SMALL_STATE(152)] = 3568,
  [SMALL_STATE(153)] = 3580,
  [SMALL_STATE(154)] = 3593,
  [SMALL_STATE(155)] = 3606,
  [SMALL_STATE(156)] = 3619,
  [SMALL_STATE(157)] = 3632,
  [SMALL_STATE(158)] = 3645,
  [SMALL_STATE(159)] = 3658,
  [SMALL_STATE(160)] = 3671,
  [SMALL_STATE(161)] = 3684,
  [SMALL_STATE(162)] = 3697,
  [SMALL_STATE(163)] = 3710,
  [SMALL_STATE(164)] = 3723,
  [SMALL_STATE(165)] = 3736,
  [SMALL_STATE(166)] = 3749,
  [SMALL_STATE(167)] = 3762,
  [SMALL_STATE(168)] = 3775,
  [SMALL_STATE(169)] = 3788,
  [SMALL_STATE(170)] = 3799,
  [SMALL_STATE(171)] = 3812,
  [SMALL_STATE(172)] = 3825,
  [SMALL_STATE(173)] = 3838,
  [SMALL_STATE(174)] = 3851,
  [SMALL_STATE(175)] = 3864,
  [SMALL_STATE(176)] = 3877,
  [SMALL_STATE(177)] = 3890,
  [SMALL_STATE(178)] = 3903,
  [SMALL_STATE(179)] = 3916,
  [SMALL_STATE(180)] = 3929,
  [SMALL_STATE(181)] = 3942,
  [SMALL_STATE(182)] = 3955,
  [SMALL_STATE(183)] = 3968,
  [SMALL_STATE(184)] = 3981,
  [SMALL_STATE(185)] = 3994,
  [SMALL_STATE(186)] = 4007,
  [SMALL_STATE(187)] = 4020,
  [SMALL_STATE(188)] = 4033,
  [SMALL_STATE(189)] = 4041,
  [SMALL_STATE(190)] = 4051,
  [SMALL_STATE(191)] = 4061,
  [SMALL_STATE(192)] = 4071,
  [SMALL_STATE(193)] = 4081,
  [SMALL_STATE(194)] = 4091,
  [SMALL_STATE(195)] = 4099,
  [SMALL_STATE(196)] = 4107,
  [SMALL_STATE(197)] = 4115,
  [SMALL_STATE(198)] = 4123,
  [SMALL_STATE(199)] = 4131,
  [SMALL_STATE(200)] = 4141,
  [SMALL_STATE(201)] = 4151,
  [SMALL_STATE(202)] = 4159,
  [SMALL_STATE(203)] = 4169,
  [SMALL_STATE(204)] = 4179,
  [SMALL_STATE(205)] = 4189,
  [SMALL_STATE(206)] = 4197,
  [SMALL_STATE(207)] = 4207,
  [SMALL_STATE(208)] = 4215,
  [SMALL_STATE(209)] = 4225,
  [SMALL_STATE(210)] = 4233,
  [SMALL_STATE(211)] = 4243,
  [SMALL_STATE(212)] = 4253,
  [SMALL_STATE(213)] = 4263,
  [SMALL_STATE(214)] = 4273,
  [SMALL_STATE(215)] = 4283,
  [SMALL_STATE(216)] = 4291,
  [SMALL_STATE(217)] = 4299,
  [SMALL_STATE(218)] = 4307,
  [SMALL_STATE(219)] = 4317,
  [SMALL_STATE(220)] = 4327,
  [SMALL_STATE(221)] = 4335,
  [SMALL_STATE(222)] = 4345,
  [SMALL_STATE(223)] = 4355,
  [SMALL_STATE(224)] = 4363,
  [SMALL_STATE(225)] = 4373,
  [SMALL_STATE(226)] = 4383,
  [SMALL_STATE(227)] = 4393,
  [SMALL_STATE(228)] = 4403,
  [SMALL_STATE(229)] = 4413,
  [SMALL_STATE(230)] = 4423,
  [SMALL_STATE(231)] = 4433,
  [SMALL_STATE(232)] = 4443,
  [SMALL_STATE(233)] = 4451,
  [SMALL_STATE(234)] = 4461,
  [SMALL_STATE(235)] = 4471,
  [SMALL_STATE(236)] = 4479,
  [SMALL_STATE(237)] = 4486,
  [SMALL_STATE(238)] = 4493,
  [SMALL_STATE(239)] = 4500,
  [SMALL_STATE(240)] = 4507,
  [SMALL_STATE(241)] = 4514,
  [SMALL_STATE(242)] = 4521,
  [SMALL_STATE(243)] = 4528,
  [SMALL_STATE(244)] = 4535,
  [SMALL_STATE(245)] = 4542,
  [SMALL_STATE(246)] = 4549,
  [SMALL_STATE(247)] = 4556,
  [SMALL_STATE(248)] = 4563,
  [SMALL_STATE(249)] = 4570,
  [SMALL_STATE(250)] = 4577,
  [SMALL_STATE(251)] = 4584,
  [SMALL_STATE(252)] = 4591,
  [SMALL_STATE(253)] = 4598,
  [SMALL_STATE(254)] = 4605,
  [SMALL_STATE(255)] = 4612,
  [SMALL_STATE(256)] = 4619,
  [SMALL_STATE(257)] = 4626,
  [SMALL_STATE(258)] = 4633,
  [SMALL_STATE(259)] = 4640,
  [SMALL_STATE(260)] = 4647,
  [SMALL_STATE(261)] = 4654,
  [SMALL_STATE(262)] = 4661,
  [SMALL_STATE(263)] = 4668,
  [SMALL_STATE(264)] = 4675,
  [SMALL_STATE(265)] = 4682,
  [SMALL_STATE(266)] = 4689,
  [SMALL_STATE(267)] = 4696,
  [SMALL_STATE(268)] = 4703,
  [SMALL_STATE(269)] = 4710,
  [SMALL_STATE(270)] = 4717,
  [SMALL_STATE(271)] = 4724,
  [SMALL_STATE(272)] = 4731,
  [SMALL_STATE(273)] = 4738,
  [SMALL_STATE(274)] = 4745,
  [SMALL_STATE(275)] = 4752,
  [SMALL_STATE(276)] = 4759,
  [SMALL_STATE(277)] = 4766,
  [SMALL_STATE(278)] = 4773,
  [SMALL_STATE(279)] = 4780,
  [SMALL_STATE(280)] = 4787,
  [SMALL_STATE(281)] = 4794,
  [SMALL_STATE(282)] = 4801,
  [SMALL_STATE(283)] = 4808,
  [SMALL_STATE(284)] = 4815,
  [SMALL_STATE(285)] = 4822,
  [SMALL_STATE(286)] = 4829,
  [SMALL_STATE(287)] = 4836,
  [SMALL_STATE(288)] = 4843,
  [SMALL_STATE(289)] = 4850,
  [SMALL_STATE(290)] = 4857,
  [SMALL_STATE(291)] = 4864,
  [SMALL_STATE(292)] = 4871,
  [SMALL_STATE(293)] = 4878,
  [SMALL_STATE(294)] = 4885,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(8),
  [10] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(159),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(212),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(222),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(225),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(29),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(37),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(208),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(266),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(201),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(71),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(142),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 10),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 10),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 8),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 8),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 13),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 13),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 5),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 5),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(35),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(157),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(212),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(201),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(142),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, .production_id = 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, .production_id = 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_number, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_number, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 7),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 7),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(227),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(170),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(221),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(206),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2), SHIFT_REPEAT(244),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(53),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(170),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(218),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 4),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(116),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(161),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(258),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2), SHIFT_REPEAT(53),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2), SHIFT_REPEAT(170),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 14, .production_id = 9),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 13, .production_id = 8),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 13, .production_id = 7),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 13, .production_id = 9),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, .production_id = 6),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, .production_id = 8),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, .production_id = 7),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, .production_id = 9),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, .production_id = 6),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, .production_id = 8),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, .production_id = 7),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(133),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 10, .production_id = 6),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 4, .production_id = 5),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 4, .production_id = 5),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(137),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 9, .production_id = 5),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 9, .production_id = 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 8, .production_id = 5),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 8, .production_id = 5),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 7, .production_id = 5),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 7, .production_id = 5),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 6),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 5),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 5, .production_id = 5),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 5, .production_id = 5),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2), SHIFT_REPEAT(141),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2), SHIFT_REPEAT(100),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2), SHIFT_REPEAT(40),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2), SHIFT_REPEAT(34),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 1),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2), SHIFT_REPEAT(145),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2), SHIFT_REPEAT(248),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value_option, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2), SHIFT_REPEAT(243),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 7),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_option, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 4),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_type, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_name, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_name, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_name, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [745] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_proto(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
