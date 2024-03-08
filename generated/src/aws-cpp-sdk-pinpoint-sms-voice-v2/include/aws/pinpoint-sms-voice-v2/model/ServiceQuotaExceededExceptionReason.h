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
  enum class ServiceQuotaExceededExceptionReason
  {
    NOT_SET,
    ASSOCIATIONS_PER_REGISTRATION,
    CONFIGURATION_SETS_PER_ACCOUNT,
    DAILY_DESTINATION_CALL_LIMIT,
    EVENT_DESTINATIONS_PER_CONFIGURATION_SET,
    KEYWORDS_PER_PHONE_NUMBER,
    KEYWORDS_PER_POOL,
    MONTHLY_SPEND_LIMIT_REACHED_FOR_TEXT,
    MONTHLY_SPEND_LIMIT_REACHED_FOR_VOICE,
    OPT_OUT_LISTS_PER_ACCOUNT,
    ORIGINATION_IDENTITIES_PER_POOL,
    PHONE_NUMBERS_PER_ACCOUNT,
    PHONE_NUMBERS_PER_REGISTRATION,
    POOLS_PER_ACCOUNT,
    REGISTRATION_ATTACHMENTS_CREATED_PER_DAY,
    REGISTRATION_ATTACHMENTS_PER_ACCOUNT,
    REGISTRATION_VERSIONS_CREATED_PER_DAY,
    REGISTRATIONS_PER_ACCOUNT,
    SENDER_IDS_PER_ACCOUNT,
    TAGS_PER_RESOURCE,
    VERIFIED_DESTINATION_NUMBERS_PER_ACCOUNT,
    VERIFICATION_ATTEMPTS_PER_DAY
  };

namespace ServiceQuotaExceededExceptionReasonMapper
{
AWS_PINPOINTSMSVOICEV2_API ServiceQuotaExceededExceptionReason GetServiceQuotaExceededExceptionReasonForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForServiceQuotaExceededExceptionReason(ServiceQuotaExceededExceptionReason value);
} // namespace ServiceQuotaExceededExceptionReasonMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
