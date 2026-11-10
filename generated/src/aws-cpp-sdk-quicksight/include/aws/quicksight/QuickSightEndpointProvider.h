/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightClientConfiguration.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Endpoint {
using QuickSightClientConfiguration = Aws::QuickSight::QuickSightClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using QuickSightClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_QUICKSIGHT_API QuickSightBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~QuickSightBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const QuickSightClientConfiguration& config);
  virtual void SetFromClientConfiguration(const QuickSightClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const QuickSightClientConfiguration& config);
};

/**
 * The type for the QuickSight Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using QuickSightEndpointProviderBase =
    EndpointProviderBase<QuickSightClientConfiguration, QuickSightBuiltInParameters, QuickSightClientContextParameters>;

using QuickSightDefaultEpProviderBase =
    BDDEndpointProvider<QuickSightClientConfiguration, QuickSightBuiltInParameters, QuickSightClientContextParameters>;

}  // namespace Endpoint
}  // namespace QuickSight

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_QUICKSIGHT_EXTERN template class AWS_QUICKSIGHT_API Aws::Endpoint::EndpointProviderBase<
    QuickSight::Endpoint::QuickSightClientConfiguration, QuickSight::Endpoint::QuickSightBuiltInParameters,
    QuickSight::Endpoint::QuickSightClientContextParameters>;

AWS_QUICKSIGHT_EXTERN template class AWS_QUICKSIGHT_API Aws::Endpoint::BDDEndpointProvider<
    QuickSight::Endpoint::QuickSightClientConfiguration, QuickSight::Endpoint::QuickSightBuiltInParameters,
    QuickSight::Endpoint::QuickSightClientContextParameters>;
}  // namespace Endpoint

namespace QuickSight {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_QUICKSIGHT_API QuickSightEndpointProvider : public QuickSightDefaultEpProviderBase {
 public:
  using QuickSightResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  QuickSightEndpointProvider();

  ~QuickSightEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace QuickSight
}  // namespace Aws
