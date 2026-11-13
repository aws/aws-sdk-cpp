/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3outposts/S3OutpostsEndpointProvider.h>
#include <aws/s3outposts/internal/S3OutpostsEndpointRules.h>

namespace Aws {
#ifndef AWS_S3OUTPOSTS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<S3Outposts::Endpoint::S3OutpostsClientConfiguration,
                                                   S3Outposts::Endpoint::S3OutpostsBuiltInParameters,
                                                   S3Outposts::Endpoint::S3OutpostsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<S3Outposts::Endpoint::S3OutpostsClientConfiguration,
                                                  S3Outposts::Endpoint::S3OutpostsBuiltInParameters,
                                                  S3Outposts::Endpoint::S3OutpostsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace S3Outposts {
namespace Endpoint {
S3OutpostsEndpointProvider::S3OutpostsEndpointProvider()
    : S3OutpostsDefaultEpProviderBase(Aws::S3Outposts::S3OutpostsEndpointRules::GetRulesBlob(),
                                      Aws::S3Outposts::S3OutpostsEndpointRules::RulesBlobSize) {}

void S3OutpostsBuiltInParameters::SetFromClientConfiguration(const S3OutpostsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const S3OutpostsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void S3OutpostsBuiltInParameters::SetFromClientConfiguration(const S3OutpostsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const S3OutpostsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void S3OutpostsBuiltInParameters::SetServiceSpecificParameters(const S3OutpostsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace S3Outposts
}  // namespace Aws
