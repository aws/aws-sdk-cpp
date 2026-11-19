/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nova-act/NovaActClientConfiguration.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

namespace Aws {
namespace NovaAct {
namespace Endpoint {
using NovaActClientConfiguration = Aws::NovaAct::NovaActClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using NovaActClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_NOVAACT_API NovaActBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~NovaActBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const NovaActClientConfiguration& config);
  virtual void SetFromClientConfiguration(const NovaActClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const NovaActClientConfiguration& config);
};

/**
 * The type for the NovaAct Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NovaActEndpointProviderBase =
    EndpointProviderBase<NovaActClientConfiguration, NovaActBuiltInParameters, NovaActClientContextParameters>;

using NovaActDefaultEpProviderBase =
    BDDEndpointProvider<NovaActClientConfiguration, NovaActBuiltInParameters, NovaActClientContextParameters>;

}  // namespace Endpoint
}  // namespace NovaAct

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_NOVAACT_EXTERN template class AWS_NOVAACT_API
    Aws::Endpoint::EndpointProviderBase<NovaAct::Endpoint::NovaActClientConfiguration, NovaAct::Endpoint::NovaActBuiltInParameters,
                                        NovaAct::Endpoint::NovaActClientContextParameters>;

AWS_NOVAACT_EXTERN template class AWS_NOVAACT_API
    Aws::Endpoint::BDDEndpointProvider<NovaAct::Endpoint::NovaActClientConfiguration, NovaAct::Endpoint::NovaActBuiltInParameters,
                                       NovaAct::Endpoint::NovaActClientContextParameters>;
}  // namespace Endpoint

namespace NovaAct {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_NOVAACT_API NovaActEndpointProvider : public NovaActDefaultEpProviderBase {
 public:
  using NovaActResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  NovaActEndpointProvider();

  ~NovaActEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace NovaAct
}  // namespace Aws
