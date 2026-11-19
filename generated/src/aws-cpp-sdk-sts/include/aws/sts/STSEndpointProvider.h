/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sts/STSClientConfiguration.h>
#include <aws/sts/STS_EXPORTS.h>

namespace Aws {
namespace STS {
namespace Endpoint {
using STSClientConfiguration = Aws::STS::STSClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using STSClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_STS_API STSBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~STSBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const STSClientConfiguration& config);
  virtual void SetFromClientConfiguration(const STSClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const STSClientConfiguration& config);
};

/**
 * The type for the STS Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using STSEndpointProviderBase = EndpointProviderBase<STSClientConfiguration, STSBuiltInParameters, STSClientContextParameters>;

using STSDefaultEpProviderBase = BDDEndpointProvider<STSClientConfiguration, STSBuiltInParameters, STSClientContextParameters>;

}  // namespace Endpoint
}  // namespace STS

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_STS_EXTERN template class AWS_STS_API Aws::Endpoint::EndpointProviderBase<
    STS::Endpoint::STSClientConfiguration, STS::Endpoint::STSBuiltInParameters, STS::Endpoint::STSClientContextParameters>;

AWS_STS_EXTERN template class AWS_STS_API Aws::Endpoint::BDDEndpointProvider<
    STS::Endpoint::STSClientConfiguration, STS::Endpoint::STSBuiltInParameters, STS::Endpoint::STSClientContextParameters>;
}  // namespace Endpoint

namespace STS {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_STS_API STSEndpointProvider : public STSDefaultEpProviderBase {
 public:
  using STSResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  STSEndpointProvider();

  ~STSEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace STS
}  // namespace Aws
