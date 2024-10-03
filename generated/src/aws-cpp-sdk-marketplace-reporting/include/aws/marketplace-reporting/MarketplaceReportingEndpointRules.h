/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/marketplace-reporting/MarketplaceReporting_EXPORTS.h>

namespace Aws
{
namespace MarketplaceReporting
{
class MarketplaceReportingEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace MarketplaceReporting
} // namespace Aws
