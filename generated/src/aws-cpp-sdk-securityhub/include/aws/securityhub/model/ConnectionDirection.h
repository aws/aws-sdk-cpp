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
  enum class ConnectionDirection
  {
    NOT_SET,
    INBOUND,
    OUTBOUND
  };

namespace ConnectionDirectionMapper
{
AWS_SECURITYHUB_API ConnectionDirection GetConnectionDirectionForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForConnectionDirection(ConnectionDirection value);
} // namespace ConnectionDirectionMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
