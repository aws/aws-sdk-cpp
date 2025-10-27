/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class ValidationStrategyMode { NOT_SET, STRICT, LENIENT };

namespace ValidationStrategyModeMapper {
AWS_QUICKSIGHT_API ValidationStrategyMode GetValidationStrategyModeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForValidationStrategyMode(ValidationStrategyMode value);
}  // namespace ValidationStrategyModeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
