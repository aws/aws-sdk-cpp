/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/PCS_EXPORTS.h>

namespace Aws {
namespace PCS {
namespace Model {
enum class SchedulerType { NOT_SET, SLURM };

namespace SchedulerTypeMapper {
AWS_PCS_API SchedulerType GetSchedulerTypeForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForSchedulerType(SchedulerType value);
}  // namespace SchedulerTypeMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
