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
  enum class ConnectorStatus
  {
    NOT_SET,
    CONNECTED,
    FAILED_TO_CONNECT,
    PENDING_CONFIGURATION,
    PENDING_AUTHORIZATION
  };

namespace ConnectorStatusMapper
{
AWS_SECURITYHUB_API ConnectorStatus GetConnectorStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForConnectorStatus(ConnectorStatus value);
} // namespace ConnectorStatusMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
