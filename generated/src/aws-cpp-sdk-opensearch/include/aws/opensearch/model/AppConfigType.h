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
  enum class AppConfigType
  {
    NOT_SET,
    opensearchDashboards_dashboardAdmin_users,
    opensearchDashboards_dashboardAdmin_groups
  };

namespace AppConfigTypeMapper
{
AWS_OPENSEARCHSERVICE_API AppConfigType GetAppConfigTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForAppConfigType(AppConfigType value);
} // namespace AppConfigTypeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
