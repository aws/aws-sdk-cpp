/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>

namespace Aws
{
namespace Route53RecoveryControlConfig
{
class Route53RecoveryControlConfigEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace Route53RecoveryControlConfig
} // namespace Aws
