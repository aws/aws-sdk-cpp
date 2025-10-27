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
enum class PackageType { NOT_SET, TXT_DICTIONARY, ZIP_PLUGIN, PACKAGE_LICENSE, PACKAGE_CONFIG };

namespace PackageTypeMapper {
AWS_OPENSEARCHSERVICE_API PackageType GetPackageTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForPackageType(PackageType value);
}  // namespace PackageTypeMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
