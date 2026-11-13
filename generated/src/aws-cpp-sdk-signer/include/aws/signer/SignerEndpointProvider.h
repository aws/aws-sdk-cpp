/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signer/SignerClientConfiguration.h>
#include <aws/signer/Signer_EXPORTS.h>

namespace Aws {
namespace signer {
namespace Endpoint {
using SignerClientConfiguration = Aws::signer::SignerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SignerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SIGNER_API SignerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SignerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SignerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SignerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SignerClientConfiguration& config);
};

/**
 * The type for the signer Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SignerEndpointProviderBase = EndpointProviderBase<SignerClientConfiguration, SignerBuiltInParameters, SignerClientContextParameters>;

using SignerDefaultEpProviderBase = BDDEndpointProvider<SignerClientConfiguration, SignerBuiltInParameters, SignerClientContextParameters>;

}  // namespace Endpoint
}  // namespace signer

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SIGNER_EXTERN template class AWS_SIGNER_API
    Aws::Endpoint::EndpointProviderBase<signer::Endpoint::SignerClientConfiguration, signer::Endpoint::SignerBuiltInParameters,
                                        signer::Endpoint::SignerClientContextParameters>;

AWS_SIGNER_EXTERN template class AWS_SIGNER_API
    Aws::Endpoint::BDDEndpointProvider<signer::Endpoint::SignerClientConfiguration, signer::Endpoint::SignerBuiltInParameters,
                                       signer::Endpoint::SignerClientContextParameters>;
}  // namespace Endpoint

namespace signer {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SIGNER_API SignerEndpointProvider : public SignerDefaultEpProviderBase {
 public:
  using SignerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SignerEndpointProvider();

  ~SignerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace signer
}  // namespace Aws
