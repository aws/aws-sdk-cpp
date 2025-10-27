/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rbin/RecycleBin_EXPORTS.h>

namespace Aws {
namespace RecycleBin {
namespace Model {
enum class RetentionPeriodUnit { NOT_SET, DAYS };

namespace RetentionPeriodUnitMapper {
AWS_RECYCLEBIN_API RetentionPeriodUnit GetRetentionPeriodUnitForName(const Aws::String& name);

AWS_RECYCLEBIN_API Aws::String GetNameForRetentionPeriodUnit(RetentionPeriodUnit value);
}  // namespace RetentionPeriodUnitMapper
}  // namespace Model
}  // namespace RecycleBin
}  // namespace Aws
