/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/secretsmanager/SecretsManagerEndpointRules.h>


namespace Aws
{
namespace SecretsManager
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SecretsManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SecretsManagerClientConfiguration = Aws::Client::GenericClientConfiguration;
using SecretsManagerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SecretsManager Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SecretsManagerEndpointProviderBase =
    EndpointProviderBase<SecretsManagerClientConfiguration, SecretsManagerBuiltInParameters, SecretsManagerClientContextParameters>;

using SecretsManagerDefaultEpProviderBase =
    DefaultEndpointProvider<SecretsManagerClientConfiguration, SecretsManagerBuiltInParameters, SecretsManagerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SECRETSMANAGER_API SecretsManagerEndpointProvider : public SecretsManagerDefaultEpProviderBase
{
public:
    using SecretsManagerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SecretsManagerEndpointProvider()
      : SecretsManagerDefaultEpProviderBase(Aws::SecretsManager::SecretsManagerEndpointRules::GetRulesBlob(), Aws::SecretsManager::SecretsManagerEndpointRules::RulesBlobSize)
    {}

    ~SecretsManagerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SecretsManager
} // namespace Aws
