/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/Textract_EXPORTS.h>

namespace Aws {
namespace Textract {
namespace Model {
enum class SensitiveDataDetectionMode { NOT_SET, DETECTION, DETECTION_AND_REDACTION, DISABLED };

namespace SensitiveDataDetectionModeMapper {
AWS_TEXTRACT_API SensitiveDataDetectionMode GetSensitiveDataDetectionModeForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForSensitiveDataDetectionMode(SensitiveDataDetectionMode value);
}  // namespace SensitiveDataDetectionModeMapper
}  // namespace Model
}  // namespace Textract
}  // namespace Aws
