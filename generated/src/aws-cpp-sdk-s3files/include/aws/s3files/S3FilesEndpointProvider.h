/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3files/S3FilesEndpointRules.h>
#include <aws/s3files/S3Files_EXPORTS.h>

namespace Aws {
namespace S3Files {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using S3FilesClientContextParameters = Aws::Endpoint::ClientContextParameters;

using S3FilesClientConfiguration = Aws::Client::GenericClientConfiguration;
using S3FilesBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the S3Files Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using S3FilesEndpointProviderBase =
    EndpointProviderBase<S3FilesClientConfiguration, S3FilesBuiltInParameters, S3FilesClientContextParameters>;

using S3FilesDefaultEpProviderBase =
    DefaultEndpointProvider<S3FilesClientConfiguration, S3FilesBuiltInParameters, S3FilesClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_S3FILES_API S3FilesEndpointProvider : public S3FilesDefaultEpProviderBase {
 public:
  using S3FilesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  S3FilesEndpointProvider()
      : S3FilesDefaultEpProviderBase(Aws::S3Files::S3FilesEndpointRules::GetRulesBlob(),
                                     Aws::S3Files::S3FilesEndpointRules::RulesBlobSize) {}

  ~S3FilesEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace S3Files
}  // namespace Aws
