/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workdocs/WorkDocsClientConfiguration.h>
#include <aws/workdocs/WorkDocs_EXPORTS.h>

namespace Aws {
namespace WorkDocs {
namespace Endpoint {
using WorkDocsClientConfiguration = Aws::WorkDocs::WorkDocsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using WorkDocsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_WORKDOCS_API WorkDocsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~WorkDocsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const WorkDocsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const WorkDocsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const WorkDocsClientConfiguration& config);
};

/**
 * The type for the WorkDocs Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WorkDocsEndpointProviderBase =
    EndpointProviderBase<WorkDocsClientConfiguration, WorkDocsBuiltInParameters, WorkDocsClientContextParameters>;

using WorkDocsDefaultEpProviderBase =
    BDDEndpointProvider<WorkDocsClientConfiguration, WorkDocsBuiltInParameters, WorkDocsClientContextParameters>;

}  // namespace Endpoint
}  // namespace WorkDocs

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_WORKDOCS_EXTERN template class AWS_WORKDOCS_API
    Aws::Endpoint::EndpointProviderBase<WorkDocs::Endpoint::WorkDocsClientConfiguration, WorkDocs::Endpoint::WorkDocsBuiltInParameters,
                                        WorkDocs::Endpoint::WorkDocsClientContextParameters>;

AWS_WORKDOCS_EXTERN template class AWS_WORKDOCS_API
    Aws::Endpoint::BDDEndpointProvider<WorkDocs::Endpoint::WorkDocsClientConfiguration, WorkDocs::Endpoint::WorkDocsBuiltInParameters,
                                       WorkDocs::Endpoint::WorkDocsClientContextParameters>;
}  // namespace Endpoint

namespace WorkDocs {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_WORKDOCS_API WorkDocsEndpointProvider : public WorkDocsDefaultEpProviderBase {
 public:
  using WorkDocsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  WorkDocsEndpointProvider();

  ~WorkDocsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace WorkDocs
}  // namespace Aws
