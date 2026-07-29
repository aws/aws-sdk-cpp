/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/TextTransformationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace TextTransformationTypeMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int COMPRESS_WHITE_SPACE_HASH = HashingUtils::HashString("COMPRESS_WHITE_SPACE");
static const int HTML_ENTITY_DECODE_HASH = HashingUtils::HashString("HTML_ENTITY_DECODE");
static const int LOWERCASE_HASH = HashingUtils::HashString("LOWERCASE");
static const int CMD_LINE_HASH = HashingUtils::HashString("CMD_LINE");
static const int URL_DECODE_HASH = HashingUtils::HashString("URL_DECODE");
static const int BASE64_DECODE_HASH = HashingUtils::HashString("BASE64_DECODE");
static const int HEX_DECODE_HASH = HashingUtils::HashString("HEX_DECODE");
static const int MD5_HASH = HashingUtils::HashString("MD5");
static const int REPLACE_COMMENTS_HASH = HashingUtils::HashString("REPLACE_COMMENTS");
static const int ESCAPE_SEQ_DECODE_HASH = HashingUtils::HashString("ESCAPE_SEQ_DECODE");
static const int SQL_HEX_DECODE_HASH = HashingUtils::HashString("SQL_HEX_DECODE");
static const int CSS_DECODE_HASH = HashingUtils::HashString("CSS_DECODE");
static const int JS_DECODE_HASH = HashingUtils::HashString("JS_DECODE");
static const int NORMALIZE_PATH_HASH = HashingUtils::HashString("NORMALIZE_PATH");
static const int NORMALIZE_PATH_WIN_HASH = HashingUtils::HashString("NORMALIZE_PATH_WIN");
static const int REMOVE_NULLS_HASH = HashingUtils::HashString("REMOVE_NULLS");
static const int REPLACE_NULLS_HASH = HashingUtils::HashString("REPLACE_NULLS");
static const int BASE64_DECODE_EXT_HASH = HashingUtils::HashString("BASE64_DECODE_EXT");
static const int URL_DECODE_UNI_HASH = HashingUtils::HashString("URL_DECODE_UNI");
static const int UTF8_TO_UNICODE_HASH = HashingUtils::HashString("UTF8_TO_UNICODE");
static const int REMOVE_WHITESPACE_HASH = HashingUtils::HashString("REMOVE_WHITESPACE");
static const int TRIM_HASH = HashingUtils::HashString("TRIM");
static const int TRIM_LEFT_HASH = HashingUtils::HashString("TRIM_LEFT");
static const int TRIM_RIGHT_HASH = HashingUtils::HashString("TRIM_RIGHT");
static const int REMOVE_COMMENTS_CHAR_HASH = HashingUtils::HashString("REMOVE_COMMENTS_CHAR");
static const int UPPERCASE_HASH = HashingUtils::HashString("UPPERCASE");
static const int CMD_LINE_WIN_HASH = HashingUtils::HashString("CMD_LINE_WIN");
static const int CMD_LINE_UNIX_HASH = HashingUtils::HashString("CMD_LINE_UNIX");
static const int JS_DECODE_EXT_HASH = HashingUtils::HashString("JS_DECODE_EXT");
static const int SHA256_HASH = HashingUtils::HashString("SHA256");

