/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{
  enum class CacheReportFilterName
  {
    NOT_SET,
    UploadState,
    UploadFailureReason
  };

namespace CacheReportFilterNameMapper
{
AWS_STORAGEGATEWAY_API CacheReportFilterName GetCacheReportFilterNameForName(const Aws::String& name);

AWS_STORAGEGATEWAY_API Aws::String GetNameForCacheReportFilterName(CacheReportFilterName value);
} // namespace CacheReportFilterNameMapper
} // namespace Model
} // namespace StorageGateway
} // namespace Aws
