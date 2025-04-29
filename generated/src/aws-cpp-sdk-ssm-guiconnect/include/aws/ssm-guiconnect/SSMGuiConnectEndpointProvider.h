/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-guiconnect/SSMGuiConnect_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ssm-guiconnect/SSMGuiConnectEndpointRules.h>


namespace Aws
{
namespace SSMGuiConnect
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using SSMGuiConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

using SSMGuiConnectClientConfiguration = Aws::Client::GenericClientConfiguration;
using SSMGuiConnectBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the SSMGuiConnect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SSMGuiConnectEndpointProviderBase =
    EndpointProviderBase<SSMGuiConnectClientConfiguration, SSMGuiConnectBuiltInParameters, SSMGuiConnectClientContextParameters>;

using SSMGuiConnectDefaultEpProviderBase =
    DefaultEndpointProvider<SSMGuiConnectClientConfiguration, SSMGuiConnectBuiltInParameters, SSMGuiConnectClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_SSMGUICONNECT_API SSMGuiConnectEndpointProvider : public SSMGuiConnectDefaultEpProviderBase
{
public:
    using SSMGuiConnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    SSMGuiConnectEndpointProvider()
      : SSMGuiConnectDefaultEpProviderBase(Aws::SSMGuiConnect::SSMGuiConnectEndpointRules::GetRulesBlob(), Aws::SSMGuiConnect::SSMGuiConnectEndpointRules::RulesBlobSize)
    {}

    ~SSMGuiConnectEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace SSMGuiConnect
} // namespace Aws
