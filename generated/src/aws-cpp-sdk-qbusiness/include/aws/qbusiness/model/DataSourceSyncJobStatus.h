/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class DataSourceSyncJobStatus { NOT_SET, FAILED, SUCCEEDED, SYNCING, INCOMPLETE, STOPPING, ABORTED, SYNCING_INDEXING };

namespace DataSourceSyncJobStatusMapper {
AWS_QBUSINESS_API DataSourceSyncJobStatus GetDataSourceSyncJobStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForDataSourceSyncJobStatus(DataSourceSyncJobStatus value);
}  // namespace DataSourceSyncJobStatusMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
