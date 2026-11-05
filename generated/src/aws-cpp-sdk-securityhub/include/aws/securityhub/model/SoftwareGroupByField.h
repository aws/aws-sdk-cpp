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
enum class SoftwareGroupByField {
  NOT_SET,
  AccountId,
  PackageName,
  PackageVersion,
  PackageType,
  Region,
  ResourceRegion,
  ResourceType,
  ResourceId,
  ResourceProvider,
  ResourceOwnerAccountId,
  ResourceOwnerOrgId,
  ResourceCloudPartition
};

namespace SoftwareGroupByFieldMapper {
AWS_SECURITYHUB_API SoftwareGroupByField GetSoftwareGroupByFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForSoftwareGroupByField(SoftwareGroupByField value);
}  // namespace SoftwareGroupByFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
