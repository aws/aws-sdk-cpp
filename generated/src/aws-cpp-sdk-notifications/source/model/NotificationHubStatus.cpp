/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/NotificationHubStatus.h>
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
      namespace NotificationHubStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int REGISTERING_HASH = HashingUtils::HashString("REGISTERING");
        static const int DEREGISTERING_HASH = HashingUtils::HashString("DEREGISTERING");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        NotificationHubStatus GetNotificationHubStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return NotificationHubStatus::ACTIVE;
          }
          else if (hashCode == REGISTERING_HASH)
          {
            return NotificationHubStatus::REGISTERING;
          }
          else if (hashCode == DEREGISTERING_HASH)
          {
            return NotificationHubStatus::DEREGISTERING;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return NotificationHubStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationHubStatus>(hashCode);
          }

          return NotificationHubStatus::NOT_SET;
        }

        Aws::String GetNameForNotificationHubStatus(NotificationHubStatus enumValue)
        {
          switch(enumValue)
          {
          case NotificationHubStatus::NOT_SET:
            return {};
          case NotificationHubStatus::ACTIVE:
            return "ACTIVE";
          case NotificationHubStatus::REGISTERING:
            return "REGISTERING";
          case NotificationHubStatus::DEREGISTERING:
            return "DEREGISTERING";
          case NotificationHubStatus::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationHubStatusMapper
    } // namespace Model
  } // namespace Notifications
} // namespace Aws
