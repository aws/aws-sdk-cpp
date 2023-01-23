/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

namespace Aws
{
namespace MarketplaceCatalog
{
class MarketplaceCatalogEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace MarketplaceCatalog
} // namespace Aws
