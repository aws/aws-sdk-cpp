/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RTBFabric
{
namespace Model
{
  enum class LinkStatus
  {
    NOT_SET,
    PENDING_CREATION,
    PENDING_REQUEST,
    REQUESTED,
    ACCEPTED,
    ACTIVE,
    REJECTED,
    FAILED,
    PENDING_DELETION,
    DELETED,
    PENDING_UPDATE,
    PENDING_ISOLATION,
    ISOLATED,
    PENDING_RESTORATION
  };

namespace LinkStatusMapper
{
AWS_RTBFABRIC_API LinkStatus GetLinkStatusForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForLinkStatus(LinkStatus value);
} // namespace LinkStatusMapper
} // namespace Model
} // namespace RTBFabric
} // namespace Aws
