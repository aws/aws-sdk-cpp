/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

namespace Aws {
namespace RTBFabric {
namespace Model {
enum class FailureMode { NOT_SET, OPEN, CLOSED };

namespace FailureModeMapper {
AWS_RTBFABRIC_API FailureMode GetFailureModeForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForFailureMode(FailureMode value);
}  // namespace FailureModeMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
