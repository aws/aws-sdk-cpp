/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class Status
  {
    NOT_SET,
    STANDBY,
    ACTIVE,
    UPDATING,
    DELETING,
    STARTING,
    STOPPING,
    ERROR_
  };

namespace StatusMapper
{
AWS_MEDIACONNECT_API Status GetStatusForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
