/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Parameters that are used to automatically set up EBS volumes when an instance
   * is launched.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails">AWS
   * API Reference</a></p>
   */
  class AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails() = default;
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to delete the volume when the instance is terminated.</p>
     */
    inline bool GetDeleteOnTermination() const { return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to encrypt the volume.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of input/output (I/O) operations per second (IOPS) to provision
     * for the volume.</p> <p>Only supported for <code>gp3</code> or <code>io1</code>
     * volumes. Required for <code>io1</code> volumes. Not used with
     * <code>standard</code>, <code>gp2</code>, <code>st1</code>, or <code>sc1</code>
     * volumes.</p>
     */
    inline int GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either
     * <code>VolumeSize</code> or <code>SnapshotId</code>.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume size, in GiBs. The following are the supported volumes sizes for
     * each volume type:</p> <ul> <li> <p>gp2 and gp3: 1-16,384</p> </li> <li> <p>io1:
     * 4-16,384</p> </li> <li> <p>st1 and sc1: 125-16,384</p> </li> <li> <p>standard:
     * 1-1,024</p> </li> </ul> <p>You must specify either <code>SnapshotId</code> or
     * <code>VolumeSize</code>. If you specify both <code>SnapshotId</code> and
     * <code>VolumeSize</code>, the volume size must be equal or greater than the size
     * of the snapshot.</p>
     */
    inline int GetVolumeSize() const { return m_volumeSize; }
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume type. Valid values are as follows:</p> <ul> <li> <p>
     * <code>gp2</code> </p> </li> <li> <p> <code>gp3</code> </p> </li> <li> <p>
     * <code>io1</code> </p> </li> <li> <p> <code>sc1</code> </p> </li> <li> <p>
     * <code>st1</code> </p> </li> <li> <p> <code>standard</code> </p> </li> </ul>
     */
    inline const Aws::String& GetVolumeType() const { return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    template<typename VolumeTypeT = Aws::String>
    void SetVolumeType(VolumeTypeT&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::forward<VolumeTypeT>(value); }
    template<typename VolumeTypeT = Aws::String>
    AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithVolumeType(VolumeTypeT&& value) { SetVolumeType(std::forward<VolumeTypeT>(value)); return *this;}
    ///@}
  private:

    bool m_deleteOnTermination{false};
    bool m_deleteOnTerminationHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    int m_iops{0};
    bool m_iopsHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_volumeSize{0};
    bool m_volumeSizeHasBeenSet = false;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
