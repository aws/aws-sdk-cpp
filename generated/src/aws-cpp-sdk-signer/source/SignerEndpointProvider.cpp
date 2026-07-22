/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/SignerEndpointProvider.h>
#include <aws/signer/internal/SignerEndpointRules.h>

namespace Aws {
namespace signer {
namespace Endpoint {
SignerEndpointProvider::SignerEndpointProvider()
    : SignerDefaultEpProviderBase(Aws::signer::SignerEndpointRules::GetRulesBlob(), Aws::signer::SignerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace signer
}  // namespace Aws
