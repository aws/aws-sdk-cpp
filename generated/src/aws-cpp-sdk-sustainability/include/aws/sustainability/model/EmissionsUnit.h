/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>

namespace Aws {
namespace Sustainability {
namespace Model {
enum class EmissionsUnit { NOT_SET, MTCO2e };

namespace EmissionsUnitMapper {
AWS_SUSTAINABILITY_API EmissionsUnit GetEmissionsUnitForName(const Aws::String& name);

AWS_SUSTAINABILITY_API Aws::String GetNameForEmissionsUnit(EmissionsUnit value);
}  // namespace EmissionsUnitMapper
}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
