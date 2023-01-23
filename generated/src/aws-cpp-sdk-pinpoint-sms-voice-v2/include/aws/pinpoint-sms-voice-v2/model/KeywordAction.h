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
  enum class KeywordAction
  {
    NOT_SET,
    AUTOMATIC_RESPONSE,
    OPT_OUT,
    OPT_IN
  };

namespace KeywordActionMapper
{
AWS_PINPOINTSMSVOICEV2_API KeywordAction GetKeywordActionForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForKeywordAction(KeywordAction value);
} // namespace KeywordActionMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
