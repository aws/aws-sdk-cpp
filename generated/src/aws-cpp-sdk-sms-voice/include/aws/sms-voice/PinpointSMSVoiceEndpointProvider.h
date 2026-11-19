/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms-voice/PinpointSMSVoiceClientConfiguration.h>
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>

namespace Aws {
namespace PinpointSMSVoice {
namespace Endpoint {
using PinpointSMSVoiceClientConfiguration = Aws::PinpointSMSVoice::PinpointSMSVoiceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PinpointSMSVoiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PINPOINTSMSVOICE_API PinpointSMSVoiceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PinpointSMSVoiceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PinpointSMSVoiceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PinpointSMSVoiceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PinpointSMSVoiceClientConfiguration& config);
};

/**
 * The type for the PinpointSMSVoice Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PinpointSMSVoiceEndpointProviderBase =
    EndpointProviderBase<PinpointSMSVoiceClientConfiguration, PinpointSMSVoiceBuiltInParameters, PinpointSMSVoiceClientContextParameters>;

using PinpointSMSVoiceDefaultEpProviderBase =
    BDDEndpointProvider<PinpointSMSVoiceClientConfiguration, PinpointSMSVoiceBuiltInParameters, PinpointSMSVoiceClientContextParameters>;

}  // namespace Endpoint
}  // namespace PinpointSMSVoice

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PINPOINTSMSVOICE_EXTERN template class AWS_PINPOINTSMSVOICE_API Aws::Endpoint::EndpointProviderBase<
    PinpointSMSVoice::Endpoint::PinpointSMSVoiceClientConfiguration, PinpointSMSVoice::Endpoint::PinpointSMSVoiceBuiltInParameters,
    PinpointSMSVoice::Endpoint::PinpointSMSVoiceClientContextParameters>;

AWS_PINPOINTSMSVOICE_EXTERN template class AWS_PINPOINTSMSVOICE_API Aws::Endpoint::BDDEndpointProvider<
    PinpointSMSVoice::Endpoint::PinpointSMSVoiceClientConfiguration, PinpointSMSVoice::Endpoint::PinpointSMSVoiceBuiltInParameters,
    PinpointSMSVoice::Endpoint::PinpointSMSVoiceClientContextParameters>;
}  // namespace Endpoint

namespace PinpointSMSVoice {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PINPOINTSMSVOICE_API PinpointSMSVoiceEndpointProvider : public PinpointSMSVoiceDefaultEpProviderBase {
 public:
  using PinpointSMSVoiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PinpointSMSVoiceEndpointProvider();

  ~PinpointSMSVoiceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PinpointSMSVoice
}  // namespace Aws
