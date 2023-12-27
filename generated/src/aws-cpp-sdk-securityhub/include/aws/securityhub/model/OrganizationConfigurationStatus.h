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
  enum class OrganizationConfigurationStatus
  {
    NOT_SET,
    PENDING,
    ENABLED,
    FAILED
  };

namespace OrganizationConfigurationStatusMapper
{
AWS_SECURITYHUB_API OrganizationConfigurationStatus GetOrganizationConfigurationStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForOrganizationConfigurationStatus(OrganizationConfigurationStatus value);
} // namespace OrganizationConfigurationStatusMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
