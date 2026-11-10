/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceClientConfiguration.h>
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>

namespace Aws {
namespace TranscribeStreamingService {
namespace Endpoint {
using TranscribeStreamingServiceClientConfiguration = Aws::TranscribeStreamingService::TranscribeStreamingServiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using TranscribeStreamingServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_TRANSCRIBESTREAMINGSERVICE_API TranscribeStreamingServiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~TranscribeStreamingServiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const TranscribeStreamingServiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const TranscribeStreamingServiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const TranscribeStreamingServiceClientConfiguration& config);
};

/**
 * The type for the TranscribeStreamingService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TranscribeStreamingServiceEndpointProviderBase =
    EndpointProviderBase<TranscribeStreamingServiceClientConfiguration, TranscribeStreamingServiceBuiltInParameters,
                         TranscribeStreamingServiceClientContextParameters>;

using TranscribeStreamingServiceDefaultEpProviderBase =
    BDDEndpointProvider<TranscribeStreamingServiceClientConfiguration, TranscribeStreamingServiceBuiltInParameters,
                        TranscribeStreamingServiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace TranscribeStreamingService

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_TRANSCRIBESTREAMINGSERVICE_EXTERN template class AWS_TRANSCRIBESTREAMINGSERVICE_API
    Aws::Endpoint::EndpointProviderBase<TranscribeStreamingService::Endpoint::TranscribeStreamingServiceClientConfiguration,
                                        TranscribeStreamingService::Endpoint::TranscribeStreamingServiceBuiltInParameters,
                                        TranscribeStreamingService::Endpoint::TranscribeStreamingServiceClientContextParameters>;

AWS_TRANSCRIBESTREAMINGSERVICE_EXTERN template class AWS_TRANSCRIBESTREAMINGSERVICE_API
    Aws::Endpoint::BDDEndpointProvider<TranscribeStreamingService::Endpoint::TranscribeStreamingServiceClientConfiguration,
                                       TranscribeStreamingService::Endpoint::TranscribeStreamingServiceBuiltInParameters,
                                       TranscribeStreamingService::Endpoint::TranscribeStreamingServiceClientContextParameters>;
}  // namespace Endpoint

namespace TranscribeStreamingService {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_TRANSCRIBESTREAMINGSERVICE_API TranscribeStreamingServiceEndpointProvider
    : public TranscribeStreamingServiceDefaultEpProviderBase {
 public:
  using TranscribeStreamingServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  TranscribeStreamingServiceEndpointProvider();

  ~TranscribeStreamingServiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace TranscribeStreamingService
}  // namespace Aws
