/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/RedshiftServerlessClientConfiguration.h>
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>

namespace Aws {
namespace RedshiftServerless {
namespace Endpoint {
using RedshiftServerlessClientConfiguration = Aws::RedshiftServerless::RedshiftServerlessClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RedshiftServerlessClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_REDSHIFTSERVERLESS_API RedshiftServerlessBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~RedshiftServerlessBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const RedshiftServerlessClientConfiguration& config);
  virtual void SetFromClientConfiguration(const RedshiftServerlessClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const RedshiftServerlessClientConfiguration& config);
};

/**
 * The type for the RedshiftServerless Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RedshiftServerlessEndpointProviderBase =
    EndpointProviderBase<RedshiftServerlessClientConfiguration, RedshiftServerlessBuiltInParameters,
                         RedshiftServerlessClientContextParameters>;

using RedshiftServerlessDefaultEpProviderBase =
    BDDEndpointProvider<RedshiftServerlessClientConfiguration, RedshiftServerlessBuiltInParameters,
                        RedshiftServerlessClientContextParameters>;

}  // namespace Endpoint
}  // namespace RedshiftServerless

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_REDSHIFTSERVERLESS_EXTERN template class AWS_REDSHIFTSERVERLESS_API Aws::Endpoint::EndpointProviderBase<
    RedshiftServerless::Endpoint::RedshiftServerlessClientConfiguration, RedshiftServerless::Endpoint::RedshiftServerlessBuiltInParameters,
    RedshiftServerless::Endpoint::RedshiftServerlessClientContextParameters>;

AWS_REDSHIFTSERVERLESS_EXTERN template class AWS_REDSHIFTSERVERLESS_API Aws::Endpoint::BDDEndpointProvider<
    RedshiftServerless::Endpoint::RedshiftServerlessClientConfiguration, RedshiftServerless::Endpoint::RedshiftServerlessBuiltInParameters,
    RedshiftServerless::Endpoint::RedshiftServerlessClientContextParameters>;
}  // namespace Endpoint

namespace RedshiftServerless {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_REDSHIFTSERVERLESS_API RedshiftServerlessEndpointProvider : public RedshiftServerlessDefaultEpProviderBase {
 public:
  using RedshiftServerlessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RedshiftServerlessEndpointProvider();

  ~RedshiftServerlessEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RedshiftServerless
}  // namespace Aws
