/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/TextTransformation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAF
  {
    namespace Model
    {
      namespace TextTransformationMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t COMPRESS_WHITE_SPACE_HASH = ConstExprHashingUtils::HashString("COMPRESS_WHITE_SPACE");
        static constexpr uint32_t HTML_ENTITY_DECODE_HASH = ConstExprHashingUtils::HashString("HTML_ENTITY_DECODE");
        static constexpr uint32_t LOWERCASE_HASH = ConstExprHashingUtils::HashString("LOWERCASE");
        static constexpr uint32_t CMD_LINE_HASH = ConstExprHashingUtils::HashString("CMD_LINE");
        static constexpr uint32_t URL_DECODE_HASH = ConstExprHashingUtils::HashString("URL_DECODE");


        TextTransformation GetTextTransformationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return TextTransformation::NONE;
          }
          else if (hashCode == COMPRESS_WHITE_SPACE_HASH)
          {
            return TextTransformation::COMPRESS_WHITE_SPACE;
          }
          else if (hashCode == HTML_ENTITY_DECODE_HASH)
          {
            return TextTransformation::HTML_ENTITY_DECODE;
          }
          else if (hashCode == LOWERCASE_HASH)
          {
            return TextTransformation::LOWERCASE;
          }
          else if (hashCode == CMD_LINE_HASH)
          {
            return TextTransformation::CMD_LINE;
          }
          else if (hashCode == URL_DECODE_HASH)
          {
            return TextTransformation::URL_DECODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TextTransformation>(hashCode);
          }

          return TextTransformation::NOT_SET;
        }

        Aws::String GetNameForTextTransformation(TextTransformation enumValue)
        {
          switch(enumValue)
          {
          case TextTransformation::NOT_SET:
            return {};
          case TextTransformation::NONE:
            return "NONE";
          case TextTransformation::COMPRESS_WHITE_SPACE:
            return "COMPRESS_WHITE_SPACE";
          case TextTransformation::HTML_ENTITY_DECODE:
            return "HTML_ENTITY_DECODE";
          case TextTransformation::LOWERCASE:
            return "LOWERCASE";
          case TextTransformation::CMD_LINE:
            return "CMD_LINE";
          case TextTransformation::URL_DECODE:
            return "URL_DECODE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TextTransformationMapper
    } // namespace Model
  } // namespace WAF
} // namespace Aws
