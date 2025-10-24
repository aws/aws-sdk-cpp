﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>

namespace Aws {
namespace Outposts {
namespace Model {
enum class CapacityTaskStatus {
  NOT_SET,
  REQUESTED,
  IN_PROGRESS,
  FAILED,
  COMPLETED,
  WAITING_FOR_EVACUATION,
  CANCELLATION_IN_PROGRESS,
  CANCELLED
};

namespace CapacityTaskStatusMapper {
AWS_OUTPOSTS_API CapacityTaskStatus GetCapacityTaskStatusForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForCapacityTaskStatus(CapacityTaskStatus value);
}  // namespace CapacityTaskStatusMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
