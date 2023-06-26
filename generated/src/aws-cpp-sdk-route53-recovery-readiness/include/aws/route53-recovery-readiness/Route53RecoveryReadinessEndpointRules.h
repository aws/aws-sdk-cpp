/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>

namespace Aws
{
namespace Route53RecoveryReadiness
{
class Route53RecoveryReadinessEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace Route53RecoveryReadiness
} // namespace Aws