TextTransformationType GetTextTransformationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return TextTransformationType::NONE;
  } else if (hashCode == COMPRESS_WHITE_SPACE_HASH) {
    return TextTransformationType::COMPRESS_WHITE_SPACE;
  } else if (hashCode == HTML_ENTITY_DECODE_HASH) {
    return TextTransformationType::HTML_ENTITY_DECODE;
  } else if (hashCode == LOWERCASE_HASH) {
    return TextTransformationType::LOWERCASE;
  } else if (hashCode == CMD_LINE_HASH) {
    return TextTransformationType::CMD_LINE;
  } else if (hashCode == URL_DECODE_HASH) {
    return TextTransformationType::URL_DECODE;
  } else if (hashCode == BASE64_DECODE_HASH) {
    return TextTransformationType::BASE64_DECODE;
  } else if (hashCode == HEX_DECODE_HASH) {
    return TextTransformationType::HEX_DECODE;
  } else if (hashCode == MD5_HASH) {
    return TextTransformationType::MD5;
  } else if (hashCode == REPLACE_COMMENTS_HASH) {
    return TextTransformationType::REPLACE_COMMENTS;
  } else if (hashCode == ESCAPE_SEQ_DECODE_HASH) {
    return TextTransformationType::ESCAPE_SEQ_DECODE;
  } else if (hashCode == SQL_HEX_DECODE_HASH) {
    return TextTransformationType::SQL_HEX_DECODE;
  } else if (hashCode == CSS_DECODE_HASH) {
    return TextTransformationType::CSS_DECODE;
  } else if (hashCode == JS_DECODE_HASH) {
    return TextTransformationType::JS_DECODE;
  } else if (hashCode == NORMALIZE_PATH_HASH) {
    return TextTransformationType::NORMALIZE_PATH;
  } else if (hashCode == NORMALIZE_PATH_WIN_HASH) {
    return TextTransformationType::NORMALIZE_PATH_WIN;
  } else if (hashCode == REMOVE_NULLS_HASH) {
    return TextTransformationType::REMOVE_NULLS;
  } else if (hashCode == REPLACE_NULLS_HASH) {
    return TextTransformationType::REPLACE_NULLS;
  } else if (hashCode == BASE64_DECODE_EXT_HASH) {
    return TextTransformationType::BASE64_DECODE_EXT;
  } else if (hashCode == URL_DECODE_UNI_HASH) {
    return TextTransformationType::URL_DECODE_UNI;
  } else if (hashCode == UTF8_TO_UNICODE_HASH) {
    return TextTransformationType::UTF8_TO_UNICODE;
  } else if (hashCode == REMOVE_WHITESPACE_HASH) {
    return TextTransformationType::REMOVE_WHITESPACE;
  } else if (hashCode == TRIM_HASH) {
    return TextTransformationType::TRIM;
  } else if (hashCode == TRIM_LEFT_HASH) {
    return TextTransformationType::TRIM_LEFT;
  } else if (hashCode == TRIM_RIGHT_HASH) {
    return TextTransformationType::TRIM_RIGHT;
  } else if (hashCode == REMOVE_COMMENTS_CHAR_HASH) {
    return TextTransformationType::REMOVE_COMMENTS_CHAR;
  } else if (hashCode == UPPERCASE_HASH) {
    return TextTransformationType::UPPERCASE;
  } else if (hashCode == CMD_LINE_WIN_HASH) {
    return TextTransformationType::CMD_LINE_WIN;
  } else if (hashCode == CMD_LINE_UNIX_HASH) {
    return TextTransformationType::CMD_LINE_UNIX;
  } else if (hashCode == JS_DECODE_EXT_HASH) {
    return TextTransformationType::JS_DECODE_EXT;
  } else if (hashCode == SHA256_HASH) {
    return TextTransformationType::SHA256;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TextTransformationType>(hashCode);
  }

  return TextTransformationType::NOT_SET;
}

Aws::String GetNameForTextTransformationType(TextTransformationType enumValue) {
  switch (enumValue) {
    case TextTransformationType::NOT_SET:
      return {};
    case TextTransformationType::NONE:
      return "NONE";
    case TextTransformationType::COMPRESS_WHITE_SPACE:
      return "COMPRESS_WHITE_SPACE";
    case TextTransformationType::HTML_ENTITY_DECODE:
      return "HTML_ENTITY_DECODE";
    case TextTransformationType::LOWERCASE:
      return "LOWERCASE";
    case TextTransformationType::CMD_LINE:
      return "CMD_LINE";
    case TextTransformationType::URL_DECODE:
      return "URL_DECODE";
    case TextTransformationType::BASE64_DECODE:
      return "BASE64_DECODE";
    case TextTransformationType::HEX_DECODE:
      return "HEX_DECODE";
    case TextTransformationType::MD5:
      return "MD5";
    case TextTransformationType::REPLACE_COMMENTS:
      return "REPLACE_COMMENTS";
    case TextTransformationType::ESCAPE_SEQ_DECODE:
      return "ESCAPE_SEQ_DECODE";
    case TextTransformationType::SQL_HEX_DECODE:
      return "SQL_HEX_DECODE";
    case TextTransformationType::CSS_DECODE:
      return "CSS_DECODE";
    case TextTransformationType::JS_DECODE:
      return "JS_DECODE";
    case TextTransformationType::NORMALIZE_PATH:
      return "NORMALIZE_PATH";
    case TextTransformationType::NORMALIZE_PATH_WIN:
      return "NORMALIZE_PATH_WIN";
    case TextTransformationType::REMOVE_NULLS:
      return "REMOVE_NULLS";
    case TextTransformationType::REPLACE_NULLS:
      return "REPLACE_NULLS";
    case TextTransformationType::BASE64_DECODE_EXT:
      return "BASE64_DECODE_EXT";
    case TextTransformationType::URL_DECODE_UNI:
      return "URL_DECODE_UNI";
    case TextTransformationType::UTF8_TO_UNICODE:
      return "UTF8_TO_UNICODE";
    case TextTransformationType::REMOVE_WHITESPACE:
      return "REMOVE_WHITESPACE";
    case TextTransformationType::TRIM:
      return "TRIM";
    case TextTransformationType::TRIM_LEFT:
      return "TRIM_LEFT";
    case TextTransformationType::TRIM_RIGHT:
      return "TRIM_RIGHT";
    case TextTransformationType::REMOVE_COMMENTS_CHAR:
      return "REMOVE_COMMENTS_CHAR";
    case TextTransformationType::UPPERCASE:
      return "UPPERCASE";
    case TextTransformationType::CMD_LINE_WIN:
      return "CMD_LINE_WIN";
    case TextTransformationType::CMD_LINE_UNIX:
      return "CMD_LINE_UNIX";
    case TextTransformationType::JS_DECODE_EXT:
      return "JS_DECODE_EXT";
    case TextTransformationType::SHA256:
      return "SHA256";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TextTransformationTypeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
