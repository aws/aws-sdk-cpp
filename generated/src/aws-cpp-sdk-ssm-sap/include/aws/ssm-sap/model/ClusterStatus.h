/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SsmSap
{
namespace Model
{
  enum class ClusterStatus
  {
    NOT_SET,
    ONLINE,
    STANDBY,
    MAINTENANCE,
    OFFLINE,
    NONE
  };

namespace ClusterStatusMapper
{
AWS_SSMSAP_API ClusterStatus GetClusterStatusForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForClusterStatus(ClusterStatus value);
} // namespace ClusterStatusMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
