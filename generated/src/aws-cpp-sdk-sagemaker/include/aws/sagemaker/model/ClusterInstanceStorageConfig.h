/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterEbsVolumeConfig.h>
#include <aws/sagemaker/model/ClusterFsxLustreConfig.h>
#include <aws/sagemaker/model/ClusterFsxOpenZfsConfig.h>

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
 * <p>Defines the configuration for attaching additional storage to the instances
 * in the SageMaker HyperPod cluster instance group. To learn more, see <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-hyperpod-release-notes.html#sagemaker-hyperpod-release-notes-20240620">SageMaker
 * HyperPod release notes: June 20, 2024</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterInstanceStorageConfig">AWS
 * API Reference</a></p>
 */
class ClusterInstanceStorageConfig {
 public:
  AWS_SAGEMAKER_API ClusterInstanceStorageConfig() = default;
  AWS_SAGEMAKER_API ClusterInstanceStorageConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterInstanceStorageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Defines the configuration for attaching additional Amazon Elastic Block Store
   * (EBS) volumes to the instances in the SageMaker HyperPod cluster instance group.
   * The additional EBS volume is attached to each instance within the SageMaker
   * HyperPod cluster instance group and mounted to <code>/opt/sagemaker</code>.</p>
   */
  inline const ClusterEbsVolumeConfig& GetEbsVolumeConfig() const { return m_ebsVolumeConfig; }
  inline bool EbsVolumeConfigHasBeenSet() const { return m_ebsVolumeConfigHasBeenSet; }
  template <typename EbsVolumeConfigT = ClusterEbsVolumeConfig>
  void SetEbsVolumeConfig(EbsVolumeConfigT&& value) {
    m_ebsVolumeConfigHasBeenSet = true;
    m_ebsVolumeConfig = std::forward<EbsVolumeConfigT>(value);
  }
  template <typename EbsVolumeConfigT = ClusterEbsVolumeConfig>
  ClusterInstanceStorageConfig& WithEbsVolumeConfig(EbsVolumeConfigT&& value) {
    SetEbsVolumeConfig(std::forward<EbsVolumeConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the configuration for attaching an Amazon FSx for Lustre file system
   * to the instances in the SageMaker HyperPod cluster instance group.</p>
   */
  inline const ClusterFsxLustreConfig& GetFsxLustreConfig() const { return m_fsxLustreConfig; }
  inline bool FsxLustreConfigHasBeenSet() const { return m_fsxLustreConfigHasBeenSet; }
  template <typename FsxLustreConfigT = ClusterFsxLustreConfig>
  void SetFsxLustreConfig(FsxLustreConfigT&& value) {
    m_fsxLustreConfigHasBeenSet = true;
    m_fsxLustreConfig = std::forward<FsxLustreConfigT>(value);
  }
  template <typename FsxLustreConfigT = ClusterFsxLustreConfig>
  ClusterInstanceStorageConfig& WithFsxLustreConfig(FsxLustreConfigT&& value) {
    SetFsxLustreConfig(std::forward<FsxLustreConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the configuration for attaching an Amazon FSx for OpenZFS file system
   * to the instances in the SageMaker HyperPod cluster instance group.</p>
   */
  inline const ClusterFsxOpenZfsConfig& GetFsxOpenZfsConfig() const { return m_fsxOpenZfsConfig; }
  inline bool FsxOpenZfsConfigHasBeenSet() const { return m_fsxOpenZfsConfigHasBeenSet; }
  template <typename FsxOpenZfsConfigT = ClusterFsxOpenZfsConfig>
  void SetFsxOpenZfsConfig(FsxOpenZfsConfigT&& value) {
    m_fsxOpenZfsConfigHasBeenSet = true;
    m_fsxOpenZfsConfig = std::forward<FsxOpenZfsConfigT>(value);
  }
  template <typename FsxOpenZfsConfigT = ClusterFsxOpenZfsConfig>
  ClusterInstanceStorageConfig& WithFsxOpenZfsConfig(FsxOpenZfsConfigT&& value) {
    SetFsxOpenZfsConfig(std::forward<FsxOpenZfsConfigT>(value));
    return *this;
  }
  ///@}
 private:
  ClusterEbsVolumeConfig m_ebsVolumeConfig;

  ClusterFsxLustreConfig m_fsxLustreConfig;

  ClusterFsxOpenZfsConfig m_fsxOpenZfsConfig;
  bool m_ebsVolumeConfigHasBeenSet = false;
  bool m_fsxLustreConfigHasBeenSet = false;
  bool m_fsxOpenZfsConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
