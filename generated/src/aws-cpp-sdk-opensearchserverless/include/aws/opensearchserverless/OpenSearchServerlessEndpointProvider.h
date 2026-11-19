/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchserverless/OpenSearchServerlessClientConfiguration.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>

namespace Aws {
namespace OpenSearchServerless {
namespace Endpoint {
using OpenSearchServerlessClientConfiguration = Aws::OpenSearchServerless::OpenSearchServerlessClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using OpenSearchServerlessClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_OPENSEARCHSERVERLESS_API OpenSearchServerlessBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~OpenSearchServerlessBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const OpenSearchServerlessClientConfiguration& config);
  virtual void SetFromClientConfiguration(const OpenSearchServerlessClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const OpenSearchServerlessClientConfiguration& config);
};

/**
 * The type for the OpenSearchServerless Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using OpenSearchServerlessEndpointProviderBase =
    EndpointProviderBase<OpenSearchServerlessClientConfiguration, OpenSearchServerlessBuiltInParameters,
                         OpenSearchServerlessClientContextParameters>;

using OpenSearchServerlessDefaultEpProviderBase =
    BDDEndpointProvider<OpenSearchServerlessClientConfiguration, OpenSearchServerlessBuiltInParameters,
                        OpenSearchServerlessClientContextParameters>;

}  // namespace Endpoint
}  // namespace OpenSearchServerless

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_OPENSEARCHSERVERLESS_EXTERN template class AWS_OPENSEARCHSERVERLESS_API
    Aws::Endpoint::EndpointProviderBase<OpenSearchServerless::Endpoint::OpenSearchServerlessClientConfiguration,
                                        OpenSearchServerless::Endpoint::OpenSearchServerlessBuiltInParameters,
                                        OpenSearchServerless::Endpoint::OpenSearchServerlessClientContextParameters>;

AWS_OPENSEARCHSERVERLESS_EXTERN template class AWS_OPENSEARCHSERVERLESS_API
    Aws::Endpoint::BDDEndpointProvider<OpenSearchServerless::Endpoint::OpenSearchServerlessClientConfiguration,
                                       OpenSearchServerless::Endpoint::OpenSearchServerlessBuiltInParameters,
                                       OpenSearchServerless::Endpoint::OpenSearchServerlessClientContextParameters>;
}  // namespace Endpoint

namespace OpenSearchServerless {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_OPENSEARCHSERVERLESS_API OpenSearchServerlessEndpointProvider : public OpenSearchServerlessDefaultEpProviderBase {
 public:
  using OpenSearchServerlessResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  OpenSearchServerlessEndpointProvider();

  ~OpenSearchServerlessEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace OpenSearchServerless
}  // namespace Aws
