/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class PermissionConditionOperator { NOT_SET, StringEquals };

namespace PermissionConditionOperatorMapper {
AWS_QBUSINESS_API PermissionConditionOperator GetPermissionConditionOperatorForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForPermissionConditionOperator(PermissionConditionOperator value);
}  // namespace PermissionConditionOperatorMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
