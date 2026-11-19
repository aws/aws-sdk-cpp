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
enum class VoiceOrigin { NOT_SET, aws, customer };

namespace VoiceOriginMapper {
AWS_POLLY_API VoiceOrigin GetVoiceOriginForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForVoiceOrigin(VoiceOrigin value);
}  // namespace VoiceOriginMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
