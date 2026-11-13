/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/voice-id/VoiceIDClientConfiguration.h>
#include <aws/voice-id/VoiceID_EXPORTS.h>

namespace Aws {
namespace VoiceID {
namespace Endpoint {
using VoiceIDClientConfiguration = Aws::VoiceID::VoiceIDClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using VoiceIDClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_VOICEID_API VoiceIDBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~VoiceIDBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const VoiceIDClientConfiguration& config);
  virtual void SetFromClientConfiguration(const VoiceIDClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const VoiceIDClientConfiguration& config);
};

/**
 * The type for the VoiceID Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using VoiceIDEndpointProviderBase =
    EndpointProviderBase<VoiceIDClientConfiguration, VoiceIDBuiltInParameters, VoiceIDClientContextParameters>;

using VoiceIDDefaultEpProviderBase =
    BDDEndpointProvider<VoiceIDClientConfiguration, VoiceIDBuiltInParameters, VoiceIDClientContextParameters>;

}  // namespace Endpoint
}  // namespace VoiceID

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_VOICEID_EXTERN template class AWS_VOICEID_API
    Aws::Endpoint::EndpointProviderBase<VoiceID::Endpoint::VoiceIDClientConfiguration, VoiceID::Endpoint::VoiceIDBuiltInParameters,
                                        VoiceID::Endpoint::VoiceIDClientContextParameters>;

AWS_VOICEID_EXTERN template class AWS_VOICEID_API
    Aws::Endpoint::BDDEndpointProvider<VoiceID::Endpoint::VoiceIDClientConfiguration, VoiceID::Endpoint::VoiceIDBuiltInParameters,
                                       VoiceID::Endpoint::VoiceIDClientContextParameters>;
}  // namespace Endpoint

namespace VoiceID {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_VOICEID_API VoiceIDEndpointProvider : public VoiceIDDefaultEpProviderBase {
 public:
  using VoiceIDResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  VoiceIDEndpointProvider();

  ~VoiceIDEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace VoiceID
}  // namespace Aws
