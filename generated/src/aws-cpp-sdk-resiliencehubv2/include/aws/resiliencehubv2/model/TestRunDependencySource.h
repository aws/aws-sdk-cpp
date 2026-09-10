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
enum class TestRunDependencySource { NOT_SET, DISCOVERED, MANUAL };

namespace TestRunDependencySourceMapper {
AWS_RESILIENCEHUBV2_API TestRunDependencySource GetTestRunDependencySourceForName(const Aws::String& name);

AWS_RESILIENCEHUBV2_API Aws::String GetNameForTestRunDependencySource(TestRunDependencySource value);
}  // namespace TestRunDependencySourceMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
