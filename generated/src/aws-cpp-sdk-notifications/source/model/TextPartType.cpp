/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/TextPartType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Notifications
  {
    namespace Model
    {
      namespace TextPartTypeMapper
      {

        static const int LOCALIZED_TEXT_HASH = HashingUtils::HashString("LOCALIZED_TEXT");
        static const int PLAIN_TEXT_HASH = HashingUtils::HashString("PLAIN_TEXT");
        static const int URL_HASH = HashingUtils::HashString("URL");


        TextPartType GetTextPartTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOCALIZED_TEXT_HASH)
          {
            return TextPartType::LOCALIZED_TEXT;
          }
          else if (hashCode == PLAIN_TEXT_HASH)
          {
            return TextPartType::PLAIN_TEXT;
          }
          else if (hashCode == URL_HASH)
          {
            return TextPartType::URL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TextPartType>(hashCode);
          }

          return TextPartType::NOT_SET;
        }

        Aws::String GetNameForTextPartType(TextPartType enumValue)
        {
          switch(enumValue)
          {
          case TextPartType::NOT_SET:
            return {};
          case TextPartType::LOCALIZED_TEXT:
            return "LOCALIZED_TEXT";
          case TextPartType::PLAIN_TEXT:
            return "PLAIN_TEXT";
          case TextPartType::URL:
            return "URL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TextPartTypeMapper
    } // namespace Model
  } // namespace Notifications
} // namespace Aws
