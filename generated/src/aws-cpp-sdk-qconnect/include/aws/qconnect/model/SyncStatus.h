/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{
  enum class SyncStatus
  {
    NOT_SET,
    SYNC_FAILED,
    SYNCING_IN_PROGRESS,
    SYNC_SUCCESS,
    CREATE_IN_PROGRESS
  };

namespace SyncStatusMapper
{
AWS_QCONNECT_API SyncStatus GetSyncStatusForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForSyncStatus(SyncStatus value);
} // namespace SyncStatusMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
