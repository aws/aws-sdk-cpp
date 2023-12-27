/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/qconnect/QConnectEndpointRules.h>


namespace Aws
{
namespace QConnect
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using QConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;

using QConnectClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using QConnectBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the QConnect Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using QConnectEndpointProviderBase =
    EndpointProviderBase<QConnectClientConfiguration, QConnectBuiltInParameters, QConnectClientContextParameters>;

using QConnectDefaultEpProviderBase =
    DefaultEndpointProvider<QConnectClientConfiguration, QConnectBuiltInParameters, QConnectClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_QCONNECT_API QConnectEndpointProvider : public QConnectDefaultEpProviderBase
{
public:
    using QConnectResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    QConnectEndpointProvider()
      : QConnectDefaultEpProviderBase(Aws::QConnect::QConnectEndpointRules::GetRulesBlob(), Aws::QConnect::QConnectEndpointRules::RulesBlobSize)
    {}

    ~QConnectEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace QConnect
} // namespace Aws
