/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds-data/RDSDataServiceClientConfiguration.h>
#include <aws/rds-data/RDSDataService_EXPORTS.h>

namespace Aws {
namespace RDSDataService {
namespace Endpoint {
using RDSDataServiceClientConfiguration = Aws::RDSDataService::RDSDataServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RDSDataServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_RDSDATASERVICE_API RDSDataServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~RDSDataServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const RDSDataServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const RDSDataServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const RDSDataServiceClientConfiguration& config);
};

/**
 * The type for the RDSDataService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RDSDataServiceEndpointProviderBase =
    EndpointProviderBase<RDSDataServiceClientConfiguration, RDSDataServiceBuiltInParameters, RDSDataServiceClientContextParameters>;

using RDSDataServiceDefaultEpProviderBase =
    BDDEndpointProvider<RDSDataServiceClientConfiguration, RDSDataServiceBuiltInParameters, RDSDataServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace RDSDataService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_RDSDATASERVICE_EXTERN template class AWS_RDSDATASERVICE_API Aws::Endpoint::EndpointProviderBase<
    RDSDataService::Endpoint::RDSDataServiceClientConfiguration, RDSDataService::Endpoint::RDSDataServiceBuiltInParameters,
    RDSDataService::Endpoint::RDSDataServiceClientContextParameters>;

AWS_RDSDATASERVICE_EXTERN template class AWS_RDSDATASERVICE_API Aws::Endpoint::BDDEndpointProvider<
    RDSDataService::Endpoint::RDSDataServiceClientConfiguration, RDSDataService::Endpoint::RDSDataServiceBuiltInParameters,
    RDSDataService::Endpoint::RDSDataServiceClientContextParameters>;
}  // namespace Endpoint

namespace RDSDataService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_RDSDATASERVICE_API RDSDataServiceEndpointProvider : public RDSDataServiceDefaultEpProviderBase {
 public:
  using RDSDataServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RDSDataServiceEndpointProvider();

  ~RDSDataServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RDSDataService
}  // namespace Aws
