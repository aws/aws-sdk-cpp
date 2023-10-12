/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static constexpr uint32_t SEND_HASH = ConstExprHashingUtils::HashString("SEND");
        static constexpr uint32_t REJECT_HASH = ConstExprHashingUtils::HashString("REJECT");
        static constexpr uint32_t BOUNCE_HASH = ConstExprHashingUtils::HashString("BOUNCE");
        static constexpr uint32_t COMPLAINT_HASH = ConstExprHashingUtils::HashString("COMPLAINT");
        static constexpr uint32_t DELIVERY_HASH = ConstExprHashingUtils::HashString("DELIVERY");
        static constexpr uint32_t OPEN_HASH = ConstExprHashingUtils::HashString("OPEN");
        static constexpr uint32_t CLICK_HASH = ConstExprHashingUtils::HashString("CLICK");
        static constexpr uint32_t RENDERING_FAILURE_HASH = ConstExprHashingUtils::HashString("RENDERING_FAILURE");
        static constexpr uint32_t DELIVERY_DELAY_HASH = ConstExprHashingUtils::HashString("DELIVERY_DELAY");
        static constexpr uint32_t SUBSCRIPTION_HASH = ConstExprHashingUtils::HashString("SUBSCRIPTION");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEND_HASH)
          {
            return EventType::SEND;
          }
          else if (hashCode == REJECT_HASH)
          {
            return EventType::REJECT;
          }
          else if (hashCode == BOUNCE_HASH)
          {
            return EventType::BOUNCE;
          }
          else if (hashCode == COMPLAINT_HASH)
          {
            return EventType::COMPLAINT;
          }
          else if (hashCode == DELIVERY_HASH)
          {
            return EventType::DELIVERY;
          }
          else if (hashCode == OPEN_HASH)
          {
            return EventType::OPEN;
          }
          else if (hashCode == CLICK_HASH)
          {
            return EventType::CLICK;
          }
          else if (hashCode == RENDERING_FAILURE_HASH)
          {
            return EventType::RENDERING_FAILURE;
          }
          else if (hashCode == DELIVERY_DELAY_HASH)
          {
            return EventType::DELIVERY_DELAY;
          }
          else if (hashCode == SUBSCRIPTION_HASH)
          {
            return EventType::SUBSCRIPTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventType>(hashCode);
          }

          return EventType::NOT_SET;
        }

        Aws::String GetNameForEventType(EventType enumValue)
        {
          switch(enumValue)
          {
          case EventType::NOT_SET:
            return {};
          case EventType::SEND:
            return "SEND";
          case EventType::REJECT:
            return "REJECT";
          case EventType::BOUNCE:
            return "BOUNCE";
          case EventType::COMPLAINT:
            return "COMPLAINT";
          case EventType::DELIVERY:
            return "DELIVERY";
          case EventType::OPEN:
            return "OPEN";
          case EventType::CLICK:
            return "CLICK";
          case EventType::RENDERING_FAILURE:
            return "RENDERING_FAILURE";
          case EventType::DELIVERY_DELAY:
            return "DELIVERY_DELAY";
          case EventType::SUBSCRIPTION:
            return "SUBSCRIPTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventTypeMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
