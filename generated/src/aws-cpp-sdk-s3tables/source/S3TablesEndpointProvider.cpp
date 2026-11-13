/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/S3TablesEndpointProvider.h>
#include <aws/s3tables/internal/S3TablesEndpointRules.h>

namespace Aws {
#ifndef AWS_S3TABLES_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<S3Tables::Endpoint::S3TablesClientConfiguration,
                                                   S3Tables::Endpoint::S3TablesBuiltInParameters,
                                                   S3Tables::Endpoint::S3TablesClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<S3Tables::Endpoint::S3TablesClientConfiguration,
                                                  S3Tables::Endpoint::S3TablesBuiltInParameters,
                                                  S3Tables::Endpoint::S3TablesClientContextParameters>;
}  // namespace Endpoint
#endif

namespace S3Tables {
namespace Endpoint {
S3TablesEndpointProvider::S3TablesEndpointProvider()
    : S3TablesDefaultEpProviderBase(Aws::S3Tables::S3TablesEndpointRules::GetRulesBlob(),
                                    Aws::S3Tables::S3TablesEndpointRules::RulesBlobSize) {}

void S3TablesBuiltInParameters::SetFromClientConfiguration(const S3TablesClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const S3TablesClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void S3TablesBuiltInParameters::SetFromClientConfiguration(const S3TablesClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const S3TablesClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void S3TablesBuiltInParameters::SetServiceSpecificParameters(const S3TablesClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace S3Tables
}  // namespace Aws
