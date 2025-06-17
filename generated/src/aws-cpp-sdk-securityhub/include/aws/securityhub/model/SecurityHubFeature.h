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
  enum class SecurityHubFeature
  {
    NOT_SET,
    SecurityHub,
    SecurityHubV2
  };

namespace SecurityHubFeatureMapper
{
AWS_SECURITYHUB_API SecurityHubFeature GetSecurityHubFeatureForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForSecurityHubFeature(SecurityHubFeature value);
} // namespace SecurityHubFeatureMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
