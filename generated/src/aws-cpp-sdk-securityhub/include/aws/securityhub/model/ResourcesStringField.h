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
enum class ResourcesStringField {
  NOT_SET,
  ResourceGuid,
  ResourceId,
  AccountId,
  Region,
  ResourceCategory,
  ResourceType,
  ResourceName,
  FindingsSummary_FindingType,
  FindingsSummary_ProductName
};

namespace ResourcesStringFieldMapper {
AWS_SECURITYHUB_API ResourcesStringField GetResourcesStringFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForResourcesStringField(ResourcesStringField value);
}  // namespace ResourcesStringFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
