/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class LastResourceDataSyncStatus
  {
    NOT_SET,
    Successful,
    Failed,
    InProgress
  };

namespace LastResourceDataSyncStatusMapper
{
AWS_SSM_API LastResourceDataSyncStatus GetLastResourceDataSyncStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForLastResourceDataSyncStatus(LastResourceDataSyncStatus value);
} // namespace LastResourceDataSyncStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
