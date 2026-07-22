/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-guiconnect/SSMGuiConnectEndpointProvider.h>
#include <aws/ssm-guiconnect/internal/SSMGuiConnectEndpointRules.h>

namespace Aws {
namespace SSMGuiConnect {
namespace Endpoint {
SSMGuiConnectEndpointProvider::SSMGuiConnectEndpointProvider()
    : SSMGuiConnectDefaultEpProviderBase(Aws::SSMGuiConnect::SSMGuiConnectEndpointRules::GetRulesBlob(),
                                         Aws::SSMGuiConnect::SSMGuiConnectEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SSMGuiConnect
}  // namespace Aws
