/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/OdbEndpointProvider.h>
#include <aws/odb/internal/OdbEndpointRules.h>

namespace Aws {
namespace odb {
namespace Endpoint {
OdbEndpointProvider::OdbEndpointProvider()
    : OdbDefaultEpProviderBase(Aws::odb::OdbEndpointRules::GetRulesBlob(), Aws::odb::OdbEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace odb
}  // namespace Aws
