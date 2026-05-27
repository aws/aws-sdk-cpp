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
 * <p>The shared environment configuration for the restricted instance groups
 * (RIG).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterSharedEnvironmentConfig">AWS
 * API Reference</a></p>
 */
class ClusterSharedEnvironmentConfig {
 public:
  AWS_SAGEMAKER_API ClusterSharedEnvironmentConfig() = default;
  AWS_SAGEMAKER_API ClusterSharedEnvironmentConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterSharedEnvironmentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The deletion policy for the Amazon FSx for Lustre file system in the shared
   * environment.</p>
   */
  inline ClusterFSxLustreDeletionPolicy GetFSxLustreDeletionPolicy() const { return m_fSxLustreDeletionPolicy; }
  inline bool FSxLustreDeletionPolicyHasBeenSet() const { return m_fSxLustreDeletionPolicyHasBeenSet; }
  inline void SetFSxLustreDeletionPolicy(ClusterFSxLustreDeletionPolicy value) {
    m_fSxLustreDeletionPolicyHasBeenSet = true;
    m_fSxLustreDeletionPolicy = value;
  }
  inline ClusterSharedEnvironmentConfig& WithFSxLustreDeletionPolicy(ClusterFSxLustreDeletionPolicy value) {
    SetFSxLustreDeletionPolicy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration settings for an Amazon FSx for Lustre file system in the shared
   * environment.</p>
   */
  inline const FSxLustreConfig& GetFSxLustreConfig() const { return m_fSxLustreConfig; }
  inline bool FSxLustreConfigHasBeenSet() const { return m_fSxLustreConfigHasBeenSet; }
  template <typename FSxLustreConfigT = FSxLustreConfig>
  void SetFSxLustreConfig(FSxLustreConfigT&& value) {
    m_fSxLustreConfigHasBeenSet = true;
    m_fSxLustreConfig = std::forward<FSxLustreConfigT>(value);
  }
  template <typename FSxLustreConfigT = FSxLustreConfig>
  ClusterSharedEnvironmentConfig& WithFSxLustreConfig(FSxLustreConfigT&& value) {
    SetFSxLustreConfig(std::forward<FSxLustreConfigT>(value));
    return *this;
  }
  ///@}
 private:
  ClusterFSxLustreDeletionPolicy m_fSxLustreDeletionPolicy{ClusterFSxLustreDeletionPolicy::NOT_SET};

  FSxLustreConfig m_fSxLustreConfig;
  bool m_fSxLustreDeletionPolicyHasBeenSet = false;
  bool m_fSxLustreConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
