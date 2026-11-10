/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/AgreementServiceClientConfiguration.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

namespace Aws {
namespace AgreementService {
namespace Endpoint {
using AgreementServiceClientConfiguration = Aws::AgreementService::AgreementServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AgreementServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_AGREEMENTSERVICE_API AgreementServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~AgreementServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const AgreementServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const AgreementServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const AgreementServiceClientConfiguration& config);
};

/**
 * The type for the AgreementService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AgreementServiceEndpointProviderBase =
    EndpointProviderBase<AgreementServiceClientConfiguration, AgreementServiceBuiltInParameters, AgreementServiceClientContextParameters>;

using AgreementServiceDefaultEpProviderBase =
    BDDEndpointProvider<AgreementServiceClientConfiguration, AgreementServiceBuiltInParameters, AgreementServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace AgreementService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_AGREEMENTSERVICE_EXTERN template class AWS_AGREEMENTSERVICE_API Aws::Endpoint::EndpointProviderBase<
    AgreementService::Endpoint::AgreementServiceClientConfiguration, AgreementService::Endpoint::AgreementServiceBuiltInParameters,
    AgreementService::Endpoint::AgreementServiceClientContextParameters>;

AWS_AGREEMENTSERVICE_EXTERN template class AWS_AGREEMENTSERVICE_API Aws::Endpoint::BDDEndpointProvider<
    AgreementService::Endpoint::AgreementServiceClientConfiguration, AgreementService::Endpoint::AgreementServiceBuiltInParameters,
    AgreementService::Endpoint::AgreementServiceClientContextParameters>;
}  // namespace Endpoint

namespace AgreementService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_AGREEMENTSERVICE_API AgreementServiceEndpointProvider : public AgreementServiceDefaultEpProviderBase {
 public:
  using AgreementServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AgreementServiceEndpointProvider();

  ~AgreementServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AgreementService
}  // namespace Aws
