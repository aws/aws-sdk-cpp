/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/QConnectEndpointProvider.h>
#include <aws/qconnect/internal/QConnectEndpointRules.h>

namespace Aws {
namespace QConnect {
namespace Endpoint {
QConnectEndpointProvider::QConnectEndpointProvider()
    : QConnectDefaultEpProviderBase(Aws::QConnect::QConnectEndpointRules::GetRulesBlob(),
                                    Aws::QConnect::QConnectEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace QConnect
}  // namespace Aws
