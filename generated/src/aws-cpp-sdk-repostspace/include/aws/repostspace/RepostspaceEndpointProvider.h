/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/repostspace/RepostspaceClientConfiguration.h>
#include <aws/repostspace/Repostspace_EXPORTS.h>

namespace Aws {
namespace repostspace {
namespace Endpoint {
using RepostspaceClientConfiguration = Aws::repostspace::RepostspaceClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RepostspaceClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_REPOSTSPACE_API RepostspaceBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~RepostspaceBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const RepostspaceClientConfiguration& config);
  virtual void SetFromClientConfiguration(const RepostspaceClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const RepostspaceClientConfiguration& config);
};

/**
 * The type for the repostspace Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RepostspaceEndpointProviderBase =
    EndpointProviderBase<RepostspaceClientConfiguration, RepostspaceBuiltInParameters, RepostspaceClientContextParameters>;

using RepostspaceDefaultEpProviderBase =
    BDDEndpointProvider<RepostspaceClientConfiguration, RepostspaceBuiltInParameters, RepostspaceClientContextParameters>;

}  // namespace Endpoint
}  // namespace repostspace

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_REPOSTSPACE_EXTERN template class AWS_REPOSTSPACE_API Aws::Endpoint::EndpointProviderBase<
    repostspace::Endpoint::RepostspaceClientConfiguration, repostspace::Endpoint::RepostspaceBuiltInParameters,
    repostspace::Endpoint::RepostspaceClientContextParameters>;

AWS_REPOSTSPACE_EXTERN template class AWS_REPOSTSPACE_API Aws::Endpoint::BDDEndpointProvider<
    repostspace::Endpoint::RepostspaceClientConfiguration, repostspace::Endpoint::RepostspaceBuiltInParameters,
    repostspace::Endpoint::RepostspaceClientContextParameters>;
}  // namespace Endpoint

namespace repostspace {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_REPOSTSPACE_API RepostspaceEndpointProvider : public RepostspaceDefaultEpProviderBase {
 public:
  using RepostspaceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RepostspaceEndpointProvider();

  ~RepostspaceEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace repostspace
}  // namespace Aws
