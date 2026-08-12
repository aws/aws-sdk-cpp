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
enum class GovernedAction { NOT_SET, SHARE };

namespace GovernedActionMapper {
AWS_QUICKSIGHT_API GovernedAction GetGovernedActionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForGovernedAction(GovernedAction value);
}  // namespace GovernedActionMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
