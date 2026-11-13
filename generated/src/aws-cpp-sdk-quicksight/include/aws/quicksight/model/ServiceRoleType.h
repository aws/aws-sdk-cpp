/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class ServiceRoleType { NOT_SET, QUICKSIGHT_MANAGED, CUSTOMER_MANAGED };

namespace ServiceRoleTypeMapper {
AWS_QUICKSIGHT_API ServiceRoleType GetServiceRoleTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForServiceRoleType(ServiceRoleType value);
}  // namespace ServiceRoleTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
