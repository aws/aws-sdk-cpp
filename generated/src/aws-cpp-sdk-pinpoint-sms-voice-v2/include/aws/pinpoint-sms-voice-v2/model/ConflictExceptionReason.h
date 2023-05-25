/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{
  enum class ConflictExceptionReason
  {
    NOT_SET,
    DELETION_PROTECTION_ENABLED,
    DESTINATION_PHONE_NUMBER_NOT_VERIFIED,
    DESTINATION_PHONE_NUMBER_OPTED_OUT,
    EVENT_DESTINATION_MISMATCH,
    KEYWORD_MISMATCH,
    LAST_PHONE_NUMBER,
    SELF_MANAGED_OPT_OUTS_MISMATCH,
    MESSAGE_TYPE_MISMATCH,
    NO_ORIGINATION_IDENTITIES_FOUND,
    OPT_OUT_LIST_MISMATCH,
    PHONE_NUMBER_ASSOCIATED_TO_POOL,
    PHONE_NUMBER_NOT_ASSOCIATED_TO_POOL,
    PHONE_NUMBER_NOT_IN_REGISTRATION_REGION,
    RESOURCE_ALREADY_EXISTS,
    RESOURCE_DELETION_NOT_ALLOWED,
    RESOURCE_MODIFICATION_NOT_ALLOWED,
    RESOURCE_NOT_ACTIVE,
    RESOURCE_NOT_EMPTY,
    TWO_WAY_CONFIG_MISMATCH
  };

namespace ConflictExceptionReasonMapper
{
AWS_PINPOINTSMSVOICEV2_API ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason value);
} // namespace ConflictExceptionReasonMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
