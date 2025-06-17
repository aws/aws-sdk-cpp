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
  enum class ConnectorAuthStatus
  {
    NOT_SET,
    ACTIVE,
    FAILED
  };

namespace ConnectorAuthStatusMapper
{
AWS_SECURITYHUB_API ConnectorAuthStatus GetConnectorAuthStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForConnectorAuthStatus(ConnectorAuthStatus value);
} // namespace ConnectorAuthStatusMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
