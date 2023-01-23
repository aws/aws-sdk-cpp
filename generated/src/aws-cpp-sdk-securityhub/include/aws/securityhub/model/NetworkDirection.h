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
  enum class NetworkDirection
  {
    NOT_SET,
    IN,
    OUT
  };

namespace NetworkDirectionMapper
{
AWS_SECURITYHUB_API NetworkDirection GetNetworkDirectionForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForNetworkDirection(NetworkDirection value);
} // namespace NetworkDirectionMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
