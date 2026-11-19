/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/SSMContactsClientConfiguration.h>
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>

namespace Aws {
namespace SSMContacts {
namespace Endpoint {
using SSMContactsClientConfiguration = Aws::SSMContacts::SSMContactsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SSMContactsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SSMCONTACTS_API SSMContactsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SSMContactsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SSMContactsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SSMContactsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SSMContactsClientConfiguration& config);
};

/**
 * The type for the SSMContacts Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSMContactsEndpointProviderBase =
    EndpointProviderBase<SSMContactsClientConfiguration, SSMContactsBuiltInParameters, SSMContactsClientContextParameters>;

using SSMContactsDefaultEpProviderBase =
    BDDEndpointProvider<SSMContactsClientConfiguration, SSMContactsBuiltInParameters, SSMContactsClientContextParameters>;

}  // namespace Endpoint
}  // namespace SSMContacts

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SSMCONTACTS_EXTERN template class AWS_SSMCONTACTS_API Aws::Endpoint::EndpointProviderBase<
    SSMContacts::Endpoint::SSMContactsClientConfiguration, SSMContacts::Endpoint::SSMContactsBuiltInParameters,
    SSMContacts::Endpoint::SSMContactsClientContextParameters>;

AWS_SSMCONTACTS_EXTERN template class AWS_SSMCONTACTS_API Aws::Endpoint::BDDEndpointProvider<
    SSMContacts::Endpoint::SSMContactsClientConfiguration, SSMContacts::Endpoint::SSMContactsBuiltInParameters,
    SSMContacts::Endpoint::SSMContactsClientContextParameters>;
}  // namespace Endpoint

namespace SSMContacts {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SSMCONTACTS_API SSMContactsEndpointProvider : public SSMContactsDefaultEpProviderBase {
 public:
  using SSMContactsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SSMContactsEndpointProvider();

  ~SSMContactsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SSMContacts
}  // namespace Aws
