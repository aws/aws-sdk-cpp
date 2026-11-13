/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/MgnClientConfiguration.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Endpoint {
using MgnClientConfiguration = Aws::mgn::MgnClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MgnClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MGN_API MgnBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MgnBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MgnClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MgnClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MgnClientConfiguration& config);
};

/**
 * The type for the mgn Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MgnEndpointProviderBase = EndpointProviderBase<MgnClientConfiguration, MgnBuiltInParameters, MgnClientContextParameters>;

using MgnDefaultEpProviderBase = BDDEndpointProvider<MgnClientConfiguration, MgnBuiltInParameters, MgnClientContextParameters>;

}  // namespace Endpoint
}  // namespace mgn

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MGN_EXTERN template class AWS_MGN_API Aws::Endpoint::EndpointProviderBase<
    mgn::Endpoint::MgnClientConfiguration, mgn::Endpoint::MgnBuiltInParameters, mgn::Endpoint::MgnClientContextParameters>;

AWS_MGN_EXTERN template class AWS_MGN_API Aws::Endpoint::BDDEndpointProvider<
    mgn::Endpoint::MgnClientConfiguration, mgn::Endpoint::MgnBuiltInParameters, mgn::Endpoint::MgnClientContextParameters>;
}  // namespace Endpoint

namespace mgn {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MGN_API MgnEndpointProvider : public MgnDefaultEpProviderBase {
 public:
  using MgnResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MgnEndpointProvider();

  ~MgnEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace mgn
}  // namespace Aws
