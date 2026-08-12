/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace WellArchitected {
namespace Model {
enum class Criticality { NOT_SET, MISSION_CRITICAL, BUSINESS_CRITICAL, NON_CRITICAL, TEST_DEVELOPMENT };

namespace CriticalityMapper {
AWS_WELLARCHITECTED_API Criticality GetCriticalityForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForCriticality(Criticality value);
}  // namespace CriticalityMapper
}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
