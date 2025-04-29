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
  enum class AccessRequestStatus
  {
    NOT_SET,
    Approved,
    Rejected,
    Revoked,
    Expired,
    Pending
  };

namespace AccessRequestStatusMapper
{
AWS_SSM_API AccessRequestStatus GetAccessRequestStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForAccessRequestStatus(AccessRequestStatus value);
} // namespace AccessRequestStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
