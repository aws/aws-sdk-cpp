/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Model {
enum class ResourceGroupByField {
  NOT_SET,
  AccountId,
  AccountName,
  Region,
  ResourceProvider,
  ResourceOwnerAccountId,
  ResourceOwnerOrgId,
  ResourceCloudPartition,
  ResourceRegion,
  ResourceCategory,
  ResourceType,
  ResourceName,
  FindingsSummary_FindingType
};

namespace ResourceGroupByFieldMapper {
AWS_SECURITYHUB_API ResourceGroupByField GetResourceGroupByFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForResourceGroupByField(ResourceGroupByField value);
}  // namespace ResourceGroupByFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
