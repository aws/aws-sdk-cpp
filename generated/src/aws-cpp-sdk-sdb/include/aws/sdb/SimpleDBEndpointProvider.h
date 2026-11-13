/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sdb/SimpleDBClientConfiguration.h>
#include <aws/sdb/SimpleDB_EXPORTS.h>

namespace Aws {
namespace SimpleDB {
namespace Endpoint {
using SimpleDBClientConfiguration = Aws::SimpleDB::SimpleDBClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SimpleDBClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SIMPLEDB_API SimpleDBBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SimpleDBBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SimpleDBClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SimpleDBClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SimpleDBClientConfiguration& config);
};

/**
 * The type for the SimpleDB Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SimpleDBEndpointProviderBase =
    EndpointProviderBase<SimpleDBClientConfiguration, SimpleDBBuiltInParameters, SimpleDBClientContextParameters>;

using SimpleDBDefaultEpProviderBase =
    DefaultEndpointProvider<SimpleDBClientConfiguration, SimpleDBBuiltInParameters, SimpleDBClientContextParameters>;

}  // namespace Endpoint
}  // namespace SimpleDB

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SIMPLEDB_EXTERN template class AWS_SIMPLEDB_API
    Aws::Endpoint::EndpointProviderBase<SimpleDB::Endpoint::SimpleDBClientConfiguration, SimpleDB::Endpoint::SimpleDBBuiltInParameters,
                                        SimpleDB::Endpoint::SimpleDBClientContextParameters>;

AWS_SIMPLEDB_EXTERN template class AWS_SIMPLEDB_API
    Aws::Endpoint::DefaultEndpointProvider<SimpleDB::Endpoint::SimpleDBClientConfiguration, SimpleDB::Endpoint::SimpleDBBuiltInParameters,
                                           SimpleDB::Endpoint::SimpleDBClientContextParameters>;
}  // namespace Endpoint

namespace SimpleDB {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SIMPLEDB_API SimpleDBEndpointProvider : public SimpleDBDefaultEpProviderBase {
 public:
  using SimpleDBResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SimpleDBEndpointProvider();

  ~SimpleDBEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SimpleDB
}  // namespace Aws
