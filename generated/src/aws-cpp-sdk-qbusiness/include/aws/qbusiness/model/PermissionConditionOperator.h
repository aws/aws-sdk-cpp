/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class PermissionConditionOperator
  {
    NOT_SET,
    StringEquals
  };

namespace PermissionConditionOperatorMapper
{
AWS_QBUSINESS_API PermissionConditionOperator GetPermissionConditionOperatorForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForPermissionConditionOperator(PermissionConditionOperator value);
} // namespace PermissionConditionOperatorMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
