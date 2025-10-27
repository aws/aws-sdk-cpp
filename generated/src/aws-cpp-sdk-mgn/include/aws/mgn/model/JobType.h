/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class JobType { NOT_SET, LAUNCH, TERMINATE };

namespace JobTypeMapper {
AWS_MGN_API JobType GetJobTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForJobType(JobType value);
}  // namespace JobTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
