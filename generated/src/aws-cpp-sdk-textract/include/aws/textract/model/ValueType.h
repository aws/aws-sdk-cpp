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
enum class ValueType { NOT_SET, DATE };

namespace ValueTypeMapper {
AWS_TEXTRACT_API ValueType GetValueTypeForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForValueType(ValueType value);
}  // namespace ValueTypeMapper
}  // namespace Model
}  // namespace Textract
}  // namespace Aws
