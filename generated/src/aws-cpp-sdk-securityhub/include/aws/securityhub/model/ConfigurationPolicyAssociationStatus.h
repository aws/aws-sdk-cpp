/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class ConfigurationPolicyAssociationStatus
  {
    NOT_SET,
    PENDING,
    SUCCESS,
    FAILED
  };

namespace ConfigurationPolicyAssociationStatusMapper
{
AWS_SECURITYHUB_API ConfigurationPolicyAssociationStatus GetConfigurationPolicyAssociationStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForConfigurationPolicyAssociationStatus(ConfigurationPolicyAssociationStatus value);
} // namespace ConfigurationPolicyAssociationStatusMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
