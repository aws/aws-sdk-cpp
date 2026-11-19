/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medical-imaging/MedicalImagingClientConfiguration.h>
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>

namespace Aws {
namespace MedicalImaging {
namespace Endpoint {
using MedicalImagingClientConfiguration = Aws::MedicalImaging::MedicalImagingClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MedicalImagingClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MEDICALIMAGING_API MedicalImagingBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MedicalImagingBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MedicalImagingClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MedicalImagingClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MedicalImagingClientConfiguration& config);
};

/**
 * The type for the MedicalImaging Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MedicalImagingEndpointProviderBase =
    EndpointProviderBase<MedicalImagingClientConfiguration, MedicalImagingBuiltInParameters, MedicalImagingClientContextParameters>;

using MedicalImagingDefaultEpProviderBase =
    BDDEndpointProvider<MedicalImagingClientConfiguration, MedicalImagingBuiltInParameters, MedicalImagingClientContextParameters>;

}  // namespace Endpoint
}  // namespace MedicalImaging

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MEDICALIMAGING_EXTERN template class AWS_MEDICALIMAGING_API Aws::Endpoint::EndpointProviderBase<
    MedicalImaging::Endpoint::MedicalImagingClientConfiguration, MedicalImaging::Endpoint::MedicalImagingBuiltInParameters,
    MedicalImaging::Endpoint::MedicalImagingClientContextParameters>;

AWS_MEDICALIMAGING_EXTERN template class AWS_MEDICALIMAGING_API Aws::Endpoint::BDDEndpointProvider<
    MedicalImaging::Endpoint::MedicalImagingClientConfiguration, MedicalImaging::Endpoint::MedicalImagingBuiltInParameters,
    MedicalImaging::Endpoint::MedicalImagingClientContextParameters>;
}  // namespace Endpoint

namespace MedicalImaging {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MEDICALIMAGING_API MedicalImagingEndpointProvider : public MedicalImagingDefaultEpProviderBase {
 public:
  using MedicalImagingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MedicalImagingEndpointProvider();

  ~MedicalImagingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MedicalImaging
}  // namespace Aws
