/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{
  enum class PolicyTypeStatus
  {
    NOT_SET,
    ENABLED,
    PENDING_ENABLE,
    PENDING_DISABLE
  };

namespace PolicyTypeStatusMapper
{
AWS_ORGANIZATIONS_API PolicyTypeStatus GetPolicyTypeStatusForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForPolicyTypeStatus(PolicyTypeStatus value);
} // namespace PolicyTypeStatusMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
