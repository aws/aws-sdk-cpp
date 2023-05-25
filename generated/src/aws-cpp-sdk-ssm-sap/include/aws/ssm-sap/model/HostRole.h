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
  enum class HostRole
  {
    NOT_SET,
    LEADER,
    WORKER,
    STANDBY,
    UNKNOWN
  };

namespace HostRoleMapper
{
AWS_SSMSAP_API HostRole GetHostRoleForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForHostRole(HostRole value);
} // namespace HostRoleMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
