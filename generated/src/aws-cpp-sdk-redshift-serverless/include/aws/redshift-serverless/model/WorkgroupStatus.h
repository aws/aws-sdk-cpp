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
  enum class WorkgroupStatus
  {
    NOT_SET,
    CREATING,
    AVAILABLE,
    MODIFYING,
    DELETING
  };

namespace WorkgroupStatusMapper
{
AWS_REDSHIFTSERVERLESS_API WorkgroupStatus GetWorkgroupStatusForName(const Aws::String& name);

AWS_REDSHIFTSERVERLESS_API Aws::String GetNameForWorkgroupStatus(WorkgroupStatus value);
} // namespace WorkgroupStatusMapper
} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
