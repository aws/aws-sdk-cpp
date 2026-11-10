/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/PersonalizeClientConfiguration.h>
#include <aws/personalize/Personalize_EXPORTS.h>

namespace Aws {
namespace Personalize {
namespace Endpoint {
using PersonalizeClientConfiguration = Aws::Personalize::PersonalizeClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PersonalizeClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PERSONALIZE_API PersonalizeBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PersonalizeBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PersonalizeClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PersonalizeClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PersonalizeClientConfiguration& config);
};

/**
 * The type for the Personalize Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PersonalizeEndpointProviderBase =
    EndpointProviderBase<PersonalizeClientConfiguration, PersonalizeBuiltInParameters, PersonalizeClientContextParameters>;

using PersonalizeDefaultEpProviderBase =
    BDDEndpointProvider<PersonalizeClientConfiguration, PersonalizeBuiltInParameters, PersonalizeClientContextParameters>;

}  // namespace Endpoint
}  // namespace Personalize

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PERSONALIZE_EXTERN template class AWS_PERSONALIZE_API Aws::Endpoint::EndpointProviderBase<
    Personalize::Endpoint::PersonalizeClientConfiguration, Personalize::Endpoint::PersonalizeBuiltInParameters,
    Personalize::Endpoint::PersonalizeClientContextParameters>;

AWS_PERSONALIZE_EXTERN template class AWS_PERSONALIZE_API Aws::Endpoint::BDDEndpointProvider<
    Personalize::Endpoint::PersonalizeClientConfiguration, Personalize::Endpoint::PersonalizeBuiltInParameters,
    Personalize::Endpoint::PersonalizeClientContextParameters>;
}  // namespace Endpoint

namespace Personalize {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PERSONALIZE_API PersonalizeEndpointProvider : public PersonalizeDefaultEpProviderBase {
 public:
  using PersonalizeResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PersonalizeEndpointProvider();

  ~PersonalizeEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace Personalize
}  // namespace Aws
