/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/TextFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PI
  {
    namespace Model
    {
      namespace TextFormatMapper
      {

        static const int PLAIN_TEXT_HASH = HashingUtils::HashString("PLAIN_TEXT");
        static const int MARKDOWN_HASH = HashingUtils::HashString("MARKDOWN");


        TextFormat GetTextFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PLAIN_TEXT_HASH)
          {
            return TextFormat::PLAIN_TEXT;
          }
          else if (hashCode == MARKDOWN_HASH)
          {
            return TextFormat::MARKDOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TextFormat>(hashCode);
          }

          return TextFormat::NOT_SET;
        }

        Aws::String GetNameForTextFormat(TextFormat enumValue)
        {
          switch(enumValue)
          {
          case TextFormat::NOT_SET:
            return {};
          case TextFormat::PLAIN_TEXT:
            return "PLAIN_TEXT";
          case TextFormat::MARKDOWN:
            return "MARKDOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TextFormatMapper
    } // namespace Model
  } // namespace PI
} // namespace Aws
