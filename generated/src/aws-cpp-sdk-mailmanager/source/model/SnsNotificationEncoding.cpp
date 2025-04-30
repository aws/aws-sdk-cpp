/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/SnsNotificationEncoding.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MailManager
  {
    namespace Model
    {
      namespace SnsNotificationEncodingMapper
      {

        static const int UTF_8_HASH = HashingUtils::HashString("UTF-8");
        static const int BASE64_HASH = HashingUtils::HashString("BASE64");


        SnsNotificationEncoding GetSnsNotificationEncodingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UTF_8_HASH)
          {
            return SnsNotificationEncoding::UTF_8;
          }
          else if (hashCode == BASE64_HASH)
          {
            return SnsNotificationEncoding::BASE64;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnsNotificationEncoding>(hashCode);
          }

          return SnsNotificationEncoding::NOT_SET;
        }

        Aws::String GetNameForSnsNotificationEncoding(SnsNotificationEncoding enumValue)
        {
          switch(enumValue)
          {
          case SnsNotificationEncoding::NOT_SET:
            return {};
          case SnsNotificationEncoding::UTF_8:
            return "UTF-8";
          case SnsNotificationEncoding::BASE64:
            return "BASE64";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnsNotificationEncodingMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
