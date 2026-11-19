/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-sap/SsmSapClientConfiguration.h>
#include <aws/ssm-sap/SsmSap_EXPORTS.h>

namespace Aws {
namespace SsmSap {
namespace Endpoint {
using SsmSapClientConfiguration = Aws::SsmSap::SsmSapClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SsmSapClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SSMSAP_API SsmSapBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SsmSapBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SsmSapClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SsmSapClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SsmSapClientConfiguration& config);
};

/**
 * The type for the SsmSap Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SsmSapEndpointProviderBase = EndpointProviderBase<SsmSapClientConfiguration, SsmSapBuiltInParameters, SsmSapClientContextParameters>;

using SsmSapDefaultEpProviderBase = BDDEndpointProvider<SsmSapClientConfiguration, SsmSapBuiltInParameters, SsmSapClientContextParameters>;

}  // namespace Endpoint
}  // namespace SsmSap

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SSMSAP_EXTERN template class AWS_SSMSAP_API
    Aws::Endpoint::EndpointProviderBase<SsmSap::Endpoint::SsmSapClientConfiguration, SsmSap::Endpoint::SsmSapBuiltInParameters,
                                        SsmSap::Endpoint::SsmSapClientContextParameters>;

AWS_SSMSAP_EXTERN template class AWS_SSMSAP_API
    Aws::Endpoint::BDDEndpointProvider<SsmSap::Endpoint::SsmSapClientConfiguration, SsmSap::Endpoint::SsmSapBuiltInParameters,
                                       SsmSap::Endpoint::SsmSapClientContextParameters>;
}  // namespace Endpoint

namespace SsmSap {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SSMSAP_API SsmSapEndpointProvider : public SsmSapDefaultEpProviderBase {
 public:
  using SsmSapResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SsmSapEndpointProvider();

  ~SsmSapEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SsmSap
}  // namespace Aws
