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
  enum class LanguageCode
  {
    NOT_SET,
    DE_DE,
    EN_GB,
    EN_US,
    ES_419,
    ES_ES,
    FR_CA,
    FR_FR,
    IT_IT,
    JA_JP,
    KO_KR,
    PT_BR,
    ZH_CN,
    ZH_TW
  };

namespace LanguageCodeMapper
{
AWS_PINPOINTSMSVOICEV2_API LanguageCode GetLanguageCodeForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForLanguageCode(LanguageCode value);
} // namespace LanguageCodeMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
