/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/InstanceGroupHealthCheckConfiguration.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class StartClusterHealthCheckRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API StartClusterHealthCheckRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartClusterHealthCheck"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
   * cluster.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  StartClusterHealthCheckRequest& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of configurations containing instance group names, EC2 instance IDs,
   * and deep health checks to perform.</p>
   */
  inline const Aws::Vector<InstanceGroupHealthCheckConfiguration>& GetDeepHealthCheckConfigurations() const {
    return m_deepHealthCheckConfigurations;
  }
  inline bool DeepHealthCheckConfigurationsHasBeenSet() const { return m_deepHealthCheckConfigurationsHasBeenSet; }
  template <typename DeepHealthCheckConfigurationsT = Aws::Vector<InstanceGroupHealthCheckConfiguration>>
  void SetDeepHealthCheckConfigurations(DeepHealthCheckConfigurationsT&& value) {
    m_deepHealthCheckConfigurationsHasBeenSet = true;
    m_deepHealthCheckConfigurations = std::forward<DeepHealthCheckConfigurationsT>(value);
  }
  template <typename DeepHealthCheckConfigurationsT = Aws::Vector<InstanceGroupHealthCheckConfiguration>>
  StartClusterHealthCheckRequest& WithDeepHealthCheckConfigurations(DeepHealthCheckConfigurationsT&& value) {
    SetDeepHealthCheckConfigurations(std::forward<DeepHealthCheckConfigurationsT>(value));
    return *this;
  }
  template <typename DeepHealthCheckConfigurationsT = InstanceGroupHealthCheckConfiguration>
  StartClusterHealthCheckRequest& AddDeepHealthCheckConfigurations(DeepHealthCheckConfigurationsT&& value) {
    m_deepHealthCheckConfigurationsHasBeenSet = true;
    m_deepHealthCheckConfigurations.emplace_back(std::forward<DeepHealthCheckConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterName;

  Aws::Vector<InstanceGroupHealthCheckConfiguration> m_deepHealthCheckConfigurations;
  bool m_clusterNameHasBeenSet = false;
  bool m_deepHealthCheckConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
