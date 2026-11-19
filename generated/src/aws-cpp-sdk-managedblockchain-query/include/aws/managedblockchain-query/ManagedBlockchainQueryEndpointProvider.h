/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryClientConfiguration.h>
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>

namespace Aws {
namespace ManagedBlockchainQuery {
namespace Endpoint {
using ManagedBlockchainQueryClientConfiguration = Aws::ManagedBlockchainQuery::ManagedBlockchainQueryClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ManagedBlockchainQueryClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MANAGEDBLOCKCHAINQUERY_API ManagedBlockchainQueryBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ManagedBlockchainQueryBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ManagedBlockchainQueryClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ManagedBlockchainQueryClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const ManagedBlockchainQueryClientConfiguration& config);
};

/**
 * The type for the ManagedBlockchainQuery Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ManagedBlockchainQueryEndpointProviderBase =
    EndpointProviderBase<ManagedBlockchainQueryClientConfiguration, ManagedBlockchainQueryBuiltInParameters,
                         ManagedBlockchainQueryClientContextParameters>;

using ManagedBlockchainQueryDefaultEpProviderBase =
    BDDEndpointProvider<ManagedBlockchainQueryClientConfiguration, ManagedBlockchainQueryBuiltInParameters,
                        ManagedBlockchainQueryClientContextParameters>;

}  // namespace Endpoint
}  // namespace ManagedBlockchainQuery

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MANAGEDBLOCKCHAINQUERY_EXTERN template class AWS_MANAGEDBLOCKCHAINQUERY_API
    Aws::Endpoint::EndpointProviderBase<ManagedBlockchainQuery::Endpoint::ManagedBlockchainQueryClientConfiguration,
                                        ManagedBlockchainQuery::Endpoint::ManagedBlockchainQueryBuiltInParameters,
                                        ManagedBlockchainQuery::Endpoint::ManagedBlockchainQueryClientContextParameters>;

AWS_MANAGEDBLOCKCHAINQUERY_EXTERN template class AWS_MANAGEDBLOCKCHAINQUERY_API
    Aws::Endpoint::BDDEndpointProvider<ManagedBlockchainQuery::Endpoint::ManagedBlockchainQueryClientConfiguration,
                                       ManagedBlockchainQuery::Endpoint::ManagedBlockchainQueryBuiltInParameters,
                                       ManagedBlockchainQuery::Endpoint::ManagedBlockchainQueryClientContextParameters>;
}  // namespace Endpoint

namespace ManagedBlockchainQuery {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MANAGEDBLOCKCHAINQUERY_API ManagedBlockchainQueryEndpointProvider : public ManagedBlockchainQueryDefaultEpProviderBase {
 public:
  using ManagedBlockchainQueryResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ManagedBlockchainQueryEndpointProvider();

  ~ManagedBlockchainQueryEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ManagedBlockchainQuery
}  // namespace Aws
