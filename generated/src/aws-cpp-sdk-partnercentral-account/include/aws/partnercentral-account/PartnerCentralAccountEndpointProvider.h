/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-account/PartnerCentralAccountEndpointRules.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

namespace Aws {
namespace PartnerCentralAccount {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using PartnerCentralAccountClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PartnerCentralAccountClientConfiguration = Aws::Client::GenericClientConfiguration;
using PartnerCentralAccountBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PartnerCentralAccount Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PartnerCentralAccountEndpointProviderBase =
    EndpointProviderBase<PartnerCentralAccountClientConfiguration, PartnerCentralAccountBuiltInParameters,
                         PartnerCentralAccountClientContextParameters>;

using PartnerCentralAccountDefaultEpProviderBase =
    DefaultEndpointProvider<PartnerCentralAccountClientConfiguration, PartnerCentralAccountBuiltInParameters,
                            PartnerCentralAccountClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PARTNERCENTRALACCOUNT_API PartnerCentralAccountEndpointProvider : public PartnerCentralAccountDefaultEpProviderBase {
 public:
  using PartnerCentralAccountResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  PartnerCentralAccountEndpointProvider()
      : PartnerCentralAccountDefaultEpProviderBase(Aws::PartnerCentralAccount::PartnerCentralAccountEndpointRules::GetRulesBlob(),
                                                   Aws::PartnerCentralAccount::PartnerCentralAccountEndpointRules::RulesBlobSize) {}

  ~PartnerCentralAccountEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace PartnerCentralAccount
}  // namespace Aws
