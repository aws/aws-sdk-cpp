/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>

namespace Aws {
namespace TranscribeService {
namespace Model {
enum class LanguageDetectionMode { NOT_SET, IDENTIFY_LANGUAGE };

namespace LanguageDetectionModeMapper {
AWS_TRANSCRIBESERVICE_API LanguageDetectionMode GetLanguageDetectionModeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForLanguageDetectionMode(LanguageDetectionMode value);
}  // namespace LanguageDetectionModeMapper
}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
