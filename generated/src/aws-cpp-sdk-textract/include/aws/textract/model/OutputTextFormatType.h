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
enum class OutputTextFormatType { NOT_SET, PLAIN_TEXT, MARKDOWN, HTML, CSV };

namespace OutputTextFormatTypeMapper {
AWS_TEXTRACT_API OutputTextFormatType GetOutputTextFormatTypeForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForOutputTextFormatType(OutputTextFormatType value);
}  // namespace OutputTextFormatTypeMapper
}  // namespace Model
}  // namespace Textract
}  // namespace Aws
