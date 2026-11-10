/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/swf/SWFClientConfiguration.h>
#include <aws/swf/SWF_EXPORTS.h>

namespace Aws {
namespace SWF {
namespace Endpoint {
using SWFClientConfiguration = Aws::SWF::SWFClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SWFClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SWF_API SWFBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SWFBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SWFClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SWFClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SWFClientConfiguration& config);
};

/**
 * The type for the SWF Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SWFEndpointProviderBase = EndpointProviderBase<SWFClientConfiguration, SWFBuiltInParameters, SWFClientContextParameters>;

using SWFDefaultEpProviderBase = BDDEndpointProvider<SWFClientConfiguration, SWFBuiltInParameters, SWFClientContextParameters>;

}  // namespace Endpoint
}  // namespace SWF

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SWF_EXTERN template class AWS_SWF_API Aws::Endpoint::EndpointProviderBase<
    SWF::Endpoint::SWFClientConfiguration, SWF::Endpoint::SWFBuiltInParameters, SWF::Endpoint::SWFClientContextParameters>;

AWS_SWF_EXTERN template class AWS_SWF_API Aws::Endpoint::BDDEndpointProvider<
    SWF::Endpoint::SWFClientConfiguration, SWF::Endpoint::SWFBuiltInParameters, SWF::Endpoint::SWFClientContextParameters>;
}  // namespace Endpoint

namespace SWF {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SWF_API SWFEndpointProvider : public SWFDefaultEpProviderBase {
 public:
  using SWFResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SWFEndpointProvider();

  ~SWFEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SWF
}  // namespace Aws
