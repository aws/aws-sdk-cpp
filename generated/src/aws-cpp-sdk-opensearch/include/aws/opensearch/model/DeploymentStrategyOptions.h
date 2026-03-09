/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DeploymentStrategy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p>Specifies the deployment strategy options for the domain.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeploymentStrategyOptions">AWS
 * API Reference</a></p>
 */
class DeploymentStrategyOptions {
 public:
  AWS_OPENSEARCHSERVICE_API DeploymentStrategyOptions() = default;
  AWS_OPENSEARCHSERVICE_API DeploymentStrategyOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API DeploymentStrategyOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the deployment strategy for the domain. Valid values are
   * <code>Default</code> and <code>CapacityOptimized</code>.</p>
   */
  inline DeploymentStrategy GetDeploymentStrategy() const { return m_deploymentStrategy; }
  inline bool DeploymentStrategyHasBeenSet() const { return m_deploymentStrategyHasBeenSet; }
  inline void SetDeploymentStrategy(DeploymentStrategy value) {
    m_deploymentStrategyHasBeenSet = true;
    m_deploymentStrategy = value;
  }
  inline DeploymentStrategyOptions& WithDeploymentStrategy(DeploymentStrategy value) {
    SetDeploymentStrategy(value);
    return *this;
  }
  ///@}
 private:
  DeploymentStrategy m_deploymentStrategy{DeploymentStrategy::NOT_SET};
  bool m_deploymentStrategyHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
