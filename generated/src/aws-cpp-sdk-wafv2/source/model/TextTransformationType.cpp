/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/TextTransformationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace TextTransformationTypeMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t COMPRESS_WHITE_SPACE_HASH = ConstExprHashingUtils::HashString("COMPRESS_WHITE_SPACE");
        static constexpr uint32_t HTML_ENTITY_DECODE_HASH = ConstExprHashingUtils::HashString("HTML_ENTITY_DECODE");
        static constexpr uint32_t LOWERCASE_HASH = ConstExprHashingUtils::HashString("LOWERCASE");
        static constexpr uint32_t CMD_LINE_HASH = ConstExprHashingUtils::HashString("CMD_LINE");
        static constexpr uint32_t URL_DECODE_HASH = ConstExprHashingUtils::HashString("URL_DECODE");
        static constexpr uint32_t BASE64_DECODE_HASH = ConstExprHashingUtils::HashString("BASE64_DECODE");
        static constexpr uint32_t HEX_DECODE_HASH = ConstExprHashingUtils::HashString("HEX_DECODE");
        static constexpr uint32_t MD5_HASH = ConstExprHashingUtils::HashString("MD5");
        static constexpr uint32_t REPLACE_COMMENTS_HASH = ConstExprHashingUtils::HashString("REPLACE_COMMENTS");
        static constexpr uint32_t ESCAPE_SEQ_DECODE_HASH = ConstExprHashingUtils::HashString("ESCAPE_SEQ_DECODE");
        static constexpr uint32_t SQL_HEX_DECODE_HASH = ConstExprHashingUtils::HashString("SQL_HEX_DECODE");
        static constexpr uint32_t CSS_DECODE_HASH = ConstExprHashingUtils::HashString("CSS_DECODE");
        static constexpr uint32_t JS_DECODE_HASH = ConstExprHashingUtils::HashString("JS_DECODE");
        static constexpr uint32_t NORMALIZE_PATH_HASH = ConstExprHashingUtils::HashString("NORMALIZE_PATH");
        static constexpr uint32_t NORMALIZE_PATH_WIN_HASH = ConstExprHashingUtils::HashString("NORMALIZE_PATH_WIN");
        static constexpr uint32_t REMOVE_NULLS_HASH = ConstExprHashingUtils::HashString("REMOVE_NULLS");
        static constexpr uint32_t REPLACE_NULLS_HASH = ConstExprHashingUtils::HashString("REPLACE_NULLS");
        static constexpr uint32_t BASE64_DECODE_EXT_HASH = ConstExprHashingUtils::HashString("BASE64_DECODE_EXT");
        static constexpr uint32_t URL_DECODE_UNI_HASH = ConstExprHashingUtils::HashString("URL_DECODE_UNI");
        static constexpr uint32_t UTF8_TO_UNICODE_HASH = ConstExprHashingUtils::HashString("UTF8_TO_UNICODE");


        TextTransformationType GetTextTransformationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return TextTransformationType::NONE;
          }
          else if (hashCode == COMPRESS_WHITE_SPACE_HASH)
          {
            return TextTransformationType::COMPRESS_WHITE_SPACE;
          }
          else if (hashCode == HTML_ENTITY_DECODE_HASH)
          {
            return TextTransformationType::HTML_ENTITY_DECODE;
          }
          else if (hashCode == LOWERCASE_HASH)
          {
            return TextTransformationType::LOWERCASE;
          }
          else if (hashCode == CMD_LINE_HASH)
          {
            return TextTransformationType::CMD_LINE;
          }
          else if (hashCode == URL_DECODE_HASH)
          {
            return TextTransformationType::URL_DECODE;
          }
          else if (hashCode == BASE64_DECODE_HASH)
          {
            return TextTransformationType::BASE64_DECODE;
          }
          else if (hashCode == HEX_DECODE_HASH)
          {
            return TextTransformationType::HEX_DECODE;
          }
          else if (hashCode == MD5_HASH)
          {
            return TextTransformationType::MD5;
          }
          else if (hashCode == REPLACE_COMMENTS_HASH)
          {
            return TextTransformationType::REPLACE_COMMENTS;
          }
          else if (hashCode == ESCAPE_SEQ_DECODE_HASH)
          {
            return TextTransformationType::ESCAPE_SEQ_DECODE;
          }
          else if (hashCode == SQL_HEX_DECODE_HASH)
          {
            return TextTransformationType::SQL_HEX_DECODE;
          }
          else if (hashCode == CSS_DECODE_HASH)
          {
            return TextTransformationType::CSS_DECODE;
          }
          else if (hashCode == JS_DECODE_HASH)
          {
            return TextTransformationType::JS_DECODE;
          }
          else if (hashCode == NORMALIZE_PATH_HASH)
          {
            return TextTransformationType::NORMALIZE_PATH;
          }
          else if (hashCode == NORMALIZE_PATH_WIN_HASH)
          {
            return TextTransformationType::NORMALIZE_PATH_WIN;
          }
          else if (hashCode == REMOVE_NULLS_HASH)
          {
            return TextTransformationType::REMOVE_NULLS;
          }
          else if (hashCode == REPLACE_NULLS_HASH)
          {
            return TextTransformationType::REPLACE_NULLS;
          }
          else if (hashCode == BASE64_DECODE_EXT_HASH)
          {
            return TextTransformationType::BASE64_DECODE_EXT;
          }
          else if (hashCode == URL_DECODE_UNI_HASH)
          {
            return TextTransformationType::URL_DECODE_UNI;
          }
          else if (hashCode == UTF8_TO_UNICODE_HASH)
          {
            return TextTransformationType::UTF8_TO_UNICODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TextTransformationType>(hashCode);
          }

          return TextTransformationType::NOT_SET;
        }

        Aws::String GetNameForTextTransformationType(TextTransformationType enumValue)
        {
          switch(enumValue)
          {
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TextTransformationTypeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
