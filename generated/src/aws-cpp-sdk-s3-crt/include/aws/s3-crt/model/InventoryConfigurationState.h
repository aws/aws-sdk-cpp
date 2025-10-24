﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>

namespace Aws {
namespace S3Crt {
namespace Model {
enum class InventoryConfigurationState { NOT_SET, ENABLED, DISABLED };

namespace InventoryConfigurationStateMapper {
AWS_S3CRT_API InventoryConfigurationState GetInventoryConfigurationStateForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForInventoryConfigurationState(InventoryConfigurationState value);
}  // namespace InventoryConfigurationStateMapper
}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
