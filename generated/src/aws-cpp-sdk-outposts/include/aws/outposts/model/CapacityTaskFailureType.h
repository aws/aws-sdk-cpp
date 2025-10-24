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
enum class CapacityTaskFailureType {
  NOT_SET,
  UNSUPPORTED_CAPACITY_CONFIGURATION,
  UNEXPECTED_ASSET_STATE,
  BLOCKING_INSTANCES_NOT_EVACUATED,
  INTERNAL_SERVER_ERROR,
  RESOURCE_NOT_FOUND
};

namespace CapacityTaskFailureTypeMapper {
AWS_OUTPOSTS_API CapacityTaskFailureType GetCapacityTaskFailureTypeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForCapacityTaskFailureType(CapacityTaskFailureType value);
}  // namespace CapacityTaskFailureTypeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
