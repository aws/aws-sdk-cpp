/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/MemoryDBClientConfiguration.h>
#include <aws/memorydb/MemoryDB_EXPORTS.h>

namespace Aws {
namespace MemoryDB {
namespace Endpoint {
using MemoryDBClientConfiguration = Aws::MemoryDB::MemoryDBClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using MemoryDBClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_MEMORYDB_API MemoryDBBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~MemoryDBBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const MemoryDBClientConfiguration& config);
  virtual void SetFromClientConfiguration(const MemoryDBClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const MemoryDBClientConfiguration& config);
};

/**
 * The type for the MemoryDB Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MemoryDBEndpointProviderBase =
    EndpointProviderBase<MemoryDBClientConfiguration, MemoryDBBuiltInParameters, MemoryDBClientContextParameters>;

using MemoryDBDefaultEpProviderBase =
    BDDEndpointProvider<MemoryDBClientConfiguration, MemoryDBBuiltInParameters, MemoryDBClientContextParameters>;

}  // namespace Endpoint
}  // namespace MemoryDB

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_MEMORYDB_EXTERN template class AWS_MEMORYDB_API
    Aws::Endpoint::EndpointProviderBase<MemoryDB::Endpoint::MemoryDBClientConfiguration, MemoryDB::Endpoint::MemoryDBBuiltInParameters,
                                        MemoryDB::Endpoint::MemoryDBClientContextParameters>;

AWS_MEMORYDB_EXTERN template class AWS_MEMORYDB_API
    Aws::Endpoint::BDDEndpointProvider<MemoryDB::Endpoint::MemoryDBClientConfiguration, MemoryDB::Endpoint::MemoryDBBuiltInParameters,
                                       MemoryDB::Endpoint::MemoryDBClientContextParameters>;
}  // namespace Endpoint

namespace MemoryDB {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_MEMORYDB_API MemoryDBEndpointProvider : public MemoryDBDefaultEpProviderBase {
 public:
  using MemoryDBResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  MemoryDBEndpointProvider();

  ~MemoryDBEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace MemoryDB
}  // namespace Aws
