/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/RedshiftServerlessEndpointProvider.h>
#include <aws/redshift-serverless/internal/RedshiftServerlessEndpointRules.h>

namespace Aws {
namespace RedshiftServerless {
namespace Endpoint {
RedshiftServerlessEndpointProvider::RedshiftServerlessEndpointProvider()
    : RedshiftServerlessDefaultEpProviderBase(Aws::RedshiftServerless::RedshiftServerlessEndpointRules::GetRulesBlob(),
                                              Aws::RedshiftServerless::RedshiftServerlessEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace RedshiftServerless
}  // namespace Aws
