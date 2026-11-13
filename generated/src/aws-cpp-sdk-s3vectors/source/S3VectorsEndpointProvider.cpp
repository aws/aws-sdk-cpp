/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3vectors/S3VectorsEndpointProvider.h>
#include <aws/s3vectors/internal/S3VectorsEndpointRules.h>

namespace Aws {
#ifndef AWS_S3VECTORS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<S3Vectors::Endpoint::S3VectorsClientConfiguration,
                                                   S3Vectors::Endpoint::S3VectorsBuiltInParameters,
                                                   S3Vectors::Endpoint::S3VectorsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<S3Vectors::Endpoint::S3VectorsClientConfiguration,
                                                  S3Vectors::Endpoint::S3VectorsBuiltInParameters,
                                                  S3Vectors::Endpoint::S3VectorsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace S3Vectors {
namespace Endpoint {
S3VectorsEndpointProvider::S3VectorsEndpointProvider()
    : S3VectorsDefaultEpProviderBase(Aws::S3Vectors::S3VectorsEndpointRules::GetRulesBlob(),
                                     Aws::S3Vectors::S3VectorsEndpointRules::RulesBlobSize) {}

void S3VectorsBuiltInParameters::SetFromClientConfiguration(const S3VectorsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const S3VectorsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void S3VectorsBuiltInParameters::SetFromClientConfiguration(const S3VectorsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const S3VectorsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void S3VectorsBuiltInParameters::SetServiceSpecificParameters(const S3VectorsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace S3Vectors
}  // namespace Aws
