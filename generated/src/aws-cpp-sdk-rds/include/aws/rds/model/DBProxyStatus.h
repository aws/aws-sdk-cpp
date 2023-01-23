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
  enum class DBProxyStatus
  {
    NOT_SET,
    available,
    modifying,
    incompatible_network,
    insufficient_resource_limits,
    creating,
    deleting,
    suspended,
    suspending,
    reactivating
  };

namespace DBProxyStatusMapper
{
AWS_RDS_API DBProxyStatus GetDBProxyStatusForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForDBProxyStatus(DBProxyStatus value);
} // namespace DBProxyStatusMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
