/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterFSxLustreDeletionPolicy.h>
#include <aws/sagemaker/model/FSxLustreConfig.h>

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
 * <p>The shared environment configuration details for the restricted instance
 * groups (RIG).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterSharedEnvironmentConfigDetails">AWS
 * API Reference</a></p>
 */
class ClusterSharedEnvironmentConfigDetails {
 public:
  AWS_SAGEMAKER_API ClusterSharedEnvironmentConfigDetails() = default;
  AWS_SAGEMAKER_API ClusterSharedEnvironmentConfigDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterSharedEnvironmentConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current Amazon FSx for Lustre file system configuration in the shared
   * environment.</p>
   */
  inline const FSxLustreConfig& GetCurrentFSxLustreConfig() const { return m_currentFSxLustreConfig; }
  inline bool CurrentFSxLustreConfigHasBeenSet() const { return m_currentFSxLustreConfigHasBeenSet; }
  template <typename CurrentFSxLustreConfigT = FSxLustreConfig>
  void SetCurrentFSxLustreConfig(CurrentFSxLustreConfigT&& value) {
    m_currentFSxLustreConfigHasBeenSet = true;
    m_currentFSxLustreConfig = std::forward<CurrentFSxLustreConfigT>(value);
  }
  template <typename CurrentFSxLustreConfigT = FSxLustreConfig>
  ClusterSharedEnvironmentConfigDetails& WithCurrentFSxLustreConfig(CurrentFSxLustreConfigT&& value) {
    SetCurrentFSxLustreConfig(std::forward<CurrentFSxLustreConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired Amazon FSx for Lustre file system configuration in the shared
   * environment.</p>
   */
  inline const FSxLustreConfig& GetDesiredFSxLustreConfig() const { return m_desiredFSxLustreConfig; }
  inline bool DesiredFSxLustreConfigHasBeenSet() const { return m_desiredFSxLustreConfigHasBeenSet; }
  template <typename DesiredFSxLustreConfigT = FSxLustreConfig>
  void SetDesiredFSxLustreConfig(DesiredFSxLustreConfigT&& value) {
    m_desiredFSxLustreConfigHasBeenSet = true;
    m_desiredFSxLustreConfig = std::forward<DesiredFSxLustreConfigT>(value);
  }
  template <typename DesiredFSxLustreConfigT = FSxLustreConfig>
  ClusterSharedEnvironmentConfigDetails& WithDesiredFSxLustreConfig(DesiredFSxLustreConfigT&& value) {
    SetDesiredFSxLustreConfig(std::forward<DesiredFSxLustreConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current deletion policy for the Amazon FSx for Lustre file system in the
   * shared environment.</p>
   */
  inline ClusterFSxLustreDeletionPolicy GetCurrentFSxLustreDeletionPolicy() const { return m_currentFSxLustreDeletionPolicy; }
  inline bool CurrentFSxLustreDeletionPolicyHasBeenSet() const { return m_currentFSxLustreDeletionPolicyHasBeenSet; }
  inline void SetCurrentFSxLustreDeletionPolicy(ClusterFSxLustreDeletionPolicy value) {
    m_currentFSxLustreDeletionPolicyHasBeenSet = true;
    m_currentFSxLustreDeletionPolicy = value;
  }
  inline ClusterSharedEnvironmentConfigDetails& WithCurrentFSxLustreDeletionPolicy(ClusterFSxLustreDeletionPolicy value) {
    SetCurrentFSxLustreDeletionPolicy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired deletion policy for the Amazon FSx for Lustre file system in the
   * shared environment.</p>
   */
  inline ClusterFSxLustreDeletionPolicy GetDesiredFSxLustreDeletionPolicy() const { return m_desiredFSxLustreDeletionPolicy; }
  inline bool DesiredFSxLustreDeletionPolicyHasBeenSet() const { return m_desiredFSxLustreDeletionPolicyHasBeenSet; }
  inline void SetDesiredFSxLustreDeletionPolicy(ClusterFSxLustreDeletionPolicy value) {
    m_desiredFSxLustreDeletionPolicyHasBeenSet = true;
    m_desiredFSxLustreDeletionPolicy = value;
  }
  inline ClusterSharedEnvironmentConfigDetails& WithDesiredFSxLustreDeletionPolicy(ClusterFSxLustreDeletionPolicy value) {
    SetDesiredFSxLustreDeletionPolicy(value);
    return *this;
  }
  ///@}
 private:
  FSxLustreConfig m_currentFSxLustreConfig;

  FSxLustreConfig m_desiredFSxLustreConfig;

  ClusterFSxLustreDeletionPolicy m_currentFSxLustreDeletionPolicy{ClusterFSxLustreDeletionPolicy::NOT_SET};

  ClusterFSxLustreDeletionPolicy m_desiredFSxLustreDeletionPolicy{ClusterFSxLustreDeletionPolicy::NOT_SET};
  bool m_currentFSxLustreConfigHasBeenSet = false;
  bool m_desiredFSxLustreConfigHasBeenSet = false;
  bool m_currentFSxLustreDeletionPolicyHasBeenSet = false;
  bool m_desiredFSxLustreDeletionPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
