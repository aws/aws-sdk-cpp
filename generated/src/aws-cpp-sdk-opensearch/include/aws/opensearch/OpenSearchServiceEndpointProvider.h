/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/OpenSearchServiceClientConfiguration.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

namespace Aws {
namespace OpenSearchService {
namespace Endpoint {
using OpenSearchServiceClientConfiguration = Aws::OpenSearchService::OpenSearchServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using OpenSearchServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_OPENSEARCHSERVICE_API OpenSearchServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~OpenSearchServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const OpenSearchServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const OpenSearchServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const OpenSearchServiceClientConfiguration& config);
};

/**
 * The type for the OpenSearchService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OpenSearchServiceEndpointProviderBase = EndpointProviderBase<OpenSearchServiceClientConfiguration, OpenSearchServiceBuiltInParameters,
                                                                   OpenSearchServiceClientContextParameters>;

using OpenSearchServiceDefaultEpProviderBase =
    BDDEndpointProvider<OpenSearchServiceClientConfiguration, OpenSearchServiceBuiltInParameters, OpenSearchServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace OpenSearchService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_OPENSEARCHSERVICE_EXTERN template class AWS_OPENSEARCHSERVICE_API Aws::Endpoint::EndpointProviderBase<
    OpenSearchService::Endpoint::OpenSearchServiceClientConfiguration, OpenSearchService::Endpoint::OpenSearchServiceBuiltInParameters,
    OpenSearchService::Endpoint::OpenSearchServiceClientContextParameters>;

AWS_OPENSEARCHSERVICE_EXTERN template class AWS_OPENSEARCHSERVICE_API Aws::Endpoint::BDDEndpointProvider<
    OpenSearchService::Endpoint::OpenSearchServiceClientConfiguration, OpenSearchService::Endpoint::OpenSearchServiceBuiltInParameters,
    OpenSearchService::Endpoint::OpenSearchServiceClientContextParameters>;
}  // namespace Endpoint

namespace OpenSearchService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_OPENSEARCHSERVICE_API OpenSearchServiceEndpointProvider : public OpenSearchServiceDefaultEpProviderBase {
 public:
  using OpenSearchServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  OpenSearchServiceEndpointProvider();

  ~OpenSearchServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace OpenSearchService
}  // namespace Aws
