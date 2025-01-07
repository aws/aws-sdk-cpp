﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{
  enum class ResourceSnapshotJobStatus
  {
    NOT_SET,
    Running,
    Stopped
  };

namespace ResourceSnapshotJobStatusMapper
{
AWS_PARTNERCENTRALSELLING_API ResourceSnapshotJobStatus GetResourceSnapshotJobStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForResourceSnapshotJobStatus(ResourceSnapshotJobStatus value);
} // namespace ResourceSnapshotJobStatusMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
