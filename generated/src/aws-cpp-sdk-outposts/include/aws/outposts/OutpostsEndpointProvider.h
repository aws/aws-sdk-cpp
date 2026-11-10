/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/OutpostsClientConfiguration.h>
#include <aws/outposts/Outposts_EXPORTS.h>

namespace Aws {
namespace Outposts {
namespace Endpoint {
using OutpostsClientConfiguration = Aws::Outposts::OutpostsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using OutpostsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_OUTPOSTS_API OutpostsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~OutpostsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const OutpostsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const OutpostsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const OutpostsClientConfiguration& config);
};

/**
 * The type for the Outposts Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OutpostsEndpointProviderBase =
    EndpointProviderBase<OutpostsClientConfiguration, OutpostsBuiltInParameters, OutpostsClientContextParameters>;

using OutpostsDefaultEpProviderBase =
    BDDEndpointProvider<OutpostsClientConfiguration, OutpostsBuiltInParameters, OutpostsClientContextParameters>;

}  // namespace Endpoint
}  // namespace Outposts

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_OUTPOSTS_EXTERN template class AWS_OUTPOSTS_API
    Aws::Endpoint::EndpointProviderBase<Outposts::Endpoint::OutpostsClientConfiguration, Outposts::Endpoint::OutpostsBuiltInParameters,
                                        Outposts::Endpoint::OutpostsClientContextParameters>;

AWS_OUTPOSTS_EXTERN template class AWS_OUTPOSTS_API
    Aws::Endpoint::BDDEndpointProvider<Outposts::Endpoint::OutpostsClientConfiguration, Outposts::Endpoint::OutpostsBuiltInParameters,
                                       Outposts::Endpoint::OutpostsClientContextParameters>;
}  // namespace Endpoint

namespace Outposts {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_OUTPOSTS_API OutpostsEndpointProvider : public OutpostsDefaultEpProviderBase {
 public:
  using OutpostsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  OutpostsEndpointProvider();

  ~OutpostsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Outposts
}  // namespace Aws
