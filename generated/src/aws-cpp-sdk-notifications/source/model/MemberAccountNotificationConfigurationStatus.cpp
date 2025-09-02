/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/MemberAccountNotificationConfigurationStatus.h>
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
      namespace MemberAccountNotificationConfigurationStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        MemberAccountNotificationConfigurationStatus GetMemberAccountNotificationConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return MemberAccountNotificationConfigurationStatus::ACTIVE;
          }
          else if (hashCode == PENDING_HASH)
          {
            return MemberAccountNotificationConfigurationStatus::PENDING;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return MemberAccountNotificationConfigurationStatus::INACTIVE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return MemberAccountNotificationConfigurationStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return MemberAccountNotificationConfigurationStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemberAccountNotificationConfigurationStatus>(hashCode);
          }

          return MemberAccountNotificationConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForMemberAccountNotificationConfigurationStatus(MemberAccountNotificationConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case MemberAccountNotificationConfigurationStatus::NOT_SET:
            return {};
          case MemberAccountNotificationConfigurationStatus::ACTIVE:
            return "ACTIVE";
          case MemberAccountNotificationConfigurationStatus::PENDING:
            return "PENDING";
          case MemberAccountNotificationConfigurationStatus::INACTIVE:
            return "INACTIVE";
          case MemberAccountNotificationConfigurationStatus::CREATING:
            return "CREATING";
          case MemberAccountNotificationConfigurationStatus::DELETING:
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

      } // namespace MemberAccountNotificationConfigurationStatusMapper
    } // namespace Model
  } // namespace Notifications
} // namespace Aws
