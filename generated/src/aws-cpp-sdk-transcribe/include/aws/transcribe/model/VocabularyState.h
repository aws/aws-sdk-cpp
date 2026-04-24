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
enum class VocabularyState { NOT_SET, PENDING, READY, FAILED };

namespace VocabularyStateMapper {
AWS_TRANSCRIBESERVICE_API VocabularyState GetVocabularyStateForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForVocabularyState(VocabularyState value);
}  // namespace VocabularyStateMapper
}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
