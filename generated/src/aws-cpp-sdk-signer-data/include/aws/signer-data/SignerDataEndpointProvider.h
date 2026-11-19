/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signer-data/SignerDataClientConfiguration.h>
#include <aws/signer-data/SignerData_EXPORTS.h>

namespace Aws {
namespace SignerData {
namespace Endpoint {
using SignerDataClientConfiguration = Aws::SignerData::SignerDataClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SignerDataClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SIGNERDATA_API SignerDataBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SignerDataBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SignerDataClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SignerDataClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SignerDataClientConfiguration& config);
};

/**
 * The type for the SignerData Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SignerDataEndpointProviderBase =
    EndpointProviderBase<SignerDataClientConfiguration, SignerDataBuiltInParameters, SignerDataClientContextParameters>;

using SignerDataDefaultEpProviderBase =
    BDDEndpointProvider<SignerDataClientConfiguration, SignerDataBuiltInParameters, SignerDataClientContextParameters>;

}  // namespace Endpoint
}  // namespace SignerData

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SIGNERDATA_EXTERN template class AWS_SIGNERDATA_API Aws::Endpoint::EndpointProviderBase<
    SignerData::Endpoint::SignerDataClientConfiguration, SignerData::Endpoint::SignerDataBuiltInParameters,
    SignerData::Endpoint::SignerDataClientContextParameters>;

AWS_SIGNERDATA_EXTERN template class AWS_SIGNERDATA_API Aws::Endpoint::BDDEndpointProvider<
    SignerData::Endpoint::SignerDataClientConfiguration, SignerData::Endpoint::SignerDataBuiltInParameters,
    SignerData::Endpoint::SignerDataClientContextParameters>;
}  // namespace Endpoint

namespace SignerData {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SIGNERDATA_API SignerDataEndpointProvider : public SignerDataDefaultEpProviderBase {
 public:
  using SignerDataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SignerDataEndpointProvider();

  ~SignerDataEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SignerData
}  // namespace Aws
