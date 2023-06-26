/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{
  enum class MapRunStatus
  {
    NOT_SET,
    RUNNING,
    SUCCEEDED,
    FAILED,
    ABORTED
  };

namespace MapRunStatusMapper
{
AWS_SFN_API MapRunStatus GetMapRunStatusForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForMapRunStatus(MapRunStatus value);
} // namespace MapRunStatusMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
