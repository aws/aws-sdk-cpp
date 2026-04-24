/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/StorageGateway_EXPORTS.h>

namespace Aws {
namespace StorageGateway {
namespace Model {
enum class CacheReportStatus { NOT_SET, IN_PROGRESS, COMPLETED, CANCELED, FAILED, ERROR_ };

namespace CacheReportStatusMapper {
AWS_STORAGEGATEWAY_API CacheReportStatus GetCacheReportStatusForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForCacheReportStatus(CacheReportStatus value);
}  // namespace CacheReportStatusMapper
}  // namespace Model
}  // namespace StorageGateway
}  // namespace Aws
