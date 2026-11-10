/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/TranscribeServiceClientConfiguration.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>

namespace Aws {
namespace TranscribeService {
namespace Endpoint {
using TranscribeServiceClientConfiguration = Aws::TranscribeService::TranscribeServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using TranscribeServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_TRANSCRIBESERVICE_API TranscribeServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~TranscribeServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const TranscribeServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const TranscribeServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const TranscribeServiceClientConfiguration& config);
};

/**
 * The type for the TranscribeService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TranscribeServiceEndpointProviderBase = EndpointProviderBase<TranscribeServiceClientConfiguration, TranscribeServiceBuiltInParameters,
                                                                   TranscribeServiceClientContextParameters>;

using TranscribeServiceDefaultEpProviderBase =
    BDDEndpointProvider<TranscribeServiceClientConfiguration, TranscribeServiceBuiltInParameters, TranscribeServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace TranscribeService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_TRANSCRIBESERVICE_EXTERN template class AWS_TRANSCRIBESERVICE_API Aws::Endpoint::EndpointProviderBase<
    TranscribeService::Endpoint::TranscribeServiceClientConfiguration, TranscribeService::Endpoint::TranscribeServiceBuiltInParameters,
    TranscribeService::Endpoint::TranscribeServiceClientContextParameters>;

AWS_TRANSCRIBESERVICE_EXTERN template class AWS_TRANSCRIBESERVICE_API Aws::Endpoint::BDDEndpointProvider<
    TranscribeService::Endpoint::TranscribeServiceClientConfiguration, TranscribeService::Endpoint::TranscribeServiceBuiltInParameters,
    TranscribeService::Endpoint::TranscribeServiceClientContextParameters>;
}  // namespace Endpoint

namespace TranscribeService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_TRANSCRIBESERVICE_API TranscribeServiceEndpointProvider : public TranscribeServiceDefaultEpProviderBase {
 public:
  using TranscribeServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  TranscribeServiceEndpointProvider();

  ~TranscribeServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace TranscribeService
}  // namespace Aws
