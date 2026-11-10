/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitectedClientConfiguration.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

namespace Aws {
namespace WellArchitected {
namespace Endpoint {
using WellArchitectedClientConfiguration = Aws::WellArchitected::WellArchitectedClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using WellArchitectedClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_WELLARCHITECTED_API WellArchitectedBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~WellArchitectedBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const WellArchitectedClientConfiguration& config);
  virtual void SetFromClientConfiguration(const WellArchitectedClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const WellArchitectedClientConfiguration& config);
};

/**
 * The type for the WellArchitected Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WellArchitectedEndpointProviderBase =
    EndpointProviderBase<WellArchitectedClientConfiguration, WellArchitectedBuiltInParameters, WellArchitectedClientContextParameters>;

using WellArchitectedDefaultEpProviderBase =
    BDDEndpointProvider<WellArchitectedClientConfiguration, WellArchitectedBuiltInParameters, WellArchitectedClientContextParameters>;

}  // namespace Endpoint
}  // namespace WellArchitected

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_WELLARCHITECTED_EXTERN template class AWS_WELLARCHITECTED_API Aws::Endpoint::EndpointProviderBase<
    WellArchitected::Endpoint::WellArchitectedClientConfiguration, WellArchitected::Endpoint::WellArchitectedBuiltInParameters,
    WellArchitected::Endpoint::WellArchitectedClientContextParameters>;

AWS_WELLARCHITECTED_EXTERN template class AWS_WELLARCHITECTED_API Aws::Endpoint::BDDEndpointProvider<
    WellArchitected::Endpoint::WellArchitectedClientConfiguration, WellArchitected::Endpoint::WellArchitectedBuiltInParameters,
    WellArchitected::Endpoint::WellArchitectedClientContextParameters>;
}  // namespace Endpoint

namespace WellArchitected {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_WELLARCHITECTED_API WellArchitectedEndpointProvider : public WellArchitectedDefaultEpProviderBase {
 public:
  using WellArchitectedResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  WellArchitectedEndpointProvider();

  ~WellArchitectedEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace WellArchitected
}  // namespace Aws
