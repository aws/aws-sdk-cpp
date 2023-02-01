/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{
  enum class DBProxyEndpointTargetRole
  {
    NOT_SET,
    READ_WRITE,
    READ_ONLY
  };

namespace DBProxyEndpointTargetRoleMapper
{
AWS_RDS_API DBProxyEndpointTargetRole GetDBProxyEndpointTargetRoleForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForDBProxyEndpointTargetRole(DBProxyEndpointTargetRole value);
} // namespace DBProxyEndpointTargetRoleMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
