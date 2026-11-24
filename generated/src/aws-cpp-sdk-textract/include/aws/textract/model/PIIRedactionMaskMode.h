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
enum class PIIRedactionMaskMode { NOT_SET, PII, ENTITY_TYPE };

namespace PIIRedactionMaskModeMapper {
AWS_TEXTRACT_API PIIRedactionMaskMode GetPIIRedactionMaskModeForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForPIIRedactionMaskMode(PIIRedactionMaskMode value);
}  // namespace PIIRedactionMaskModeMapper
}  // namespace Model
}  // namespace Textract
}  // namespace Aws
