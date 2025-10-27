/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/Synthetics_EXPORTS.h>

namespace Aws {
namespace Synthetics {
namespace Model {
enum class CanaryRunState { NOT_SET, RUNNING, PASSED, FAILED };

namespace CanaryRunStateMapper {
AWS_SYNTHETICS_API CanaryRunState GetCanaryRunStateForName(const Aws::String& name);

AWS_SYNTHETICS_API Aws::String GetNameForCanaryRunState(CanaryRunState value);
}  // namespace CanaryRunStateMapper
}  // namespace Model
}  // namespace Synthetics
}  // namespace Aws
