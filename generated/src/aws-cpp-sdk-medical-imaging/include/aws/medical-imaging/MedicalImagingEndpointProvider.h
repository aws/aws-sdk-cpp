/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/medical-imaging/MedicalImagingEndpointRules.h>


namespace Aws
{
namespace MedicalImaging
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MedicalImagingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MedicalImagingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MedicalImagingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MedicalImaging Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MedicalImagingEndpointProviderBase =
    EndpointProviderBase<MedicalImagingClientConfiguration, MedicalImagingBuiltInParameters, MedicalImagingClientContextParameters>;

using MedicalImagingDefaultEpProviderBase =
    DefaultEndpointProvider<MedicalImagingClientConfiguration, MedicalImagingBuiltInParameters, MedicalImagingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MEDICALIMAGING_API MedicalImagingEndpointProvider : public MedicalImagingDefaultEpProviderBase
{
public:
    using MedicalImagingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MedicalImagingEndpointProvider()
      : MedicalImagingDefaultEpProviderBase(Aws::MedicalImaging::MedicalImagingEndpointRules::GetRulesBlob(), Aws::MedicalImaging::MedicalImagingEndpointRules::RulesBlobSize)
    {}

    ~MedicalImagingEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MedicalImaging
} // namespace Aws
