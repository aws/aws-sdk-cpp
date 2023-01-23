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

        static const int INITIATED_CALL_HASH = HashingUtils::HashString("INITIATED_CALL");
        static const int RINGING_HASH = HashingUtils::HashString("RINGING");
        static const int ANSWERED_HASH = HashingUtils::HashString("ANSWERED");
        static const int COMPLETED_CALL_HASH = HashingUtils::HashString("COMPLETED_CALL");
        static const int BUSY_HASH = HashingUtils::HashString("BUSY");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int NO_ANSWER_HASH = HashingUtils::HashString("NO_ANSWER");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
