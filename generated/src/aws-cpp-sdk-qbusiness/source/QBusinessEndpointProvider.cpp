/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/QBusinessEndpointProvider.h>
#include <aws/qbusiness/internal/QBusinessEndpointRules.h>

namespace Aws {
namespace QBusiness {
namespace Endpoint {
QBusinessEndpointProvider::QBusinessEndpointProvider()
    : QBusinessDefaultEpProviderBase(Aws::QBusiness::QBusinessEndpointRules::GetRulesBlob(),
                                     Aws::QBusiness::QBusinessEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace QBusiness
}  // namespace Aws
