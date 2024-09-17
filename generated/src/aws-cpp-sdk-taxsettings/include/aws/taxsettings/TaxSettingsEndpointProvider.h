/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/taxsettings/TaxSettingsEndpointRules.h>


namespace Aws
{
namespace TaxSettings
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using TaxSettingsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using TaxSettingsClientConfiguration = Aws::Client::GenericClientConfiguration;
using TaxSettingsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the TaxSettings Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using TaxSettingsEndpointProviderBase =
    EndpointProviderBase<TaxSettingsClientConfiguration, TaxSettingsBuiltInParameters, TaxSettingsClientContextParameters>;

using TaxSettingsDefaultEpProviderBase =
    DefaultEndpointProvider<TaxSettingsClientConfiguration, TaxSettingsBuiltInParameters, TaxSettingsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_TAXSETTINGS_API TaxSettingsEndpointProvider : public TaxSettingsDefaultEpProviderBase
{
public:
    using TaxSettingsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    TaxSettingsEndpointProvider()
      : TaxSettingsDefaultEpProviderBase(Aws::TaxSettings::TaxSettingsEndpointRules::GetRulesBlob(), Aws::TaxSettings::TaxSettingsEndpointRules::RulesBlobSize)
    {}

    ~TaxSettingsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace TaxSettings
} // namespace Aws
