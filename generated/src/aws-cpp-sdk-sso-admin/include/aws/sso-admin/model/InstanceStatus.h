/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{
  enum class InstanceStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    DELETE_IN_PROGRESS,
    ACTIVE
  };

namespace InstanceStatusMapper
{
AWS_SSOADMIN_API InstanceStatus GetInstanceStatusForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForInstanceStatus(InstanceStatus value);
} // namespace InstanceStatusMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
