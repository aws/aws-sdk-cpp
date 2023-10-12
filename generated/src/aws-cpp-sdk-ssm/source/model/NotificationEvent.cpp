/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/NotificationEvent.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace NotificationEventMapper
      {

        static constexpr uint32_t All_HASH = ConstExprHashingUtils::HashString("All");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Success_HASH = ConstExprHashingUtils::HashString("Success");
        static constexpr uint32_t TimedOut_HASH = ConstExprHashingUtils::HashString("TimedOut");
        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        NotificationEvent GetNotificationEventForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == All_HASH)
          {
            return NotificationEvent::All;
          }
          else if (hashCode == InProgress_HASH)
          {
            return NotificationEvent::InProgress;
          }
          else if (hashCode == Success_HASH)
          {
            return NotificationEvent::Success;
          }
          else if (hashCode == TimedOut_HASH)
          {
            return NotificationEvent::TimedOut;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return NotificationEvent::Cancelled;
          }
          else if (hashCode == Failed_HASH)
          {
            return NotificationEvent::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationEvent>(hashCode);
          }

          return NotificationEvent::NOT_SET;
        }

        Aws::String GetNameForNotificationEvent(NotificationEvent enumValue)
        {
          switch(enumValue)
          {
          case NotificationEvent::NOT_SET:
            return {};
          case NotificationEvent::All:
            return "All";
          case NotificationEvent::InProgress:
            return "InProgress";
          case NotificationEvent::Success:
            return "Success";
          case NotificationEvent::TimedOut:
            return "TimedOut";
          case NotificationEvent::Cancelled:
            return "Cancelled";
          case NotificationEvent::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationEventMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
