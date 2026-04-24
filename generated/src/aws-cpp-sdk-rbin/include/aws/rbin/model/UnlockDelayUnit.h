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
enum class UnlockDelayUnit { NOT_SET, DAYS };

namespace UnlockDelayUnitMapper {
AWS_RECYCLEBIN_API UnlockDelayUnit GetUnlockDelayUnitForName(const Aws::String& name);

AWS_RECYCLEBIN_API Aws::String GetNameForUnlockDelayUnit(UnlockDelayUnit value);
}  // namespace UnlockDelayUnitMapper
}  // namespace Model
}  // namespace RecycleBin
}  // namespace Aws
