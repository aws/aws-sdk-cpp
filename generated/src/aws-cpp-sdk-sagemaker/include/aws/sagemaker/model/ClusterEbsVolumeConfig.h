/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Defines the configuration for attaching an additional Amazon Elastic Block
   * Store (EBS) volume to each instance of the SageMaker HyperPod cluster instance
   * group. To learn more, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-hyperpod-release-notes.html#sagemaker-hyperpod-release-notes-20240620">SageMaker
   * HyperPod release notes: June 20, 2024</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterEbsVolumeConfig">AWS
   * API Reference</a></p>
   */
  class ClusterEbsVolumeConfig
  {
  public:
    AWS_SAGEMAKER_API ClusterEbsVolumeConfig() = default;
    AWS_SAGEMAKER_API ClusterEbsVolumeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterEbsVolumeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The size in gigabytes (GB) of the additional EBS volume to be attached to the
     * instances in the SageMaker HyperPod cluster instance group. The additional EBS
     * volume is attached to each instance within the SageMaker HyperPod cluster
     * instance group and mounted to <code>/opt/sagemaker</code>.</p>
     */
    inline int GetVolumeSizeInGB() const { return m_volumeSizeInGB; }
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }
    inline ClusterEbsVolumeConfig& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a KMS key to encrypt the Amazon EBS volume.</p>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const { return m_volumeKmsKeyId; }
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }
    template<typename VolumeKmsKeyIdT = Aws::String>
    void SetVolumeKmsKeyId(VolumeKmsKeyIdT&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::forward<VolumeKmsKeyIdT>(value); }
    template<typename VolumeKmsKeyIdT = Aws::String>
    ClusterEbsVolumeConfig& WithVolumeKmsKeyId(VolumeKmsKeyIdT&& value) { SetVolumeKmsKeyId(std::forward<VolumeKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the configuration is for the cluster's root or secondary
     * Amazon EBS volume. You can specify two <code>ClusterEbsVolumeConfig</code>
     * fields to configure both the root and secondary volumes. Set the value to
     * <code>True</code> if you'd like to provide your own customer managed Amazon Web
     * Services KMS key to encrypt the root volume. When <code>True</code>:</p> <ul>
     * <li> <p>The configuration is applied to the root volume.</p> </li> <li> <p>You
     * can't specify the <code>VolumeSizeInGB</code> field. The size of the root volume
     * is determined for you.</p> </li> <li> <p>You must specify a KMS key ID for
     * <code>VolumeKmsKeyId</code> to encrypt the root volume with your own KMS key
     * instead of an Amazon Web Services owned KMS key.</p> </li> </ul> <p>Otherwise,
     * by default, the value is <code>False</code>, and the following applies:</p> <ul>
     * <li> <p>The configuration is applied to the secondary volume, while the root
     * volume is encrypted with an Amazon Web Services owned key.</p> </li> <li> <p>You
     * must specify the <code>VolumeSizeInGB</code> field.</p> </li> <li> <p>You can
     * optionally specify the <code>VolumeKmsKeyId</code> to encrypt the secondary
     * volume with your own KMS key instead of an Amazon Web Services owned KMS
     * key.</p> </li> </ul>
     */
    inline bool GetRootVolume() const { return m_rootVolume; }
    inline bool RootVolumeHasBeenSet() const { return m_rootVolumeHasBeenSet; }
    inline void SetRootVolume(bool value) { m_rootVolumeHasBeenSet = true; m_rootVolume = value; }
    inline ClusterEbsVolumeConfig& WithRootVolume(bool value) { SetRootVolume(value); return *this;}
    ///@}
  private:

    int m_volumeSizeInGB{0};
    bool m_volumeSizeInGBHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    bool m_rootVolume{false};
    bool m_rootVolumeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
