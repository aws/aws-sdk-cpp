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
enum class State { NOT_SET, ENABLED, DISABLED };

namespace StateMapper {
AWS_TEXTRACT_API State GetStateForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForState(State value);
}  // namespace StateMapper
}  // namespace Model
}  // namespace Textract
}  // namespace Aws
