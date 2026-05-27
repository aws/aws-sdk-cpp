/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterSharedEnvironmentConfigDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>The output configuration for the restricted instance groups (RIG) in the
 * SageMaker HyperPod cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterRestrictedInstanceGroupsConfigOutput">AWS
 * API Reference</a></p>
 */
class ClusterRestrictedInstanceGroupsConfigOutput {
 public:
  AWS_SAGEMAKER_API ClusterRestrictedInstanceGroupsConfigOutput() = default;
  AWS_SAGEMAKER_API ClusterRestrictedInstanceGroupsConfigOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterRestrictedInstanceGroupsConfigOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The shared environment configuration details for the restricted instance
   * groups (RIG).</p>
   */
  inline const ClusterSharedEnvironmentConfigDetails& GetSharedEnvironmentConfig() const { return m_sharedEnvironmentConfig; }
  inline bool SharedEnvironmentConfigHasBeenSet() const { return m_sharedEnvironmentConfigHasBeenSet; }
  template <typename SharedEnvironmentConfigT = ClusterSharedEnvironmentConfigDetails>
  void SetSharedEnvironmentConfig(SharedEnvironmentConfigT&& value) {
    m_sharedEnvironmentConfigHasBeenSet = true;
    m_sharedEnvironmentConfig = std::forward<SharedEnvironmentConfigT>(value);
  }
  template <typename SharedEnvironmentConfigT = ClusterSharedEnvironmentConfigDetails>
  ClusterRestrictedInstanceGroupsConfigOutput& WithSharedEnvironmentConfig(SharedEnvironmentConfigT&& value) {
    SetSharedEnvironmentConfig(std::forward<SharedEnvironmentConfigT>(value));
    return *this;
  }
  ///@}
 private:
  ClusterSharedEnvironmentConfigDetails m_sharedEnvironmentConfig;
  bool m_sharedEnvironmentConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
