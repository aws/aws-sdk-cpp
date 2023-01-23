/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{
  enum class LastSyncStatus
  {
    NOT_SET,
    SUCCEEDED,
    FAILED
  };

namespace LastSyncStatusMapper
{
AWS_SERVICECATALOG_API LastSyncStatus GetLastSyncStatusForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForLastSyncStatus(LastSyncStatus value);
} // namespace LastSyncStatusMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
