/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{
  enum class BackupStatus
  {
    NOT_SET,
    IN_PROGRESS,
    OK,
    FAILED,
    DELETING
  };

namespace BackupStatusMapper
{
AWS_OPSWORKSCM_API BackupStatus GetBackupStatusForName(const Aws::String& name);

AWS_OPSWORKSCM_API Aws::String GetNameForBackupStatus(BackupStatus value);
} // namespace BackupStatusMapper
} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
