/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-account/PartnerCentralAccountClientConfiguration.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

namespace Aws {
namespace PartnerCentralAccount {
namespace Endpoint {
using PartnerCentralAccountClientConfiguration = Aws::PartnerCentralAccount::PartnerCentralAccountClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PartnerCentralAccountClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PARTNERCENTRALACCOUNT_API PartnerCentralAccountBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~PartnerCentralAccountBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const PartnerCentralAccountClientConfiguration& config);
  virtual void SetFromClientConfiguration(const PartnerCentralAccountClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const PartnerCentralAccountClientConfiguration& config);
};

/**
 * The type for the PartnerCentralAccount Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PartnerCentralAccountEndpointProviderBase =
    EndpointProviderBase<PartnerCentralAccountClientConfiguration, PartnerCentralAccountBuiltInParameters,
                         PartnerCentralAccountClientContextParameters>;

using PartnerCentralAccountDefaultEpProviderBase =
    BDDEndpointProvider<PartnerCentralAccountClientConfiguration, PartnerCentralAccountBuiltInParameters,
                        PartnerCentralAccountClientContextParameters>;

}  // namespace Endpoint
}  // namespace PartnerCentralAccount

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PARTNERCENTRALACCOUNT_EXTERN template class AWS_PARTNERCENTRALACCOUNT_API
    Aws::Endpoint::EndpointProviderBase<PartnerCentralAccount::Endpoint::PartnerCentralAccountClientConfiguration,
                                        PartnerCentralAccount::Endpoint::PartnerCentralAccountBuiltInParameters,
                                        PartnerCentralAccount::Endpoint::PartnerCentralAccountClientContextParameters>;

AWS_PARTNERCENTRALACCOUNT_EXTERN template class AWS_PARTNERCENTRALACCOUNT_API
    Aws::Endpoint::BDDEndpointProvider<PartnerCentralAccount::Endpoint::PartnerCentralAccountClientConfiguration,
                                       PartnerCentralAccount::Endpoint::PartnerCentralAccountBuiltInParameters,
                                       PartnerCentralAccount::Endpoint::PartnerCentralAccountClientContextParameters>;
}  // namespace Endpoint

namespace PartnerCentralAccount {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PARTNERCENTRALACCOUNT_API PartnerCentralAccountEndpointProvider : public PartnerCentralAccountDefaultEpProviderBase {
 public:
  using PartnerCentralAccountResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PartnerCentralAccountEndpointProvider();

  ~PartnerCentralAccountEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PartnerCentralAccount
}  // namespace Aws
