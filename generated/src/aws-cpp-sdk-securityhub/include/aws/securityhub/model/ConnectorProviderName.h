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
  enum class ConnectorProviderName
  {
    NOT_SET,
    JIRA_CLOUD,
    SERVICENOW
  };

namespace ConnectorProviderNameMapper
{
AWS_SECURITYHUB_API ConnectorProviderName GetConnectorProviderNameForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForConnectorProviderName(ConnectorProviderName value);
} // namespace ConnectorProviderNameMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
