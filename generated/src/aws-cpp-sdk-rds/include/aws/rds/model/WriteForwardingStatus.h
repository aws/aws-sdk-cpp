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
  enum class WriteForwardingStatus
  {
    NOT_SET,
    enabled,
    disabled,
    enabling,
    disabling,
    unknown
  };

namespace WriteForwardingStatusMapper
{
AWS_RDS_API WriteForwardingStatus GetWriteForwardingStatusForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForWriteForwardingStatus(WriteForwardingStatus value);
} // namespace WriteForwardingStatusMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
