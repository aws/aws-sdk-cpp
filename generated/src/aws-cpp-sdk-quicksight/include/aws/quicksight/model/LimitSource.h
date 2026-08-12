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
enum class LimitSource { NOT_SET, DIRECT_USER, GROUP, ROLE, ACCOUNT, SYSTEM_DEFAULT };

namespace LimitSourceMapper {
AWS_QUICKSIGHT_API LimitSource GetLimitSourceForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForLimitSource(LimitSource value);
}  // namespace LimitSourceMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
