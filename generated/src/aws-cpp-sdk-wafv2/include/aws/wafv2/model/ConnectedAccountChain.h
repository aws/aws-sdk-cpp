/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

namespace Aws {
namespace WAFV2 {
namespace Model {
enum class ConnectedAccountChain { NOT_SET, BASE, SOLANA };

namespace ConnectedAccountChainMapper {
AWS_WAFV2_API ConnectedAccountChain GetConnectedAccountChainForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForConnectedAccountChain(ConnectedAccountChain value);
}  // namespace ConnectedAccountChainMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
