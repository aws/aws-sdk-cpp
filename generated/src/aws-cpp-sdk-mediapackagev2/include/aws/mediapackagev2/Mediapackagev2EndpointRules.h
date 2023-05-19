/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>

namespace Aws
{
namespace mediapackagev2
{
class Mediapackagev2EndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace mediapackagev2
} // namespace Aws
