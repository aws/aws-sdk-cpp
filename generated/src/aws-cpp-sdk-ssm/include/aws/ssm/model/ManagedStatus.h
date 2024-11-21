/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class ManagedStatus
  {
    NOT_SET,
    All,
    Managed,
    Unmanaged
  };

namespace ManagedStatusMapper
{
AWS_SSM_API ManagedStatus GetManagedStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForManagedStatus(ManagedStatus value);
} // namespace ManagedStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
