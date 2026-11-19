/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune-graph/NeptuneGraphClientConfiguration.h>
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>

namespace Aws {
namespace NeptuneGraph {
namespace Endpoint {
using NeptuneGraphClientConfiguration = Aws::NeptuneGraph::NeptuneGraphClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using NeptuneGraphClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_NEPTUNEGRAPH_API NeptuneGraphBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~NeptuneGraphBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const NeptuneGraphClientConfiguration& config);
  virtual void SetFromClientConfiguration(const NeptuneGraphClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const NeptuneGraphClientConfiguration& config);
};

/**
 * The type for the NeptuneGraph Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NeptuneGraphEndpointProviderBase =
    EndpointProviderBase<NeptuneGraphClientConfiguration, NeptuneGraphBuiltInParameters, NeptuneGraphClientContextParameters>;

using NeptuneGraphDefaultEpProviderBase =
    BDDEndpointProvider<NeptuneGraphClientConfiguration, NeptuneGraphBuiltInParameters, NeptuneGraphClientContextParameters>;

}  // namespace Endpoint
}  // namespace NeptuneGraph

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_NEPTUNEGRAPH_EXTERN template class AWS_NEPTUNEGRAPH_API Aws::Endpoint::EndpointProviderBase<
    NeptuneGraph::Endpoint::NeptuneGraphClientConfiguration, NeptuneGraph::Endpoint::NeptuneGraphBuiltInParameters,
    NeptuneGraph::Endpoint::NeptuneGraphClientContextParameters>;

AWS_NEPTUNEGRAPH_EXTERN template class AWS_NEPTUNEGRAPH_API Aws::Endpoint::BDDEndpointProvider<
    NeptuneGraph::Endpoint::NeptuneGraphClientConfiguration, NeptuneGraph::Endpoint::NeptuneGraphBuiltInParameters,
    NeptuneGraph::Endpoint::NeptuneGraphClientContextParameters>;
}  // namespace Endpoint

namespace NeptuneGraph {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_NEPTUNEGRAPH_API NeptuneGraphEndpointProvider : public NeptuneGraphDefaultEpProviderBase {
 public:
  using NeptuneGraphResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  NeptuneGraphEndpointProvider();

  ~NeptuneGraphEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace NeptuneGraph
}  // namespace Aws
