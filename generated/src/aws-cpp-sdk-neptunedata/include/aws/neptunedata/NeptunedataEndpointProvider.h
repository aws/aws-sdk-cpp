/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptunedata/NeptunedataClientConfiguration.h>
#include <aws/neptunedata/Neptunedata_EXPORTS.h>

namespace Aws {
namespace neptunedata {
namespace Endpoint {
using NeptunedataClientConfiguration = Aws::neptunedata::NeptunedataClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using NeptunedataClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_NEPTUNEDATA_API NeptunedataBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~NeptunedataBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const NeptunedataClientConfiguration& config);
  virtual void SetFromClientConfiguration(const NeptunedataClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const NeptunedataClientConfiguration& config);
};

/**
 * The type for the neptunedata Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NeptunedataEndpointProviderBase =
    EndpointProviderBase<NeptunedataClientConfiguration, NeptunedataBuiltInParameters, NeptunedataClientContextParameters>;

using NeptunedataDefaultEpProviderBase =
    BDDEndpointProvider<NeptunedataClientConfiguration, NeptunedataBuiltInParameters, NeptunedataClientContextParameters>;

}  // namespace Endpoint
}  // namespace neptunedata

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_NEPTUNEDATA_EXTERN template class AWS_NEPTUNEDATA_API Aws::Endpoint::EndpointProviderBase<
    neptunedata::Endpoint::NeptunedataClientConfiguration, neptunedata::Endpoint::NeptunedataBuiltInParameters,
    neptunedata::Endpoint::NeptunedataClientContextParameters>;

AWS_NEPTUNEDATA_EXTERN template class AWS_NEPTUNEDATA_API Aws::Endpoint::BDDEndpointProvider<
    neptunedata::Endpoint::NeptunedataClientConfiguration, neptunedata::Endpoint::NeptunedataBuiltInParameters,
    neptunedata::Endpoint::NeptunedataClientContextParameters>;
}  // namespace Endpoint

namespace neptunedata {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_NEPTUNEDATA_API NeptunedataEndpointProvider : public NeptunedataDefaultEpProviderBase {
 public:
  using NeptunedataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  NeptunedataEndpointProvider();

  ~NeptunedataEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace neptunedata
}  // namespace Aws
