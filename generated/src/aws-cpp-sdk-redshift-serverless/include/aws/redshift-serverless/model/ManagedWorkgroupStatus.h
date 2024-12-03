/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{
  enum class ManagedWorkgroupStatus
  {
    NOT_SET,
    CREATING,
    DELETING,
    MODIFYING,
    AVAILABLE,
    NOT_AVAILABLE
  };

namespace ManagedWorkgroupStatusMapper
{
AWS_REDSHIFTSERVERLESS_API ManagedWorkgroupStatus GetManagedWorkgroupStatusForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForManagedWorkgroupStatus(ManagedWorkgroupStatus value);
} // namespace ManagedWorkgroupStatusMapper
} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
