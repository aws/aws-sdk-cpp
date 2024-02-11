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
  enum class LocalWriteForwardingStatus
  {
    NOT_SET,
    enabled,
    disabled,
    enabling,
    disabling,
    requested
  };

namespace LocalWriteForwardingStatusMapper
{
AWS_RDS_API LocalWriteForwardingStatus GetLocalWriteForwardingStatusForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForLocalWriteForwardingStatus(LocalWriteForwardingStatus value);
} // namespace LocalWriteForwardingStatusMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
