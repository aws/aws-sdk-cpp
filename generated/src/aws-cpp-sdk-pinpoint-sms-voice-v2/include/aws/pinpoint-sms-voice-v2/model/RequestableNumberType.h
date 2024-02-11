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
  enum class RequestableNumberType
  {
    NOT_SET,
    LONG_CODE,
    TOLL_FREE,
    TEN_DLC,
    SIMULATOR
  };

namespace RequestableNumberTypeMapper
{
AWS_PINPOINTSMSVOICEV2_API RequestableNumberType GetRequestableNumberTypeForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForRequestableNumberType(RequestableNumberType value);
} // namespace RequestableNumberTypeMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
