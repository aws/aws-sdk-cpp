/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/WAFClientConfiguration.h>
#include <aws/waf/WAF_EXPORTS.h>

namespace Aws {
namespace WAF {
namespace Endpoint {
using WAFClientConfiguration = Aws::WAF::WAFClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using WAFClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_WAF_API WAFBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~WAFBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const WAFClientConfiguration& config);
  virtual void SetFromClientConfiguration(const WAFClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const WAFClientConfiguration& config);
};

/**
 * The type for the WAF Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WAFEndpointProviderBase = EndpointProviderBase<WAFClientConfiguration, WAFBuiltInParameters, WAFClientContextParameters>;

using WAFDefaultEpProviderBase = BDDEndpointProvider<WAFClientConfiguration, WAFBuiltInParameters, WAFClientContextParameters>;

}  // namespace Endpoint
}  // namespace WAF

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_WAF_EXTERN template class AWS_WAF_API Aws::Endpoint::EndpointProviderBase<
    WAF::Endpoint::WAFClientConfiguration, WAF::Endpoint::WAFBuiltInParameters, WAF::Endpoint::WAFClientContextParameters>;

AWS_WAF_EXTERN template class AWS_WAF_API Aws::Endpoint::BDDEndpointProvider<
    WAF::Endpoint::WAFClientConfiguration, WAF::Endpoint::WAFBuiltInParameters, WAF::Endpoint::WAFClientContextParameters>;
}  // namespace Endpoint

namespace WAF {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_WAF_API WAFEndpointProvider : public WAFDefaultEpProviderBase {
 public:
  using WAFResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  WAFEndpointProvider();

  ~WAFEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace WAF
}  // namespace Aws
