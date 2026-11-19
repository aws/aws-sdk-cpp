/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntimeClientConfiguration.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntime_EXPORTS.h>

namespace Aws {
namespace SagemakerJobRuntime {
namespace Endpoint {
using SagemakerJobRuntimeClientConfiguration = Aws::SagemakerJobRuntime::SagemakerJobRuntimeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SagemakerJobRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SAGEMAKERJOBRUNTIME_API SagemakerJobRuntimeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SagemakerJobRuntimeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SagemakerJobRuntimeClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SagemakerJobRuntimeClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SagemakerJobRuntimeClientConfiguration& config);
};

/**
 * The type for the SagemakerJobRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SagemakerJobRuntimeEndpointProviderBase =
    EndpointProviderBase<SagemakerJobRuntimeClientConfiguration, SagemakerJobRuntimeBuiltInParameters,
                         SagemakerJobRuntimeClientContextParameters>;

using SagemakerJobRuntimeDefaultEpProviderBase =
    BDDEndpointProvider<SagemakerJobRuntimeClientConfiguration, SagemakerJobRuntimeBuiltInParameters,
                        SagemakerJobRuntimeClientContextParameters>;

}  // namespace Endpoint
}  // namespace SagemakerJobRuntime

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SAGEMAKERJOBRUNTIME_EXTERN template class AWS_SAGEMAKERJOBRUNTIME_API
    Aws::Endpoint::EndpointProviderBase<SagemakerJobRuntime::Endpoint::SagemakerJobRuntimeClientConfiguration,
                                        SagemakerJobRuntime::Endpoint::SagemakerJobRuntimeBuiltInParameters,
                                        SagemakerJobRuntime::Endpoint::SagemakerJobRuntimeClientContextParameters>;

AWS_SAGEMAKERJOBRUNTIME_EXTERN template class AWS_SAGEMAKERJOBRUNTIME_API
    Aws::Endpoint::BDDEndpointProvider<SagemakerJobRuntime::Endpoint::SagemakerJobRuntimeClientConfiguration,
                                       SagemakerJobRuntime::Endpoint::SagemakerJobRuntimeBuiltInParameters,
                                       SagemakerJobRuntime::Endpoint::SagemakerJobRuntimeClientContextParameters>;
}  // namespace Endpoint

namespace SagemakerJobRuntime {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKERJOBRUNTIME_API SagemakerJobRuntimeEndpointProvider : public SagemakerJobRuntimeDefaultEpProviderBase {
 public:
  using SagemakerJobRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SagemakerJobRuntimeEndpointProvider();

  ~SagemakerJobRuntimeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SagemakerJobRuntime
}  // namespace Aws
