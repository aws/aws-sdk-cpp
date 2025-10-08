/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class DecommissionRequestStatus
  {
    NOT_SET,
    SKIPPED,
    BLOCKED,
    REQUESTED
  };

namespace DecommissionRequestStatusMapper
{
AWS_OUTPOSTS_API DecommissionRequestStatus GetDecommissionRequestStatusForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForDecommissionRequestStatus(DecommissionRequestStatus value);
} // namespace DecommissionRequestStatusMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
