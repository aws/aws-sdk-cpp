/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize-runtime/PersonalizeRuntimeClientConfiguration.h>
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>

namespace Aws {
namespace PersonalizeRuntime {
namespace Endpoint {
using PersonalizeRuntimeClientConfiguration = Aws::PersonalizeRuntime::PersonalizeRuntimeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PersonalizeRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PERSONALIZERUNTIME_API PersonalizeRuntimeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PersonalizeRuntimeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PersonalizeRuntimeClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PersonalizeRuntimeClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PersonalizeRuntimeClientConfiguration& config);
};

/**
 * The type for the PersonalizeRuntime Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PersonalizeRuntimeEndpointProviderBase =
    EndpointProviderBase<PersonalizeRuntimeClientConfiguration, PersonalizeRuntimeBuiltInParameters,
                         PersonalizeRuntimeClientContextParameters>;

using PersonalizeRuntimeDefaultEpProviderBase =
    BDDEndpointProvider<PersonalizeRuntimeClientConfiguration, PersonalizeRuntimeBuiltInParameters,
                        PersonalizeRuntimeClientContextParameters>;

}  // namespace Endpoint
}  // namespace PersonalizeRuntime

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PERSONALIZERUNTIME_EXTERN template class AWS_PERSONALIZERUNTIME_API Aws::Endpoint::EndpointProviderBase<
    PersonalizeRuntime::Endpoint::PersonalizeRuntimeClientConfiguration, PersonalizeRuntime::Endpoint::PersonalizeRuntimeBuiltInParameters,
    PersonalizeRuntime::Endpoint::PersonalizeRuntimeClientContextParameters>;

AWS_PERSONALIZERUNTIME_EXTERN template class AWS_PERSONALIZERUNTIME_API Aws::Endpoint::BDDEndpointProvider<
    PersonalizeRuntime::Endpoint::PersonalizeRuntimeClientConfiguration, PersonalizeRuntime::Endpoint::PersonalizeRuntimeBuiltInParameters,
    PersonalizeRuntime::Endpoint::PersonalizeRuntimeClientContextParameters>;
}  // namespace Endpoint

namespace PersonalizeRuntime {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PERSONALIZERUNTIME_API PersonalizeRuntimeEndpointProvider : public PersonalizeRuntimeDefaultEpProviderBase {
 public:
  using PersonalizeRuntimeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PersonalizeRuntimeEndpointProvider();

  ~PersonalizeRuntimeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PersonalizeRuntime
}  // namespace Aws
