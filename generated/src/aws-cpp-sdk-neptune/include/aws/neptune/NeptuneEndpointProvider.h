/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/NeptuneClientConfiguration.h>
#include <aws/neptune/Neptune_EXPORTS.h>

namespace Aws {
namespace Neptune {
namespace Endpoint {
using NeptuneClientConfiguration = Aws::Neptune::NeptuneClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using NeptuneClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_NEPTUNE_API NeptuneBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~NeptuneBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const NeptuneClientConfiguration& config);
  virtual void SetFromClientConfiguration(const NeptuneClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const NeptuneClientConfiguration& config);
};

/**
 * The type for the Neptune Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NeptuneEndpointProviderBase =
    EndpointProviderBase<NeptuneClientConfiguration, NeptuneBuiltInParameters, NeptuneClientContextParameters>;

using NeptuneDefaultEpProviderBase =
    BDDEndpointProvider<NeptuneClientConfiguration, NeptuneBuiltInParameters, NeptuneClientContextParameters>;

}  // namespace Endpoint
}  // namespace Neptune

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_NEPTUNE_EXTERN template class AWS_NEPTUNE_API
    Aws::Endpoint::EndpointProviderBase<Neptune::Endpoint::NeptuneClientConfiguration, Neptune::Endpoint::NeptuneBuiltInParameters,
                                        Neptune::Endpoint::NeptuneClientContextParameters>;

AWS_NEPTUNE_EXTERN template class AWS_NEPTUNE_API
    Aws::Endpoint::BDDEndpointProvider<Neptune::Endpoint::NeptuneClientConfiguration, Neptune::Endpoint::NeptuneBuiltInParameters,
                                       Neptune::Endpoint::NeptuneClientContextParameters>;
}  // namespace Endpoint

namespace Neptune {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_NEPTUNE_API NeptuneEndpointProvider : public NeptuneDefaultEpProviderBase {
 public:
  using NeptuneResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  NeptuneEndpointProvider();

  ~NeptuneEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Neptune
}  // namespace Aws
