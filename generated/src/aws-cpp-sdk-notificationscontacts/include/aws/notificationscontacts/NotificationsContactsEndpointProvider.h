/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notificationscontacts/NotificationsContactsClientConfiguration.h>
#include <aws/notificationscontacts/NotificationsContacts_EXPORTS.h>

namespace Aws {
namespace NotificationsContacts {
namespace Endpoint {
using NotificationsContactsClientConfiguration = Aws::NotificationsContacts::NotificationsContactsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using NotificationsContactsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_NOTIFICATIONSCONTACTS_API NotificationsContactsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~NotificationsContactsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const NotificationsContactsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const NotificationsContactsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const NotificationsContactsClientConfiguration& config);
};

/**
 * The type for the NotificationsContacts Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NotificationsContactsEndpointProviderBase =
    EndpointProviderBase<NotificationsContactsClientConfiguration, NotificationsContactsBuiltInParameters,
                         NotificationsContactsClientContextParameters>;

using NotificationsContactsDefaultEpProviderBase =
    BDDEndpointProvider<NotificationsContactsClientConfiguration, NotificationsContactsBuiltInParameters,
                        NotificationsContactsClientContextParameters>;

}  // namespace Endpoint
}  // namespace NotificationsContacts

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_NOTIFICATIONSCONTACTS_EXTERN template class AWS_NOTIFICATIONSCONTACTS_API
    Aws::Endpoint::EndpointProviderBase<NotificationsContacts::Endpoint::NotificationsContactsClientConfiguration,
                                        NotificationsContacts::Endpoint::NotificationsContactsBuiltInParameters,
                                        NotificationsContacts::Endpoint::NotificationsContactsClientContextParameters>;

AWS_NOTIFICATIONSCONTACTS_EXTERN template class AWS_NOTIFICATIONSCONTACTS_API
    Aws::Endpoint::BDDEndpointProvider<NotificationsContacts::Endpoint::NotificationsContactsClientConfiguration,
                                       NotificationsContacts::Endpoint::NotificationsContactsBuiltInParameters,
                                       NotificationsContacts::Endpoint::NotificationsContactsClientContextParameters>;
}  // namespace Endpoint

namespace NotificationsContacts {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_NOTIFICATIONSCONTACTS_API NotificationsContactsEndpointProvider : public NotificationsContactsDefaultEpProviderBase {
 public:
  using NotificationsContactsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  NotificationsContactsEndpointProvider();

  ~NotificationsContactsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace NotificationsContacts
}  // namespace Aws
