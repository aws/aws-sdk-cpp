/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/qapps/QAppsEndpointRules.h>


namespace Aws
{
namespace QApps
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using QAppsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using QAppsClientConfiguration = Aws::Client::GenericClientConfiguration;
using QAppsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the QApps Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using QAppsEndpointProviderBase =
    EndpointProviderBase<QAppsClientConfiguration, QAppsBuiltInParameters, QAppsClientContextParameters>;

using QAppsDefaultEpProviderBase =
    DefaultEndpointProvider<QAppsClientConfiguration, QAppsBuiltInParameters, QAppsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_QAPPS_API QAppsEndpointProvider : public QAppsDefaultEpProviderBase
{
public:
    using QAppsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    QAppsEndpointProvider()
      : QAppsDefaultEpProviderBase(Aws::QApps::QAppsEndpointRules::GetRulesBlob(), Aws::QApps::QAppsEndpointRules::RulesBlobSize)
    {}

    ~QAppsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace QApps
} // namespace Aws
