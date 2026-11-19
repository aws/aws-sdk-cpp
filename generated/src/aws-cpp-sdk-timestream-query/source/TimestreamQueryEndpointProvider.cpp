/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/TimestreamQueryEndpointProvider.h>
#include <aws/timestream-query/internal/TimestreamQueryEndpointRules.h>

namespace Aws {
#ifndef AWS_TIMESTREAMQUERY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<TimestreamQuery::Endpoint::TimestreamQueryClientConfiguration,
                                                   TimestreamQuery::Endpoint::TimestreamQueryBuiltInParameters,
                                                   TimestreamQuery::Endpoint::TimestreamQueryClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<TimestreamQuery::Endpoint::TimestreamQueryClientConfiguration,
                                                  TimestreamQuery::Endpoint::TimestreamQueryBuiltInParameters,
                                                  TimestreamQuery::Endpoint::TimestreamQueryClientContextParameters>;
}  // namespace Endpoint
#endif

namespace TimestreamQuery {
namespace Endpoint {
TimestreamQueryEndpointProvider::TimestreamQueryEndpointProvider()
    : TimestreamQueryDefaultEpProviderBase(Aws::TimestreamQuery::TimestreamQueryEndpointRules::GetRulesBlob(),
                                           Aws::TimestreamQuery::TimestreamQueryEndpointRules::RulesBlobSize) {}

void TimestreamQueryBuiltInParameters::SetFromClientConfiguration(const TimestreamQueryClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const TimestreamQueryClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void TimestreamQueryBuiltInParameters::SetFromClientConfiguration(const TimestreamQueryClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const TimestreamQueryClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void TimestreamQueryBuiltInParameters::SetServiceSpecificParameters(const TimestreamQueryClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace TimestreamQuery
}  // namespace Aws
