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
  enum class OrganizationConfigurationConfigurationType
  {
    NOT_SET,
    CENTRAL,
    LOCAL
  };

namespace OrganizationConfigurationConfigurationTypeMapper
{
AWS_SECURITYHUB_API OrganizationConfigurationConfigurationType GetOrganizationConfigurationConfigurationTypeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForOrganizationConfigurationConfigurationType(OrganizationConfigurationConfigurationType value);
} // namespace OrganizationConfigurationConfigurationTypeMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
