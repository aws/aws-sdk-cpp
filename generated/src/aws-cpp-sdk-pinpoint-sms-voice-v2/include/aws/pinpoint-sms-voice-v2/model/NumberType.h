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
  enum class NumberType
  {
    NOT_SET,
    SHORT_CODE,
    LONG_CODE,
    TOLL_FREE,
    TEN_DLC,
    SIMULATOR
  };

namespace NumberTypeMapper
{
AWS_PINPOINTSMSVOICEV2_API NumberType GetNumberTypeForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForNumberType(NumberType value);
} // namespace NumberTypeMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
