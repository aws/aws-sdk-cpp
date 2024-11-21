/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/EventRuleStatus.h>
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
      namespace EventRuleStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        EventRuleStatus GetEventRuleStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return EventRuleStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return EventRuleStatus::INACTIVE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return EventRuleStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return EventRuleStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return EventRuleStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventRuleStatus>(hashCode);
          }

          return EventRuleStatus::NOT_SET;
        }

        Aws::String GetNameForEventRuleStatus(EventRuleStatus enumValue)
        {
          switch(enumValue)
          {
          case EventRuleStatus::NOT_SET:
            return {};
          case EventRuleStatus::ACTIVE:
            return "ACTIVE";
          case EventRuleStatus::INACTIVE:
            return "INACTIVE";
          case EventRuleStatus::CREATING:
            return "CREATING";
          case EventRuleStatus::UPDATING:
            return "UPDATING";
          case EventRuleStatus::DELETING:
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

      } // namespace EventRuleStatusMapper
    } // namespace Model
  } // namespace Notifications
} // namespace Aws
