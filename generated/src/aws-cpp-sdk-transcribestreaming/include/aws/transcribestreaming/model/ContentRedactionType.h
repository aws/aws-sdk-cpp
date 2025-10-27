/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>

namespace Aws {
namespace TranscribeStreamingService {
namespace Model {
enum class ContentRedactionType { NOT_SET, PII };

namespace ContentRedactionTypeMapper {
AWS_TRANSCRIBESTREAMINGSERVICE_API ContentRedactionType GetContentRedactionTypeForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForContentRedactionType(ContentRedactionType value);
}  // namespace ContentRedactionTypeMapper
}  // namespace Model
}  // namespace TranscribeStreamingService
}  // namespace Aws
