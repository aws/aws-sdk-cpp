/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer-data/SignerDataEndpointProvider.h>
#include <aws/signer-data/internal/SignerDataEndpointRules.h>

namespace Aws {
namespace SignerData {
namespace Endpoint {
SignerDataEndpointProvider::SignerDataEndpointProvider()
    : SignerDataDefaultEpProviderBase(Aws::SignerData::SignerDataEndpointRules::GetRulesBlob(),
                                      Aws::SignerData::SignerDataEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace SignerData
}  // namespace Aws
