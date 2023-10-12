/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointSMSVoice
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static constexpr uint32_t INITIATED_CALL_HASH = ConstExprHashingUtils::HashString("INITIATED_CALL");
        static constexpr uint32_t RINGING_HASH = ConstExprHashingUtils::HashString("RINGING");
        static constexpr uint32_t ANSWERED_HASH = ConstExprHashingUtils::HashString("ANSWERED");
        static constexpr uint32_t COMPLETED_CALL_HASH = ConstExprHashingUtils::HashString("COMPLETED_CALL");
        static constexpr uint32_t BUSY_HASH = ConstExprHashingUtils::HashString("BUSY");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t NO_ANSWER_HASH = ConstExprHashingUtils::HashString("NO_ANSWER");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIATED_CALL_HASH)
          {
            return EventType::INITIATED_CALL;
          }
          else if (hashCode == RINGING_HASH)
          {
            return EventType::RINGING;
          }
          else if (hashCode == ANSWERED_HASH)
          {
            return EventType::ANSWERED;
          }
          else if (hashCode == COMPLETED_CALL_HASH)
          {
            return EventType::COMPLETED_CALL;
          }
          else if (hashCode == BUSY_HASH)
          {
            return EventType::BUSY;
          }
          else if (hashCode == FAILED_HASH)
          {
            return EventType::FAILED;
          }
          else if (hashCode == NO_ANSWER_HASH)
          {
            return EventType::NO_ANSWER;
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
          case EventType::INITIATED_CALL:
            return "INITIATED_CALL";
          case EventType::RINGING:
            return "RINGING";
          case EventType::ANSWERED:
            return "ANSWERED";
          case EventType::COMPLETED_CALL:
            return "COMPLETED_CALL";
          case EventType::BUSY:
            return "BUSY";
          case EventType::FAILED:
            return "FAILED";
          case EventType::NO_ANSWER:
            return "NO_ANSWER";
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
  } // namespace PinpointSMSVoice
} // namespace Aws
