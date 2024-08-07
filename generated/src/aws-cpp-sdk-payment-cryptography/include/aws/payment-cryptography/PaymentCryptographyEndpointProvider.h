﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/payment-cryptography/PaymentCryptographyEndpointRules.h>


namespace Aws
{
namespace PaymentCryptography
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PaymentCryptographyClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PaymentCryptographyClientConfiguration = Aws::Client::GenericClientConfiguration;
using PaymentCryptographyBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PaymentCryptography Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PaymentCryptographyEndpointProviderBase =
    EndpointProviderBase<PaymentCryptographyClientConfiguration, PaymentCryptographyBuiltInParameters, PaymentCryptographyClientContextParameters>;

using PaymentCryptographyDefaultEpProviderBase =
    DefaultEndpointProvider<PaymentCryptographyClientConfiguration, PaymentCryptographyBuiltInParameters, PaymentCryptographyClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PAYMENTCRYPTOGRAPHY_API PaymentCryptographyEndpointProvider : public PaymentCryptographyDefaultEpProviderBase
{
public:
    using PaymentCryptographyResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PaymentCryptographyEndpointProvider()
      : PaymentCryptographyDefaultEpProviderBase(Aws::PaymentCryptography::PaymentCryptographyEndpointRules::GetRulesBlob(), Aws::PaymentCryptography::PaymentCryptographyEndpointRules::RulesBlobSize)
    {}

    ~PaymentCryptographyEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace PaymentCryptography
} // namespace Aws
