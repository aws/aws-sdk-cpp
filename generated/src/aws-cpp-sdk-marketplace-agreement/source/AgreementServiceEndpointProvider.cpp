/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/AgreementServiceEndpointProvider.h>
#include <aws/marketplace-agreement/internal/AgreementServiceEndpointRules.h>

namespace Aws {
namespace AgreementService {
namespace Endpoint {
AgreementServiceEndpointProvider::AgreementServiceEndpointProvider()
    : AgreementServiceDefaultEpProviderBase(Aws::AgreementService::AgreementServiceEndpointRules::GetRulesBlob(),
                                            Aws::AgreementService::AgreementServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AgreementService
}  // namespace Aws
