/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-data/RedshiftDataAPIServiceClientConfiguration.h>
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>

namespace Aws {
namespace RedshiftDataAPIService {
namespace Endpoint {
using RedshiftDataAPIServiceClientConfiguration = Aws::RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RedshiftDataAPIServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_REDSHIFTDATAAPISERVICE_API RedshiftDataAPIServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~RedshiftDataAPIServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const RedshiftDataAPIServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const RedshiftDataAPIServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const RedshiftDataAPIServiceClientConfiguration& config);
};

/**
 * The type for the RedshiftDataAPIService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RedshiftDataAPIServiceEndpointProviderBase =
    EndpointProviderBase<RedshiftDataAPIServiceClientConfiguration, RedshiftDataAPIServiceBuiltInParameters,
                         RedshiftDataAPIServiceClientContextParameters>;

using RedshiftDataAPIServiceDefaultEpProviderBase =
    BDDEndpointProvider<RedshiftDataAPIServiceClientConfiguration, RedshiftDataAPIServiceBuiltInParameters,
                        RedshiftDataAPIServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace RedshiftDataAPIService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_REDSHIFTDATAAPISERVICE_EXTERN template class AWS_REDSHIFTDATAAPISERVICE_API
    Aws::Endpoint::EndpointProviderBase<RedshiftDataAPIService::Endpoint::RedshiftDataAPIServiceClientConfiguration,
                                        RedshiftDataAPIService::Endpoint::RedshiftDataAPIServiceBuiltInParameters,
                                        RedshiftDataAPIService::Endpoint::RedshiftDataAPIServiceClientContextParameters>;

AWS_REDSHIFTDATAAPISERVICE_EXTERN template class AWS_REDSHIFTDATAAPISERVICE_API
    Aws::Endpoint::BDDEndpointProvider<RedshiftDataAPIService::Endpoint::RedshiftDataAPIServiceClientConfiguration,
                                       RedshiftDataAPIService::Endpoint::RedshiftDataAPIServiceBuiltInParameters,
                                       RedshiftDataAPIService::Endpoint::RedshiftDataAPIServiceClientContextParameters>;
}  // namespace Endpoint

namespace RedshiftDataAPIService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_REDSHIFTDATAAPISERVICE_API RedshiftDataAPIServiceEndpointProvider : public RedshiftDataAPIServiceDefaultEpProviderBase {
 public:
  using RedshiftDataAPIServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RedshiftDataAPIServiceEndpointProvider();

  ~RedshiftDataAPIServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RedshiftDataAPIService
}  // namespace Aws
