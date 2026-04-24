/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDS_EXPORTS.h>

namespace Aws {
namespace RDS {
namespace Model {
enum class ActivityStreamStatus { NOT_SET, stopped, starting, started, stopping };

namespace ActivityStreamStatusMapper {
AWS_RDS_API ActivityStreamStatus GetActivityStreamStatusForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForActivityStreamStatus(ActivityStreamStatus value);
}  // namespace ActivityStreamStatusMapper
}  // namespace Model
}  // namespace RDS
}  // namespace Aws
