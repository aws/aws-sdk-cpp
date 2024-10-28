/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{
  enum class HarvestJobStatus
  {
    NOT_SET,
    QUEUED,
    IN_PROGRESS,
    CANCELLED,
    COMPLETED,
    FAILED
  };

namespace HarvestJobStatusMapper
{
AWS_MEDIAPACKAGEV2_API HarvestJobStatus GetHarvestJobStatusForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForHarvestJobStatus(HarvestJobStatus value);
} // namespace HarvestJobStatusMapper
} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
