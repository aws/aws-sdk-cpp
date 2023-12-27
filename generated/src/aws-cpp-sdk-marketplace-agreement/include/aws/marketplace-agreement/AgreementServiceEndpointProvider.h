/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/marketplace-agreement/AgreementServiceEndpointRules.h>


namespace Aws
{
namespace AgreementService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AgreementServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AgreementServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AgreementServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AgreementService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AgreementServiceEndpointProviderBase =
    EndpointProviderBase<AgreementServiceClientConfiguration, AgreementServiceBuiltInParameters, AgreementServiceClientContextParameters>;

using AgreementServiceDefaultEpProviderBase =
    DefaultEndpointProvider<AgreementServiceClientConfiguration, AgreementServiceBuiltInParameters, AgreementServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_AGREEMENTSERVICE_API AgreementServiceEndpointProvider : public AgreementServiceDefaultEpProviderBase
{
public:
    using AgreementServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AgreementServiceEndpointProvider()
      : AgreementServiceDefaultEpProviderBase(Aws::AgreementService::AgreementServiceEndpointRules::GetRulesBlob(), Aws::AgreementService::AgreementServiceEndpointRules::RulesBlobSize)
    {}

    ~AgreementServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AgreementService
} // namespace Aws
