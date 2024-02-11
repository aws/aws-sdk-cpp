/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{
  enum class MaintenanceStatus
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    COMPLETED,
    FAILED,
    TIMED_OUT
  };

namespace MaintenanceStatusMapper
{
AWS_OPENSEARCHSERVICE_API MaintenanceStatus GetMaintenanceStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForMaintenanceStatus(MaintenanceStatus value);
} // namespace MaintenanceStatusMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
