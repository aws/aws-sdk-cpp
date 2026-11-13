/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rbin/RecycleBinClientConfiguration.h>
#include <aws/rbin/RecycleBin_EXPORTS.h>

namespace Aws {
namespace RecycleBin {
namespace Endpoint {
using RecycleBinClientConfiguration = Aws::RecycleBin::RecycleBinClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RecycleBinClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_RECYCLEBIN_API RecycleBinBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~RecycleBinBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const RecycleBinClientConfiguration& config);
  virtual void SetFromClientConfiguration(const RecycleBinClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const RecycleBinClientConfiguration& config);
};

/**
 * The type for the RecycleBin Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RecycleBinEndpointProviderBase =
    EndpointProviderBase<RecycleBinClientConfiguration, RecycleBinBuiltInParameters, RecycleBinClientContextParameters>;

using RecycleBinDefaultEpProviderBase =
    BDDEndpointProvider<RecycleBinClientConfiguration, RecycleBinBuiltInParameters, RecycleBinClientContextParameters>;

}  // namespace Endpoint
}  // namespace RecycleBin

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_RECYCLEBIN_EXTERN template class AWS_RECYCLEBIN_API Aws::Endpoint::EndpointProviderBase<
    RecycleBin::Endpoint::RecycleBinClientConfiguration, RecycleBin::Endpoint::RecycleBinBuiltInParameters,
    RecycleBin::Endpoint::RecycleBinClientContextParameters>;

AWS_RECYCLEBIN_EXTERN template class AWS_RECYCLEBIN_API Aws::Endpoint::BDDEndpointProvider<
    RecycleBin::Endpoint::RecycleBinClientConfiguration, RecycleBin::Endpoint::RecycleBinBuiltInParameters,
    RecycleBin::Endpoint::RecycleBinClientContextParameters>;
}  // namespace Endpoint

namespace RecycleBin {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_RECYCLEBIN_API RecycleBinEndpointProvider : public RecycleBinDefaultEpProviderBase {
 public:
  using RecycleBinResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RecycleBinEndpointProvider();

  ~RecycleBinEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RecycleBin
}  // namespace Aws
