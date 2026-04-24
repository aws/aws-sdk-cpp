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
enum class InputType { NOT_SET, REAL_TIME, POST_CALL };

namespace InputTypeMapper {
AWS_TRANSCRIBESERVICE_API InputType GetInputTypeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForInputType(InputType value);
}  // namespace InputTypeMapper
}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
