/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/EventType.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace EventTypeMapper {

static const int ALL_HASH = HashingUtils::HashString("ALL");
static const int TEXT_ALL_HASH = HashingUtils::HashString("TEXT_ALL");
static const int TEXT_SENT_HASH = HashingUtils::HashString("TEXT_SENT");
static const int TEXT_PENDING_HASH = HashingUtils::HashString("TEXT_PENDING");
static const int TEXT_QUEUED_HASH = HashingUtils::HashString("TEXT_QUEUED");
static const int TEXT_SUCCESSFUL_HASH = HashingUtils::HashString("TEXT_SUCCESSFUL");
static const int TEXT_DELIVERED_HASH = HashingUtils::HashString("TEXT_DELIVERED");
static const int TEXT_INVALID_HASH = HashingUtils::HashString("TEXT_INVALID");
static const int TEXT_INVALID_MESSAGE_HASH = HashingUtils::HashString("TEXT_INVALID_MESSAGE");
static const int TEXT_UNREACHABLE_HASH = HashingUtils::HashString("TEXT_UNREACHABLE");
static const int TEXT_CARRIER_UNREACHABLE_HASH = HashingUtils::HashString("TEXT_CARRIER_UNREACHABLE");
static const int TEXT_BLOCKED_HASH = HashingUtils::HashString("TEXT_BLOCKED");
static const int TEXT_CARRIER_BLOCKED_HASH = HashingUtils::HashString("TEXT_CARRIER_BLOCKED");
static const int TEXT_SPAM_HASH = HashingUtils::HashString("TEXT_SPAM");
static const int TEXT_UNKNOWN_HASH = HashingUtils::HashString("TEXT_UNKNOWN");
static const int TEXT_TTL_EXPIRED_HASH = HashingUtils::HashString("TEXT_TTL_EXPIRED");
static const int TEXT_PROTECT_BLOCKED_HASH = HashingUtils::HashString("TEXT_PROTECT_BLOCKED");
static const int VOICE_ALL_HASH = HashingUtils::HashString("VOICE_ALL");
static const int VOICE_INITIATED_HASH = HashingUtils::HashString("VOICE_INITIATED");
static const int VOICE_RINGING_HASH = HashingUtils::HashString("VOICE_RINGING");
static const int VOICE_ANSWERED_HASH = HashingUtils::HashString("VOICE_ANSWERED");
static const int VOICE_COMPLETED_HASH = HashingUtils::HashString("VOICE_COMPLETED");
static const int VOICE_BUSY_HASH = HashingUtils::HashString("VOICE_BUSY");
static const int VOICE_NO_ANSWER_HASH = HashingUtils::HashString("VOICE_NO_ANSWER");
static const int VOICE_FAILED_HASH = HashingUtils::HashString("VOICE_FAILED");
static const int VOICE_TTL_EXPIRED_HASH = HashingUtils::HashString("VOICE_TTL_EXPIRED");
static const int MEDIA_ALL_HASH = HashingUtils::HashString("MEDIA_ALL");
static const int MEDIA_PENDING_HASH = HashingUtils::HashString("MEDIA_PENDING");
static const int MEDIA_QUEUED_HASH = HashingUtils::HashString("MEDIA_QUEUED");
static const int MEDIA_SUCCESSFUL_HASH = HashingUtils::HashString("MEDIA_SUCCESSFUL");
static const int MEDIA_DELIVERED_HASH = HashingUtils::HashString("MEDIA_DELIVERED");
static const int MEDIA_INVALID_HASH = HashingUtils::HashString("MEDIA_INVALID");
static const int MEDIA_INVALID_MESSAGE_HASH = HashingUtils::HashString("MEDIA_INVALID_MESSAGE");
static const int MEDIA_UNREACHABLE_HASH = HashingUtils::HashString("MEDIA_UNREACHABLE");
static const int MEDIA_CARRIER_UNREACHABLE_HASH = HashingUtils::HashString("MEDIA_CARRIER_UNREACHABLE");
static const int MEDIA_BLOCKED_HASH = HashingUtils::HashString("MEDIA_BLOCKED");
static const int MEDIA_CARRIER_BLOCKED_HASH = HashingUtils::HashString("MEDIA_CARRIER_BLOCKED");
static const int MEDIA_SPAM_HASH = HashingUtils::HashString("MEDIA_SPAM");
static const int MEDIA_UNKNOWN_HASH = HashingUtils::HashString("MEDIA_UNKNOWN");
static const int MEDIA_TTL_EXPIRED_HASH = HashingUtils::HashString("MEDIA_TTL_EXPIRED");
static const int MEDIA_FILE_INACCESSIBLE_HASH = HashingUtils::HashString("MEDIA_FILE_INACCESSIBLE");
static const int MEDIA_FILE_TYPE_UNSUPPORTED_HASH = HashingUtils::HashString("MEDIA_FILE_TYPE_UNSUPPORTED");
static const int MEDIA_FILE_SIZE_EXCEEDED_HASH = HashingUtils::HashString("MEDIA_FILE_SIZE_EXCEEDED");
static const int RCS_ALL_HASH = HashingUtils::HashString("RCS_ALL");
static const int RCS_QUEUED_HASH = HashingUtils::HashString("RCS_QUEUED");
static const int RCS_SENT_HASH = HashingUtils::HashString("RCS_SENT");
static const int RCS_DELIVERED_HASH = HashingUtils::HashString("RCS_DELIVERED");
static const int RCS_READ_HASH = HashingUtils::HashString("RCS_READ");
static const int RCS_FAILED_HASH = HashingUtils::HashString("RCS_FAILED");
static const int RCS_TTL_EXPIRED_HASH = HashingUtils::HashString("RCS_TTL_EXPIRED");
static const int RCS_PROTECT_BLOCKED_HASH = HashingUtils::HashString("RCS_PROTECT_BLOCKED");
static const int RCS_FALLEN_BACK_TO_SMS_HASH = HashingUtils::HashString("RCS_FALLEN_BACK_TO_SMS");

EventType GetEventTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_HASH) {
    return EventType::ALL;
  } else if (hashCode == TEXT_ALL_HASH) {
    return EventType::TEXT_ALL;
  } else if (hashCode == TEXT_SENT_HASH) {
    return EventType::TEXT_SENT;
  } else if (hashCode == TEXT_PENDING_HASH) {
    return EventType::TEXT_PENDING;
  } else if (hashCode == TEXT_QUEUED_HASH) {
    return EventType::TEXT_QUEUED;
  } else if (hashCode == TEXT_SUCCESSFUL_HASH) {
    return EventType::TEXT_SUCCESSFUL;
  } else if (hashCode == TEXT_DELIVERED_HASH) {
    return EventType::TEXT_DELIVERED;
  } else if (hashCode == TEXT_INVALID_HASH) {
    return EventType::TEXT_INVALID;
  } else if (hashCode == TEXT_INVALID_MESSAGE_HASH) {
    return EventType::TEXT_INVALID_MESSAGE;
  } else if (hashCode == TEXT_UNREACHABLE_HASH) {
    return EventType::TEXT_UNREACHABLE;
  } else if (hashCode == TEXT_CARRIER_UNREACHABLE_HASH) {
    return EventType::TEXT_CARRIER_UNREACHABLE;
  } else if (hashCode == TEXT_BLOCKED_HASH) {
    return EventType::TEXT_BLOCKED;
  } else if (hashCode == TEXT_CARRIER_BLOCKED_HASH) {
    return EventType::TEXT_CARRIER_BLOCKED;
  } else if (hashCode == TEXT_SPAM_HASH) {
    return EventType::TEXT_SPAM;
  } else if (hashCode == TEXT_UNKNOWN_HASH) {
    return EventType::TEXT_UNKNOWN;
  } else if (hashCode == TEXT_TTL_EXPIRED_HASH) {
    return EventType::TEXT_TTL_EXPIRED;
  } else if (hashCode == TEXT_PROTECT_BLOCKED_HASH) {
    return EventType::TEXT_PROTECT_BLOCKED;
  } else if (hashCode == VOICE_ALL_HASH) {
    return EventType::VOICE_ALL;
  } else if (hashCode == VOICE_INITIATED_HASH) {
    return EventType::VOICE_INITIATED;
  } else if (hashCode == VOICE_RINGING_HASH) {
    return EventType::VOICE_RINGING;
  } else if (hashCode == VOICE_ANSWERED_HASH) {
    return EventType::VOICE_ANSWERED;
  } else if (hashCode == VOICE_COMPLETED_HASH) {
    return EventType::VOICE_COMPLETED;
  } else if (hashCode == VOICE_BUSY_HASH) {
    return EventType::VOICE_BUSY;
  } else if (hashCode == VOICE_NO_ANSWER_HASH) {
    return EventType::VOICE_NO_ANSWER;
  } else if (hashCode == VOICE_FAILED_HASH) {
    return EventType::VOICE_FAILED;
  } else if (hashCode == VOICE_TTL_EXPIRED_HASH) {
    return EventType::VOICE_TTL_EXPIRED;
  } else if (hashCode == MEDIA_ALL_HASH) {
    return EventType::MEDIA_ALL;
  } else if (hashCode == MEDIA_PENDING_HASH) {
    return EventType::MEDIA_PENDING;
  } else if (hashCode == MEDIA_QUEUED_HASH) {
    return EventType::MEDIA_QUEUED;
  } else if (hashCode == MEDIA_SUCCESSFUL_HASH) {
    return EventType::MEDIA_SUCCESSFUL;
  } else if (hashCode == MEDIA_DELIVERED_HASH) {
    return EventType::MEDIA_DELIVERED;
  } else if (hashCode == MEDIA_INVALID_HASH) {
    return EventType::MEDIA_INVALID;
  } else if (hashCode == MEDIA_INVALID_MESSAGE_HASH) {
    return EventType::MEDIA_INVALID_MESSAGE;
  } else if (hashCode == MEDIA_UNREACHABLE_HASH) {
    return EventType::MEDIA_UNREACHABLE;
  } else if (hashCode == MEDIA_CARRIER_UNREACHABLE_HASH) {
    return EventType::MEDIA_CARRIER_UNREACHABLE;
  } else if (hashCode == MEDIA_BLOCKED_HASH) {
    return EventType::MEDIA_BLOCKED;
  } else if (hashCode == MEDIA_CARRIER_BLOCKED_HASH) {
    return EventType::MEDIA_CARRIER_BLOCKED;
  } else if (hashCode == MEDIA_SPAM_HASH) {
    return EventType::MEDIA_SPAM;
  } else if (hashCode == MEDIA_UNKNOWN_HASH) {
    return EventType::MEDIA_UNKNOWN;
  } else if (hashCode == MEDIA_TTL_EXPIRED_HASH) {
    return EventType::MEDIA_TTL_EXPIRED;
  } else if (hashCode == MEDIA_FILE_INACCESSIBLE_HASH) {
    return EventType::MEDIA_FILE_INACCESSIBLE;
  } else if (hashCode == MEDIA_FILE_TYPE_UNSUPPORTED_HASH) {
    return EventType::MEDIA_FILE_TYPE_UNSUPPORTED;
  } else if (hashCode == MEDIA_FILE_SIZE_EXCEEDED_HASH) {
    return EventType::MEDIA_FILE_SIZE_EXCEEDED;
  } else if (hashCode == RCS_ALL_HASH) {
    return EventType::RCS_ALL;
  } else if (hashCode == RCS_QUEUED_HASH) {
    return EventType::RCS_QUEUED;
  } else if (hashCode == RCS_SENT_HASH) {
    return EventType::RCS_SENT;
  } else if (hashCode == RCS_DELIVERED_HASH) {
    return EventType::RCS_DELIVERED;
  } else if (hashCode == RCS_READ_HASH) {
    return EventType::RCS_READ;
  } else if (hashCode == RCS_FAILED_HASH) {
    return EventType::RCS_FAILED;
  } else if (hashCode == RCS_TTL_EXPIRED_HASH) {
    return EventType::RCS_TTL_EXPIRED;
  } else if (hashCode == RCS_PROTECT_BLOCKED_HASH) {
    return EventType::RCS_PROTECT_BLOCKED;
  } else if (hashCode == RCS_FALLEN_BACK_TO_SMS_HASH) {
    return EventType::RCS_FALLEN_BACK_TO_SMS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventType>(hashCode);
  }

  return EventType::NOT_SET;
}

