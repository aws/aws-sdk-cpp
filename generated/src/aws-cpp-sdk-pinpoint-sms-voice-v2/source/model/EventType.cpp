/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointSMSVoiceV2
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");
        static constexpr uint32_t TEXT_ALL_HASH = ConstExprHashingUtils::HashString("TEXT_ALL");
        static constexpr uint32_t TEXT_SENT_HASH = ConstExprHashingUtils::HashString("TEXT_SENT");
        static constexpr uint32_t TEXT_PENDING_HASH = ConstExprHashingUtils::HashString("TEXT_PENDING");
        static constexpr uint32_t TEXT_QUEUED_HASH = ConstExprHashingUtils::HashString("TEXT_QUEUED");
        static constexpr uint32_t TEXT_SUCCESSFUL_HASH = ConstExprHashingUtils::HashString("TEXT_SUCCESSFUL");
        static constexpr uint32_t TEXT_DELIVERED_HASH = ConstExprHashingUtils::HashString("TEXT_DELIVERED");
        static constexpr uint32_t TEXT_INVALID_HASH = ConstExprHashingUtils::HashString("TEXT_INVALID");
        static constexpr uint32_t TEXT_INVALID_MESSAGE_HASH = ConstExprHashingUtils::HashString("TEXT_INVALID_MESSAGE");
        static constexpr uint32_t TEXT_UNREACHABLE_HASH = ConstExprHashingUtils::HashString("TEXT_UNREACHABLE");
        static constexpr uint32_t TEXT_CARRIER_UNREACHABLE_HASH = ConstExprHashingUtils::HashString("TEXT_CARRIER_UNREACHABLE");
        static constexpr uint32_t TEXT_BLOCKED_HASH = ConstExprHashingUtils::HashString("TEXT_BLOCKED");
        static constexpr uint32_t TEXT_CARRIER_BLOCKED_HASH = ConstExprHashingUtils::HashString("TEXT_CARRIER_BLOCKED");
        static constexpr uint32_t TEXT_SPAM_HASH = ConstExprHashingUtils::HashString("TEXT_SPAM");
        static constexpr uint32_t TEXT_UNKNOWN_HASH = ConstExprHashingUtils::HashString("TEXT_UNKNOWN");
        static constexpr uint32_t TEXT_TTL_EXPIRED_HASH = ConstExprHashingUtils::HashString("TEXT_TTL_EXPIRED");
        static constexpr uint32_t VOICE_ALL_HASH = ConstExprHashingUtils::HashString("VOICE_ALL");
        static constexpr uint32_t VOICE_INITIATED_HASH = ConstExprHashingUtils::HashString("VOICE_INITIATED");
        static constexpr uint32_t VOICE_RINGING_HASH = ConstExprHashingUtils::HashString("VOICE_RINGING");
        static constexpr uint32_t VOICE_ANSWERED_HASH = ConstExprHashingUtils::HashString("VOICE_ANSWERED");
        static constexpr uint32_t VOICE_COMPLETED_HASH = ConstExprHashingUtils::HashString("VOICE_COMPLETED");
        static constexpr uint32_t VOICE_BUSY_HASH = ConstExprHashingUtils::HashString("VOICE_BUSY");
        static constexpr uint32_t VOICE_NO_ANSWER_HASH = ConstExprHashingUtils::HashString("VOICE_NO_ANSWER");
        static constexpr uint32_t VOICE_FAILED_HASH = ConstExprHashingUtils::HashString("VOICE_FAILED");
        static constexpr uint32_t VOICE_TTL_EXPIRED_HASH = ConstExprHashingUtils::HashString("VOICE_TTL_EXPIRED");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return EventType::ALL;
          }
          else if (hashCode == TEXT_ALL_HASH)
          {
            return EventType::TEXT_ALL;
          }
          else if (hashCode == TEXT_SENT_HASH)
          {
            return EventType::TEXT_SENT;
          }
          else if (hashCode == TEXT_PENDING_HASH)
          {
            return EventType::TEXT_PENDING;
          }
          else if (hashCode == TEXT_QUEUED_HASH)
          {
            return EventType::TEXT_QUEUED;
          }
          else if (hashCode == TEXT_SUCCESSFUL_HASH)
          {
            return EventType::TEXT_SUCCESSFUL;
          }
          else if (hashCode == TEXT_DELIVERED_HASH)
          {
            return EventType::TEXT_DELIVERED;
          }
          else if (hashCode == TEXT_INVALID_HASH)
          {
            return EventType::TEXT_INVALID;
          }
          else if (hashCode == TEXT_INVALID_MESSAGE_HASH)
          {
            return EventType::TEXT_INVALID_MESSAGE;
          }
          else if (hashCode == TEXT_UNREACHABLE_HASH)
          {
            return EventType::TEXT_UNREACHABLE;
          }
          else if (hashCode == TEXT_CARRIER_UNREACHABLE_HASH)
          {
            return EventType::TEXT_CARRIER_UNREACHABLE;
          }
          else if (hashCode == TEXT_BLOCKED_HASH)
          {
            return EventType::TEXT_BLOCKED;
          }
          else if (hashCode == TEXT_CARRIER_BLOCKED_HASH)
          {
            return EventType::TEXT_CARRIER_BLOCKED;
          }
          else if (hashCode == TEXT_SPAM_HASH)
          {
            return EventType::TEXT_SPAM;
          }
          else if (hashCode == TEXT_UNKNOWN_HASH)
          {
            return EventType::TEXT_UNKNOWN;
          }
          else if (hashCode == TEXT_TTL_EXPIRED_HASH)
          {
            return EventType::TEXT_TTL_EXPIRED;
          }
          else if (hashCode == VOICE_ALL_HASH)
          {
            return EventType::VOICE_ALL;
          }
          else if (hashCode == VOICE_INITIATED_HASH)
          {
            return EventType::VOICE_INITIATED;
          }
          else if (hashCode == VOICE_RINGING_HASH)
          {
            return EventType::VOICE_RINGING;
          }
          else if (hashCode == VOICE_ANSWERED_HASH)
          {
            return EventType::VOICE_ANSWERED;
          }
          else if (hashCode == VOICE_COMPLETED_HASH)
          {
            return EventType::VOICE_COMPLETED;
          }
          else if (hashCode == VOICE_BUSY_HASH)
          {
            return EventType::VOICE_BUSY;
          }
          else if (hashCode == VOICE_NO_ANSWER_HASH)
          {
            return EventType::VOICE_NO_ANSWER;
          }
          else if (hashCode == VOICE_FAILED_HASH)
          {
            return EventType::VOICE_FAILED;
          }
          else if (hashCode == VOICE_TTL_EXPIRED_HASH)
          {
            return EventType::VOICE_TTL_EXPIRED;
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
          case EventType::ALL:
            return "ALL";
          case EventType::TEXT_ALL:
            return "TEXT_ALL";
          case EventType::TEXT_SENT:
            return "TEXT_SENT";
          case EventType::TEXT_PENDING:
            return "TEXT_PENDING";
          case EventType::TEXT_QUEUED:
            return "TEXT_QUEUED";
          case EventType::TEXT_SUCCESSFUL:
            return "TEXT_SUCCESSFUL";
          case EventType::TEXT_DELIVERED:
            return "TEXT_DELIVERED";
          case EventType::TEXT_INVALID:
            return "TEXT_INVALID";
          case EventType::TEXT_INVALID_MESSAGE:
            return "TEXT_INVALID_MESSAGE";
          case EventType::TEXT_UNREACHABLE:
            return "TEXT_UNREACHABLE";
          case EventType::TEXT_CARRIER_UNREACHABLE:
            return "TEXT_CARRIER_UNREACHABLE";
          case EventType::TEXT_BLOCKED:
            return "TEXT_BLOCKED";
          case EventType::TEXT_CARRIER_BLOCKED:
            return "TEXT_CARRIER_BLOCKED";
          case EventType::TEXT_SPAM:
            return "TEXT_SPAM";
          case EventType::TEXT_UNKNOWN:
            return "TEXT_UNKNOWN";
          case EventType::TEXT_TTL_EXPIRED:
            return "TEXT_TTL_EXPIRED";
          case EventType::VOICE_ALL:
            return "VOICE_ALL";
          case EventType::VOICE_INITIATED:
            return "VOICE_INITIATED";
          case EventType::VOICE_RINGING:
            return "VOICE_RINGING";
          case EventType::VOICE_ANSWERED:
            return "VOICE_ANSWERED";
          case EventType::VOICE_COMPLETED:
            return "VOICE_COMPLETED";
          case EventType::VOICE_BUSY:
            return "VOICE_BUSY";
          case EventType::VOICE_NO_ANSWER:
            return "VOICE_NO_ANSWER";
          case EventType::VOICE_FAILED:
            return "VOICE_FAILED";
          case EventType::VOICE_TTL_EXPIRED:
            return "VOICE_TTL_EXPIRED";
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
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
