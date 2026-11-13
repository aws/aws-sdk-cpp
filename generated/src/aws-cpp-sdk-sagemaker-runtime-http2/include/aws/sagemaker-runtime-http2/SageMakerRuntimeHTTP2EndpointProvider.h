/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2ClientConfiguration.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2_EXPORTS.h>

namespace Aws {
namespace SageMakerRuntimeHTTP2 {
namespace Endpoint {
using SageMakerRuntimeHTTP2ClientConfiguration = Aws::SageMakerRuntimeHTTP2::SageMakerRuntimeHTTP2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SageMakerRuntimeHTTP2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SAGEMAKERRUNTIMEHTTP2_API SageMakerRuntimeHTTP2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SageMakerRuntimeHTTP2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SageMakerRuntimeHTTP2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SageMakerRuntimeHTTP2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SageMakerRuntimeHTTP2ClientConfiguration& config);
};

/**
 * The type for the SageMakerRuntimeHTTP2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SageMakerRuntimeHTTP2EndpointProviderBase =
    EndpointProviderBase<SageMakerRuntimeHTTP2ClientConfiguration, SageMakerRuntimeHTTP2BuiltInParameters,
                         SageMakerRuntimeHTTP2ClientContextParameters>;

using SageMakerRuntimeHTTP2DefaultEpProviderBase =
    BDDEndpointProvider<SageMakerRuntimeHTTP2ClientConfiguration, SageMakerRuntimeHTTP2BuiltInParameters,
                        SageMakerRuntimeHTTP2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace SageMakerRuntimeHTTP2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SAGEMAKERRUNTIMEHTTP2_EXTERN template class AWS_SAGEMAKERRUNTIMEHTTP2_API
    Aws::Endpoint::EndpointProviderBase<SageMakerRuntimeHTTP2::Endpoint::SageMakerRuntimeHTTP2ClientConfiguration,
                                        SageMakerRuntimeHTTP2::Endpoint::SageMakerRuntimeHTTP2BuiltInParameters,
                                        SageMakerRuntimeHTTP2::Endpoint::SageMakerRuntimeHTTP2ClientContextParameters>;

AWS_SAGEMAKERRUNTIMEHTTP2_EXTERN template class AWS_SAGEMAKERRUNTIMEHTTP2_API
    Aws::Endpoint::BDDEndpointProvider<SageMakerRuntimeHTTP2::Endpoint::SageMakerRuntimeHTTP2ClientConfiguration,
                                       SageMakerRuntimeHTTP2::Endpoint::SageMakerRuntimeHTTP2BuiltInParameters,
                                       SageMakerRuntimeHTTP2::Endpoint::SageMakerRuntimeHTTP2ClientContextParameters>;
}  // namespace Endpoint

namespace SageMakerRuntimeHTTP2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKERRUNTIMEHTTP2_API SageMakerRuntimeHTTP2EndpointProvider : public SageMakerRuntimeHTTP2DefaultEpProviderBase {
 public:
  using SageMakerRuntimeHTTP2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SageMakerRuntimeHTTP2EndpointProvider();

  ~SageMakerRuntimeHTTP2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
