/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/NotificationType.h>
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
      namespace NotificationTypeMapper
      {

        static const int ALERT_HASH = HashingUtils::HashString("ALERT");
        static const int WARNING_HASH = HashingUtils::HashString("WARNING");
        static const int ANNOUNCEMENT_HASH = HashingUtils::HashString("ANNOUNCEMENT");
        static const int INFORMATIONAL_HASH = HashingUtils::HashString("INFORMATIONAL");


        NotificationType GetNotificationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALERT_HASH)
          {
            return NotificationType::ALERT;
          }
          else if (hashCode == WARNING_HASH)
          {
            return NotificationType::WARNING;
          }
          else if (hashCode == ANNOUNCEMENT_HASH)
          {
            return NotificationType::ANNOUNCEMENT;
          }
          else if (hashCode == INFORMATIONAL_HASH)
          {
            return NotificationType::INFORMATIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationType>(hashCode);
          }

          return NotificationType::NOT_SET;
        }

        Aws::String GetNameForNotificationType(NotificationType enumValue)
        {
          switch(enumValue)
          {
          case NotificationType::NOT_SET:
            return {};
          case NotificationType::ALERT:
            return "ALERT";
          case NotificationType::WARNING:
            return "WARNING";
          case NotificationType::ANNOUNCEMENT:
            return "ANNOUNCEMENT";
          case NotificationType::INFORMATIONAL:
            return "INFORMATIONAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationTypeMapper
    } // namespace Model
  } // namespace Notifications
} // namespace Aws
