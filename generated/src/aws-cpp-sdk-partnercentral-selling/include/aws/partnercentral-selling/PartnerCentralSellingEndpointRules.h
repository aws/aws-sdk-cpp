/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

namespace Aws
{
namespace PartnerCentralSelling
{
class PartnerCentralSellingEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace PartnerCentralSelling
} // namespace Aws
