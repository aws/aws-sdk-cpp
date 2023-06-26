/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class WaveHealthStatus
  {
    NOT_SET,
    HEALTHY,
    LAGGING,
    ERROR_
  };

namespace WaveHealthStatusMapper
{
AWS_MGN_API WaveHealthStatus GetWaveHealthStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForWaveHealthStatus(WaveHealthStatus value);
} // namespace WaveHealthStatusMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
