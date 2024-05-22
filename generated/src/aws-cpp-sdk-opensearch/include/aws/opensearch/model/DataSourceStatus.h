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
  enum class DataSourceStatus
  {
    NOT_SET,
    ACTIVE,
    DISABLED
  };

namespace DataSourceStatusMapper
{
AWS_OPENSEARCHSERVICE_API DataSourceStatus GetDataSourceStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForDataSourceStatus(DataSourceStatus value);
} // namespace DataSourceStatusMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
