/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/oam/OAMClientConfiguration.h>
#include <aws/oam/OAM_EXPORTS.h>

namespace Aws {
namespace OAM {
namespace Endpoint {
using OAMClientConfiguration = Aws::OAM::OAMClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using OAMClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_OAM_API OAMBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~OAMBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const OAMClientConfiguration& config);
  virtual void SetFromClientConfiguration(const OAMClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const OAMClientConfiguration& config);
};

/**
 * The type for the OAM Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OAMEndpointProviderBase = EndpointProviderBase<OAMClientConfiguration, OAMBuiltInParameters, OAMClientContextParameters>;

using OAMDefaultEpProviderBase = BDDEndpointProvider<OAMClientConfiguration, OAMBuiltInParameters, OAMClientContextParameters>;

}  // namespace Endpoint
}  // namespace OAM

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_OAM_EXTERN template class AWS_OAM_API Aws::Endpoint::EndpointProviderBase<
    OAM::Endpoint::OAMClientConfiguration, OAM::Endpoint::OAMBuiltInParameters, OAM::Endpoint::OAMClientContextParameters>;

AWS_OAM_EXTERN template class AWS_OAM_API Aws::Endpoint::BDDEndpointProvider<
    OAM::Endpoint::OAMClientConfiguration, OAM::Endpoint::OAMBuiltInParameters, OAM::Endpoint::OAMClientContextParameters>;
}  // namespace Endpoint

namespace OAM {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_OAM_API OAMEndpointProvider : public OAMDefaultEpProviderBase {
 public:
  using OAMResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  OAMEndpointProvider();

  ~OAMEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace OAM
}  // namespace Aws
