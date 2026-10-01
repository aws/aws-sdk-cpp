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
enum class RemediationStringField {
  NOT_SET,
  Resource_Type,
  Priority,
  Status,
  Resource_Id,
  Resource_ResourceOwnerAccountId,
  Resource_CloudProvider
};

namespace RemediationStringFieldMapper {
AWS_SECURITYHUB_API RemediationStringField GetRemediationStringFieldForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForRemediationStringField(RemediationStringField value);
}  // namespace RemediationStringFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
