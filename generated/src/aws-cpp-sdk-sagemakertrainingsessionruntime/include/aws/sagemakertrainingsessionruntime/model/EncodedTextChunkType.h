/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {
enum class EncodedTextChunkType { NOT_SET, encoded_text };

namespace EncodedTextChunkTypeMapper {
AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API EncodedTextChunkType GetEncodedTextChunkTypeForName(const Aws::String& name);

AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::String GetNameForEncodedTextChunkType(EncodedTextChunkType value);
}  // namespace EncodedTextChunkTypeMapper
}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
