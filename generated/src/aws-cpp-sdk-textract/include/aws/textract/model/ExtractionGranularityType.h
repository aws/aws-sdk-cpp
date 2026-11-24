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
enum class ExtractionGranularityType { NOT_SET, DOCUMENT, PAGE, ELEMENT, WORD, LINE };

namespace ExtractionGranularityTypeMapper {
AWS_TEXTRACT_API ExtractionGranularityType GetExtractionGranularityTypeForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForExtractionGranularityType(ExtractionGranularityType value);
}  // namespace ExtractionGranularityTypeMapper
}  // namespace Model
}  // namespace Textract
}  // namespace Aws
