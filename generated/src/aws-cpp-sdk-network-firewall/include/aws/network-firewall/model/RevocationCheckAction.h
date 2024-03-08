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
  enum class RevocationCheckAction
  {
    NOT_SET,
    PASS,
    DROP,
    REJECT
  };

namespace RevocationCheckActionMapper
{
AWS_NETWORKFIREWALL_API RevocationCheckAction GetRevocationCheckActionForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForRevocationCheckAction(RevocationCheckAction value);
} // namespace RevocationCheckActionMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
