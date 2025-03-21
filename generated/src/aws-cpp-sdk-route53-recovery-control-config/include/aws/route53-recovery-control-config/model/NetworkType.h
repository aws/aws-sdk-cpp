/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{
  enum class NetworkType
  {
    NOT_SET,
    IPV4,
    DUALSTACK
  };

namespace NetworkTypeMapper
{
AWS_ROUTE53RECOVERYCONTROLCONFIG_API NetworkType GetNetworkTypeForName(const Aws::String& name);

AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::String GetNameForNetworkType(NetworkType value);
} // namespace NetworkTypeMapper
} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
