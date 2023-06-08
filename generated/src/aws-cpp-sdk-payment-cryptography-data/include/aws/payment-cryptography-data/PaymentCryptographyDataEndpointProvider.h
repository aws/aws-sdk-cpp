/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/payment-cryptography-data/PaymentCryptographyDataEndpointRules.h>


namespace Aws
{
namespace PaymentCryptographyData
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using PaymentCryptographyDataClientContextParameters = Aws::Endpoint::ClientContextParameters;

using PaymentCryptographyDataClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using PaymentCryptographyDataBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the PaymentCryptographyData Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using PaymentCryptographyDataEndpointProviderBase =
    EndpointProviderBase<PaymentCryptographyDataClientConfiguration, PaymentCryptographyDataBuiltInParameters, PaymentCryptographyDataClientContextParameters>;

using PaymentCryptographyDataDefaultEpProviderBase =
    DefaultEndpointProvider<PaymentCryptographyDataClientConfiguration, PaymentCryptographyDataBuiltInParameters, PaymentCryptographyDataClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PAYMENTCRYPTOGRAPHYDATA_API PaymentCryptographyDataEndpointProvider : public PaymentCryptographyDataDefaultEpProviderBase
{
public:
    using PaymentCryptographyDataResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    PaymentCryptographyDataEndpointProvider()
      : PaymentCryptographyDataDefaultEpProviderBase(Aws::PaymentCryptographyData::PaymentCryptographyDataEndpointRules::GetRulesBlob(), Aws::PaymentCryptographyData::PaymentCryptographyDataEndpointRules::RulesBlobSize)
    {}

    ~PaymentCryptographyDataEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace PaymentCryptographyData
} // namespace Aws
