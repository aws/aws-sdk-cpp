﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>

namespace Aws {
namespace mediapackagev2 {
namespace Model {
enum class DashTtmlProfile { NOT_SET, IMSC_1, EBU_TT_D_101 };

namespace DashTtmlProfileMapper {
AWS_MEDIAPACKAGEV2_API DashTtmlProfile GetDashTtmlProfileForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForDashTtmlProfile(DashTtmlProfile value);
}  // namespace DashTtmlProfileMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
