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
  enum class TargetHealthReason
  {
    NOT_SET,
    UNREACHABLE,
    CONNECTION_FAILED,
    AUTH_FAILURE,
    PENDING_PROXY_CAPACITY,
    INVALID_REPLICATION_STATE
  };

namespace TargetHealthReasonMapper
{
AWS_RDS_API TargetHealthReason GetTargetHealthReasonForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForTargetHealthReason(TargetHealthReason value);
} // namespace TargetHealthReasonMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
