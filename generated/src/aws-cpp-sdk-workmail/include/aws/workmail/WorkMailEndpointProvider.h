/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workmail/WorkMailClientConfiguration.h>
#include <aws/workmail/WorkMail_EXPORTS.h>

namespace Aws {
namespace WorkMail {
namespace Endpoint {
using WorkMailClientConfiguration = Aws::WorkMail::WorkMailClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using WorkMailClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_WORKMAIL_API WorkMailBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~WorkMailBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const WorkMailClientConfiguration& config);
  virtual void SetFromClientConfiguration(const WorkMailClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const WorkMailClientConfiguration& config);
};

/**
 * The type for the WorkMail Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using WorkMailEndpointProviderBase =
    EndpointProviderBase<WorkMailClientConfiguration, WorkMailBuiltInParameters, WorkMailClientContextParameters>;

using WorkMailDefaultEpProviderBase =
    BDDEndpointProvider<WorkMailClientConfiguration, WorkMailBuiltInParameters, WorkMailClientContextParameters>;

}  // namespace Endpoint
}  // namespace WorkMail

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_WORKMAIL_EXTERN template class AWS_WORKMAIL_API
    Aws::Endpoint::EndpointProviderBase<WorkMail::Endpoint::WorkMailClientConfiguration, WorkMail::Endpoint::WorkMailBuiltInParameters,
                                        WorkMail::Endpoint::WorkMailClientContextParameters>;

AWS_WORKMAIL_EXTERN template class AWS_WORKMAIL_API
    Aws::Endpoint::BDDEndpointProvider<WorkMail::Endpoint::WorkMailClientConfiguration, WorkMail::Endpoint::WorkMailBuiltInParameters,
                                       WorkMail::Endpoint::WorkMailClientContextParameters>;
}  // namespace Endpoint

namespace WorkMail {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_WORKMAIL_API WorkMailEndpointProvider : public WorkMailDefaultEpProviderBase {
 public:
  using WorkMailResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  WorkMailEndpointProvider();

  ~WorkMailEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace WorkMail
}  // namespace Aws
