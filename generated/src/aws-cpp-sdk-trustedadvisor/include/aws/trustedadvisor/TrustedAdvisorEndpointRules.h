/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>

namespace Aws
{
namespace TrustedAdvisor
{
class TrustedAdvisorEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace TrustedAdvisor
} // namespace Aws
