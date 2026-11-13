/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3tables/S3TablesClientConfiguration.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>

namespace Aws {
namespace S3Tables {
namespace Endpoint {
using S3TablesClientConfiguration = Aws::S3Tables::S3TablesClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using S3TablesClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_S3TABLES_API S3TablesBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~S3TablesBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const S3TablesClientConfiguration& config);
  virtual void SetFromClientConfiguration(const S3TablesClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const S3TablesClientConfiguration& config);
};

/**
 * The type for the S3Tables Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using S3TablesEndpointProviderBase =
    EndpointProviderBase<S3TablesClientConfiguration, S3TablesBuiltInParameters, S3TablesClientContextParameters>;

using S3TablesDefaultEpProviderBase =
    BDDEndpointProvider<S3TablesClientConfiguration, S3TablesBuiltInParameters, S3TablesClientContextParameters>;

}  // namespace Endpoint
}  // namespace S3Tables

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_S3TABLES_EXTERN template class AWS_S3TABLES_API
    Aws::Endpoint::EndpointProviderBase<S3Tables::Endpoint::S3TablesClientConfiguration, S3Tables::Endpoint::S3TablesBuiltInParameters,
                                        S3Tables::Endpoint::S3TablesClientContextParameters>;

AWS_S3TABLES_EXTERN template class AWS_S3TABLES_API
    Aws::Endpoint::BDDEndpointProvider<S3Tables::Endpoint::S3TablesClientConfiguration, S3Tables::Endpoint::S3TablesBuiltInParameters,
                                       S3Tables::Endpoint::S3TablesClientContextParameters>;
}  // namespace Endpoint

namespace S3Tables {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_S3TABLES_API S3TablesEndpointProvider : public S3TablesDefaultEpProviderBase {
 public:
  using S3TablesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  S3TablesEndpointProvider();

  ~S3TablesEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace S3Tables
}  // namespace Aws
