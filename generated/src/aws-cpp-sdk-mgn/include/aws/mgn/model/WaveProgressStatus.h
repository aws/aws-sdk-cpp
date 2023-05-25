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
  enum class WaveProgressStatus
  {
    NOT_SET,
    NOT_STARTED,
    IN_PROGRESS,
    COMPLETED
  };

namespace WaveProgressStatusMapper
{
AWS_MGN_API WaveProgressStatus GetWaveProgressStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForWaveProgressStatus(WaveProgressStatus value);
} // namespace WaveProgressStatusMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
