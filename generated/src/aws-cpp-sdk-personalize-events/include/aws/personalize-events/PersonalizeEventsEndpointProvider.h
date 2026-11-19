/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize-events/PersonalizeEventsClientConfiguration.h>
#include <aws/personalize-events/PersonalizeEvents_EXPORTS.h>

namespace Aws {
namespace PersonalizeEvents {
namespace Endpoint {
using PersonalizeEventsClientConfiguration = Aws::PersonalizeEvents::PersonalizeEventsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PersonalizeEventsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PERSONALIZEEVENTS_API PersonalizeEventsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PersonalizeEventsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PersonalizeEventsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PersonalizeEventsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PersonalizeEventsClientConfiguration& config);
};

/**
 * The type for the PersonalizeEvents Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PersonalizeEventsEndpointProviderBase = EndpointProviderBase<PersonalizeEventsClientConfiguration, PersonalizeEventsBuiltInParameters,
                                                                   PersonalizeEventsClientContextParameters>;

using PersonalizeEventsDefaultEpProviderBase =
    BDDEndpointProvider<PersonalizeEventsClientConfiguration, PersonalizeEventsBuiltInParameters, PersonalizeEventsClientContextParameters>;

}  // namespace Endpoint
}  // namespace PersonalizeEvents

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PERSONALIZEEVENTS_EXTERN template class AWS_PERSONALIZEEVENTS_API Aws::Endpoint::EndpointProviderBase<
    PersonalizeEvents::Endpoint::PersonalizeEventsClientConfiguration, PersonalizeEvents::Endpoint::PersonalizeEventsBuiltInParameters,
    PersonalizeEvents::Endpoint::PersonalizeEventsClientContextParameters>;

AWS_PERSONALIZEEVENTS_EXTERN template class AWS_PERSONALIZEEVENTS_API Aws::Endpoint::BDDEndpointProvider<
    PersonalizeEvents::Endpoint::PersonalizeEventsClientConfiguration, PersonalizeEvents::Endpoint::PersonalizeEventsBuiltInParameters,
    PersonalizeEvents::Endpoint::PersonalizeEventsClientContextParameters>;
}  // namespace Endpoint

namespace PersonalizeEvents {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PERSONALIZEEVENTS_API PersonalizeEventsEndpointProvider : public PersonalizeEventsDefaultEpProviderBase {
 public:
  using PersonalizeEventsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PersonalizeEventsEndpointProvider();

  ~PersonalizeEventsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PersonalizeEvents
}  // namespace Aws
