/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class ConnectionStatus
  {
    NOT_SET,
    connected,
    notconnected
  };

namespace ConnectionStatusMapper
{
AWS_SSM_API ConnectionStatus GetConnectionStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForConnectionStatus(ConnectionStatus value);
} // namespace ConnectionStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
