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
enum class DescribePackagesFilterName { NOT_SET, PackageID, PackageName, PackageStatus, PackageType, EngineVersion, PackageOwner };

namespace DescribePackagesFilterNameMapper {
AWS_OPENSEARCHSERVICE_API DescribePackagesFilterName GetDescribePackagesFilterNameForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForDescribePackagesFilterName(DescribePackagesFilterName value);
}  // namespace DescribePackagesFilterNameMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
