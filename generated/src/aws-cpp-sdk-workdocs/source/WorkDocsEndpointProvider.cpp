/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/WorkDocsEndpointProvider.h>
#include <aws/workdocs/internal/WorkDocsEndpointRules.h>

namespace Aws {
#ifndef AWS_WORKDOCS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<WorkDocs::Endpoint::WorkDocsClientConfiguration,
                                                   WorkDocs::Endpoint::WorkDocsBuiltInParameters,
                                                   WorkDocs::Endpoint::WorkDocsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<WorkDocs::Endpoint::WorkDocsClientConfiguration,
                                                  WorkDocs::Endpoint::WorkDocsBuiltInParameters,
                                                  WorkDocs::Endpoint::WorkDocsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace WorkDocs {
namespace Endpoint {
WorkDocsEndpointProvider::WorkDocsEndpointProvider()
    : WorkDocsDefaultEpProviderBase(Aws::WorkDocs::WorkDocsEndpointRules::GetRulesBlob(),
                                    Aws::WorkDocs::WorkDocsEndpointRules::RulesBlobSize) {}

void WorkDocsBuiltInParameters::SetFromClientConfiguration(const WorkDocsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const WorkDocsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void WorkDocsBuiltInParameters::SetFromClientConfiguration(const WorkDocsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const WorkDocsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void WorkDocsBuiltInParameters::SetServiceSpecificParameters(const WorkDocsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace WorkDocs
}  // namespace Aws
