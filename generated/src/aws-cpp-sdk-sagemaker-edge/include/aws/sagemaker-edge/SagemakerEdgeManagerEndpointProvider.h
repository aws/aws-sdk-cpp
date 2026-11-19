/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerClientConfiguration.h>
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>

namespace Aws {
namespace SagemakerEdgeManager {
namespace Endpoint {
using SagemakerEdgeManagerClientConfiguration = Aws::SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using SagemakerEdgeManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_SAGEMAKEREDGEMANAGER_API SagemakerEdgeManagerBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~SagemakerEdgeManagerBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const SagemakerEdgeManagerClientConfiguration& config);
  virtual void SetFromClientConfiguration(const SagemakerEdgeManagerClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const SagemakerEdgeManagerClientConfiguration& config);
};

/**
 * The type for the SagemakerEdgeManager Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using SagemakerEdgeManagerEndpointProviderBase =
    EndpointProviderBase<SagemakerEdgeManagerClientConfiguration, SagemakerEdgeManagerBuiltInParameters,
                         SagemakerEdgeManagerClientContextParameters>;

using SagemakerEdgeManagerDefaultEpProviderBase =
    BDDEndpointProvider<SagemakerEdgeManagerClientConfiguration, SagemakerEdgeManagerBuiltInParameters,
                        SagemakerEdgeManagerClientContextParameters>;

}  // namespace Endpoint
}  // namespace SagemakerEdgeManager

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_SAGEMAKEREDGEMANAGER_EXTERN template class AWS_SAGEMAKEREDGEMANAGER_API
    Aws::Endpoint::EndpointProviderBase<SagemakerEdgeManager::Endpoint::SagemakerEdgeManagerClientConfiguration,
                                        SagemakerEdgeManager::Endpoint::SagemakerEdgeManagerBuiltInParameters,
                                        SagemakerEdgeManager::Endpoint::SagemakerEdgeManagerClientContextParameters>;

AWS_SAGEMAKEREDGEMANAGER_EXTERN template class AWS_SAGEMAKEREDGEMANAGER_API
    Aws::Endpoint::BDDEndpointProvider<SagemakerEdgeManager::Endpoint::SagemakerEdgeManagerClientConfiguration,
                                       SagemakerEdgeManager::Endpoint::SagemakerEdgeManagerBuiltInParameters,
                                       SagemakerEdgeManager::Endpoint::SagemakerEdgeManagerClientContextParameters>;
}  // namespace Endpoint

namespace SagemakerEdgeManager {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_SAGEMAKEREDGEMANAGER_API SagemakerEdgeManagerEndpointProvider : public SagemakerEdgeManagerDefaultEpProviderBase {
 public:
  using SagemakerEdgeManagerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  SagemakerEdgeManagerEndpointProvider();

  ~SagemakerEdgeManagerEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace SagemakerEdgeManager
}  // namespace Aws
