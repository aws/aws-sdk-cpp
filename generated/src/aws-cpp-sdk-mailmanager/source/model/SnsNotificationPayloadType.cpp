/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/SnsNotificationPayloadType.h>
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
      namespace SnsNotificationPayloadTypeMapper
      {

        static const int HEADERS_HASH = HashingUtils::HashString("HEADERS");
        static const int CONTENT_HASH = HashingUtils::HashString("CONTENT");


        SnsNotificationPayloadType GetSnsNotificationPayloadTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEADERS_HASH)
          {
            return SnsNotificationPayloadType::HEADERS;
          }
          else if (hashCode == CONTENT_HASH)
          {
            return SnsNotificationPayloadType::CONTENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnsNotificationPayloadType>(hashCode);
          }

          return SnsNotificationPayloadType::NOT_SET;
        }

        Aws::String GetNameForSnsNotificationPayloadType(SnsNotificationPayloadType enumValue)
        {
          switch(enumValue)
          {
          case SnsNotificationPayloadType::NOT_SET:
            return {};
          case SnsNotificationPayloadType::HEADERS:
            return "HEADERS";
          case SnsNotificationPayloadType::CONTENT:
            return "CONTENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnsNotificationPayloadTypeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