Aws::String GetNameForEventType(EventType enumValue) {
  switch (enumValue) {
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
    case EventType::TEXT_PROTECT_BLOCKED:
      return "TEXT_PROTECT_BLOCKED";
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
    case EventType::MEDIA_ALL:
      return "MEDIA_ALL";
    case EventType::MEDIA_PENDING:
      return "MEDIA_PENDING";
    case EventType::MEDIA_QUEUED:
      return "MEDIA_QUEUED";
    case EventType::MEDIA_SUCCESSFUL:
      return "MEDIA_SUCCESSFUL";
    case EventType::MEDIA_DELIVERED:
      return "MEDIA_DELIVERED";
    case EventType::MEDIA_INVALID:
      return "MEDIA_INVALID";
    case EventType::MEDIA_INVALID_MESSAGE:
      return "MEDIA_INVALID_MESSAGE";
    case EventType::MEDIA_UNREACHABLE:
      return "MEDIA_UNREACHABLE";
    case EventType::MEDIA_CARRIER_UNREACHABLE:
      return "MEDIA_CARRIER_UNREACHABLE";
    case EventType::MEDIA_BLOCKED:
      return "MEDIA_BLOCKED";
    case EventType::MEDIA_CARRIER_BLOCKED:
      return "MEDIA_CARRIER_BLOCKED";
    case EventType::MEDIA_SPAM:
      return "MEDIA_SPAM";
    case EventType::MEDIA_UNKNOWN:
      return "MEDIA_UNKNOWN";
    case EventType::MEDIA_TTL_EXPIRED:
      return "MEDIA_TTL_EXPIRED";
    case EventType::MEDIA_FILE_INACCESSIBLE:
      return "MEDIA_FILE_INACCESSIBLE";
    case EventType::MEDIA_FILE_TYPE_UNSUPPORTED:
      return "MEDIA_FILE_TYPE_UNSUPPORTED";
    case EventType::MEDIA_FILE_SIZE_EXCEEDED:
      return "MEDIA_FILE_SIZE_EXCEEDED";
    case EventType::RCS_ALL:
      return "RCS_ALL";
    case EventType::RCS_QUEUED:
      return "RCS_QUEUED";
    case EventType::RCS_SENT:
      return "RCS_SENT";
    case EventType::RCS_DELIVERED:
      return "RCS_DELIVERED";
    case EventType::RCS_READ:
      return "RCS_READ";
    case EventType::RCS_FAILED:
      return "RCS_FAILED";
    case EventType::RCS_TTL_EXPIRED:
      return "RCS_TTL_EXPIRED";
    case EventType::RCS_PROTECT_BLOCKED:
      return "RCS_PROTECT_BLOCKED";
    case EventType::RCS_FALLEN_BACK_TO_SMS:
      return "RCS_FALLEN_BACK_TO_SMS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventTypeMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
