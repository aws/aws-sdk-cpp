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
enum class UpgradeRolloutOrder { NOT_SET, first, second, last };

namespace UpgradeRolloutOrderMapper {
AWS_RDS_API UpgradeRolloutOrder GetUpgradeRolloutOrderForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForUpgradeRolloutOrder(UpgradeRolloutOrder value);
}  // namespace UpgradeRolloutOrderMapper
}  // namespace Model
}  // namespace RDS
}  // namespace Aws
