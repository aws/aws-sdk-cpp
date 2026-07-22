/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/RedshiftEndpointProvider.h>
#include <aws/redshift/internal/RedshiftEndpointRules.h>

namespace Aws {
namespace Redshift {
namespace Endpoint {
RedshiftEndpointProvider::RedshiftEndpointProvider()
    : RedshiftDefaultEpProviderBase(Aws::Redshift::RedshiftEndpointRules::GetRulesBlob(),
                                    Aws::Redshift::RedshiftEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Redshift
}  // namespace Aws
