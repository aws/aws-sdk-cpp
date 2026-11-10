/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/security-ir/SecurityIRClientConfiguration.h>
#include <aws/security-ir/SecurityIR_EXPORTS.h>

namespace Aws {
namespace SecurityIR {
namespace Endpoint {
using SecurityIRClientConfiguration = Aws::SecurityIR::SecurityIRClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SecurityIRClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SECURITYIR_API SecurityIRBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SecurityIRBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SecurityIRClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SecurityIRClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SecurityIRClientConfiguration& config);
};

/**
 * The type for the SecurityIR Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SecurityIREndpointProviderBase =
    EndpointProviderBase<SecurityIRClientConfiguration, SecurityIRBuiltInParameters, SecurityIRClientContextParameters>;

using SecurityIRDefaultEpProviderBase =
    BDDEndpointProvider<SecurityIRClientConfiguration, SecurityIRBuiltInParameters, SecurityIRClientContextParameters>;

}  // namespace Endpoint
}  // namespace SecurityIR

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SECURITYIR_EXTERN template class AWS_SECURITYIR_API Aws::Endpoint::EndpointProviderBase<
    SecurityIR::Endpoint::SecurityIRClientConfiguration, SecurityIR::Endpoint::SecurityIRBuiltInParameters,
    SecurityIR::Endpoint::SecurityIRClientContextParameters>;

AWS_SECURITYIR_EXTERN template class AWS_SECURITYIR_API Aws::Endpoint::BDDEndpointProvider<
    SecurityIR::Endpoint::SecurityIRClientConfiguration, SecurityIR::Endpoint::SecurityIRBuiltInParameters,
    SecurityIR::Endpoint::SecurityIRClientContextParameters>;
}  // namespace Endpoint

namespace SecurityIR {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SECURITYIR_API SecurityIREndpointProvider : public SecurityIRDefaultEpProviderBase {
 public:
  using SecurityIRResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SecurityIREndpointProvider();

  ~SecurityIREndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SecurityIR
}  // namespace Aws
