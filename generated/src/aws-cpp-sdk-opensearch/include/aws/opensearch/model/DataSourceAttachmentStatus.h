/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

namespace Aws {
namespace OpenSearchService {
namespace Model {
enum class DataSourceAttachmentStatus { NOT_SET, PENDING, ATTACHED, FAILED };

namespace DataSourceAttachmentStatusMapper {
AWS_OPENSEARCHSERVICE_API DataSourceAttachmentStatus GetDataSourceAttachmentStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForDataSourceAttachmentStatus(DataSourceAttachmentStatus value);
}  // namespace DataSourceAttachmentStatusMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
