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
enum class VocabularyFilterMethod { NOT_SET, remove, mask, tag };

namespace VocabularyFilterMethodMapper {
AWS_TRANSCRIBESERVICE_API VocabularyFilterMethod GetVocabularyFilterMethodForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForVocabularyFilterMethod(VocabularyFilterMethod value);
}  // namespace VocabularyFilterMethodMapper
}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
