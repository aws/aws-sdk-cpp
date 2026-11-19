/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3files/S3FilesEndpointProvider.h>
#include <aws/s3files/internal/S3FilesEndpointRules.h>

namespace Aws {
#ifndef AWS_S3FILES_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<S3Files::Endpoint::S3FilesClientConfiguration,
                                                   S3Files::Endpoint::S3FilesBuiltInParameters,
                                                   S3Files::Endpoint::S3FilesClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<S3Files::Endpoint::S3FilesClientConfiguration,
                                                  S3Files::Endpoint::S3FilesBuiltInParameters,
                                                  S3Files::Endpoint::S3FilesClientContextParameters>;
}  // namespace Endpoint
#endif

namespace S3Files {
namespace Endpoint {
S3FilesEndpointProvider::S3FilesEndpointProvider()
    : S3FilesDefaultEpProviderBase(Aws::S3Files::S3FilesEndpointRules::GetRulesBlob(), Aws::S3Files::S3FilesEndpointRules::RulesBlobSize) {}

void S3FilesBuiltInParameters::SetFromClientConfiguration(const S3FilesClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const S3FilesClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void S3FilesBuiltInParameters::SetFromClientConfiguration(const S3FilesClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const S3FilesClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void S3FilesBuiltInParameters::SetServiceSpecificParameters(const S3FilesClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace S3Files
}  // namespace Aws
