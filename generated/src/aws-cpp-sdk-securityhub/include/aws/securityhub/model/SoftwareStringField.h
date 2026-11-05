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
enum class SoftwareStringField {
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

namespace SoftwareStringFieldMapper {
AWS_SECURITYHUB_API SoftwareStringField GetSoftwareStringFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForSoftwareStringField(SoftwareStringField value);
}  // namespace SoftwareStringFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
