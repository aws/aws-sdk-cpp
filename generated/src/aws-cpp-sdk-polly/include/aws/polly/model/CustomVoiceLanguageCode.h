/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/Polly_EXPORTS.h>

namespace Aws {
namespace Polly {
namespace Model {
enum class CustomVoiceLanguageCode { NOT_SET, de_DE, en_US, es_US, fr_FR, hi_IN, it_IT, pt_BR };

namespace CustomVoiceLanguageCodeMapper {
AWS_POLLY_API CustomVoiceLanguageCode GetCustomVoiceLanguageCodeForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForCustomVoiceLanguageCode(CustomVoiceLanguageCode value);
}  // namespace CustomVoiceLanguageCodeMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
