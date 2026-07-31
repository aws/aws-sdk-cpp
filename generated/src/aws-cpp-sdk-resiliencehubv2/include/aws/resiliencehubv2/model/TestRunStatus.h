/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
enum class TestRunStatus { NOT_SET, INITIALIZING, RUNNING, STOPPING, PASSED, FAILED, STOPPED, ERROR_ };

namespace TestRunStatusMapper {
AWS_RESILIENCEHUBV2_API TestRunStatus GetTestRunStatusForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForTestRunStatus(TestRunStatus value);
}  // namespace TestRunStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
