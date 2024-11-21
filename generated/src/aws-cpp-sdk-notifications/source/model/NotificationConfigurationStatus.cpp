/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/NotificationConfigurationStatus.h>
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
      namespace NotificationConfigurationStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int PARTIALLY_ACTIVE_HASH = HashingUtils::HashString("PARTIALLY_ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        NotificationConfigurationStatus GetNotificationConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return NotificationConfigurationStatus::ACTIVE;
          }
          else if (hashCode == PARTIALLY_ACTIVE_HASH)
          {
            return NotificationConfigurationStatus::PARTIALLY_ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return NotificationConfigurationStatus::INACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return NotificationConfigurationStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationConfigurationStatus>(hashCode);
          }

          return NotificationConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForNotificationConfigurationStatus(NotificationConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case NotificationConfigurationStatus::NOT_SET:
            return {};
          case NotificationConfigurationStatus::ACTIVE:
            return "ACTIVE";
          case NotificationConfigurationStatus::PARTIALLY_ACTIVE:
            return "PARTIALLY_ACTIVE";
          case NotificationConfigurationStatus::INACTIVE:
            return "INACTIVE";
          case NotificationConfigurationStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationConfigurationStatusMapper
    } // namespace Model
  } // namespace Notifications
} // namespace Aws
