﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

namespace Aws {
namespace OpenSearchService {
namespace Model {
enum class PackageScopeOperationEnum { NOT_SET, ADD, OVERRIDE, REMOVE };

namespace PackageScopeOperationEnumMapper {
AWS_OPENSEARCHSERVICE_API PackageScopeOperationEnum GetPackageScopeOperationEnumForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForPackageScopeOperationEnum(PackageScopeOperationEnum value);
}  // namespace PackageScopeOperationEnumMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
