/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>

namespace Aws {
namespace ManagedBlockchainQuery {
namespace Model {
enum class ResourceType { NOT_SET, collection };

namespace ResourceTypeMapper {
AWS_MANAGEDBLOCKCHAINQUERY_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace ManagedBlockchainQuery
}  // namespace Aws
