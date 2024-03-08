/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>

namespace Aws
{
namespace WorkSpacesThinClient
{
class WorkSpacesThinClientEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace WorkSpacesThinClient
} // namespace Aws
