/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/workspaces-thin-client/WorkSpacesThinClientEndpointRules.h>


namespace Aws
{
namespace WorkSpacesThinClient
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using WorkSpacesThinClientClientContextParameters = Aws::Endpoint::ClientContextParameters;

using WorkSpacesThinClientClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using WorkSpacesThinClientBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the WorkSpacesThinClient Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WorkSpacesThinClientEndpointProviderBase =
    EndpointProviderBase<WorkSpacesThinClientClientConfiguration, WorkSpacesThinClientBuiltInParameters, WorkSpacesThinClientClientContextParameters>;

using WorkSpacesThinClientDefaultEpProviderBase =
    DefaultEndpointProvider<WorkSpacesThinClientClientConfiguration, WorkSpacesThinClientBuiltInParameters, WorkSpacesThinClientClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_WORKSPACESTHINCLIENT_API WorkSpacesThinClientEndpointProvider : public WorkSpacesThinClientDefaultEpProviderBase
{
public:
    using WorkSpacesThinClientResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    WorkSpacesThinClientEndpointProvider()
      : WorkSpacesThinClientDefaultEpProviderBase(Aws::WorkSpacesThinClient::WorkSpacesThinClientEndpointRules::GetRulesBlob(), Aws::WorkSpacesThinClient::WorkSpacesThinClientEndpointRules::RulesBlobSize)
    {}

    ~WorkSpacesThinClientEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace WorkSpacesThinClient
} // namespace Aws
