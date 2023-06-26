/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{
  enum class TargetType
  {
    NOT_SET,
    TLS_SNI,
    HTTP_HOST
  };

namespace TargetTypeMapper
{
AWS_NETWORKFIREWALL_API TargetType GetTargetTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForTargetType(TargetType value);
} // namespace TargetTypeMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
