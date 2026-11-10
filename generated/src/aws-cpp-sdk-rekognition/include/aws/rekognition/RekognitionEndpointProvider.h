/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/RekognitionClientConfiguration.h>
#include <aws/rekognition/Rekognition_EXPORTS.h>

namespace Aws {
namespace Rekognition {
namespace Endpoint {
using RekognitionClientConfiguration = Aws::Rekognition::RekognitionClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RekognitionClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_REKOGNITION_API RekognitionBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~RekognitionBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const RekognitionClientConfiguration& config);
  virtual void SetFromClientConfiguration(const RekognitionClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const RekognitionClientConfiguration& config);
};

/**
 * The type for the Rekognition Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RekognitionEndpointProviderBase =
    EndpointProviderBase<RekognitionClientConfiguration, RekognitionBuiltInParameters, RekognitionClientContextParameters>;

using RekognitionDefaultEpProviderBase =
    BDDEndpointProvider<RekognitionClientConfiguration, RekognitionBuiltInParameters, RekognitionClientContextParameters>;

}  // namespace Endpoint
}  // namespace Rekognition

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_REKOGNITION_EXTERN template class AWS_REKOGNITION_API Aws::Endpoint::EndpointProviderBase<
    Rekognition::Endpoint::RekognitionClientConfiguration, Rekognition::Endpoint::RekognitionBuiltInParameters,
    Rekognition::Endpoint::RekognitionClientContextParameters>;

AWS_REKOGNITION_EXTERN template class AWS_REKOGNITION_API Aws::Endpoint::BDDEndpointProvider<
    Rekognition::Endpoint::RekognitionClientConfiguration, Rekognition::Endpoint::RekognitionBuiltInParameters,
    Rekognition::Endpoint::RekognitionClientContextParameters>;
}  // namespace Endpoint

namespace Rekognition {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_REKOGNITION_API RekognitionEndpointProvider : public RekognitionDefaultEpProviderBase {
 public:
  using RekognitionResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RekognitionEndpointProvider();

  ~RekognitionEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Rekognition
}  // namespace Aws
