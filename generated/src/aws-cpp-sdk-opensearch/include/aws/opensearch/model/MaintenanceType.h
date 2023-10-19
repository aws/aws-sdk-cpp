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
  enum class MaintenanceType
  {
    NOT_SET,
    REBOOT_NODE,
    RESTART_SEARCH_PROCESS,
    RESTART_DASHBOARD
  };

namespace MaintenanceTypeMapper
{
AWS_OPENSEARCHSERVICE_API MaintenanceType GetMaintenanceTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForMaintenanceType(MaintenanceType value);
} // namespace MaintenanceTypeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
