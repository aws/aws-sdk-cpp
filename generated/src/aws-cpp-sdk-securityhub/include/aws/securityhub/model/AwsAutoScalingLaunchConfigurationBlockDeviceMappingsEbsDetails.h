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
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails();
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether to delete the volume when the instance is terminated.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Whether to delete the volume when the instance is terminated.</p>
     */
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

    /**
     * <p>Whether to delete the volume when the instance is terminated.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Whether to delete the volume when the instance is terminated.</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    /**
     * <p>Whether to encrypt the volume.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Whether to encrypt the volume.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Whether to encrypt the volume.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Whether to encrypt the volume.</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The number of input/output (I/O) operations per second (IOPS) to provision
     * for the volume.</p> <p>Only supported for <code>gp3</code> or <code>io1</code>
     * volumes. Required for <code>io1</code> volumes. Not used with
     * <code>standard</code>, <code>gp2</code>, <code>st1</code>, or <code>sc1</code>
     * volumes.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The number of input/output (I/O) operations per second (IOPS) to provision
     * for the volume.</p> <p>Only supported for <code>gp3</code> or <code>io1</code>
     * volumes. Required for <code>io1</code> volumes. Not used with
     * <code>standard</code>, <code>gp2</code>, <code>st1</code>, or <code>sc1</code>
     * volumes.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The number of input/output (I/O) operations per second (IOPS) to provision
     * for the volume.</p> <p>Only supported for <code>gp3</code> or <code>io1</code>
     * volumes. Required for <code>io1</code> volumes. Not used with
     * <code>standard</code>, <code>gp2</code>, <code>st1</code>, or <code>sc1</code>
     * volumes.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The number of input/output (I/O) operations per second (IOPS) to provision
     * for the volume.</p> <p>Only supported for <code>gp3</code> or <code>io1</code>
     * volumes. Required for <code>io1</code> volumes. Not used with
     * <code>standard</code>, <code>gp2</code>, <code>st1</code>, or <code>sc1</code>
     * volumes.</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either
     * <code>VolumeSize</code> or <code>SnapshotId</code>.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either
     * <code>VolumeSize</code> or <code>SnapshotId</code>.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either
     * <code>VolumeSize</code> or <code>SnapshotId</code>.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either
     * <code>VolumeSize</code> or <code>SnapshotId</code>.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either
     * <code>VolumeSize</code> or <code>SnapshotId</code>.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either
     * <code>VolumeSize</code> or <code>SnapshotId</code>.</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either
     * <code>VolumeSize</code> or <code>SnapshotId</code>.</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The snapshot ID of the volume to use.</p> <p>You must specify either
     * <code>VolumeSize</code> or <code>SnapshotId</code>.</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The volume size, in GiBs. The following are the supported volumes sizes for
     * each volume type:</p> <ul> <li> <p>gp2 and gp3: 1-16,384</p> </li> <li> <p>io1:
     * 4-16,384</p> </li> <li> <p>st1 and sc1: 125-16,384</p> </li> <li> <p>standard:
     * 1-1,024</p> </li> </ul> <p>You must specify either <code>SnapshotId</code> or
     * <code>VolumeSize</code>. If you specify both <code>SnapshotId</code> and
     * <code>VolumeSize</code>, the volume size must be equal or greater than the size
     * of the snapshot.</p>
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * <p>The volume size, in GiBs. The following are the supported volumes sizes for
     * each volume type:</p> <ul> <li> <p>gp2 and gp3: 1-16,384</p> </li> <li> <p>io1:
     * 4-16,384</p> </li> <li> <p>st1 and sc1: 125-16,384</p> </li> <li> <p>standard:
     * 1-1,024</p> </li> </ul> <p>You must specify either <code>SnapshotId</code> or
     * <code>VolumeSize</code>. If you specify both <code>SnapshotId</code> and
     * <code>VolumeSize</code>, the volume size must be equal or greater than the size
     * of the snapshot.</p>
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * <p>The volume size, in GiBs. The following are the supported volumes sizes for
     * each volume type:</p> <ul> <li> <p>gp2 and gp3: 1-16,384</p> </li> <li> <p>io1:
     * 4-16,384</p> </li> <li> <p>st1 and sc1: 125-16,384</p> </li> <li> <p>standard:
     * 1-1,024</p> </li> </ul> <p>You must specify either <code>SnapshotId</code> or
     * <code>VolumeSize</code>. If you specify both <code>SnapshotId</code> and
     * <code>VolumeSize</code>, the volume size must be equal or greater than the size
     * of the snapshot.</p>
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * <p>The volume size, in GiBs. The following are the supported volumes sizes for
     * each volume type:</p> <ul> <li> <p>gp2 and gp3: 1-16,384</p> </li> <li> <p>io1:
     * 4-16,384</p> </li> <li> <p>st1 and sc1: 125-16,384</p> </li> <li> <p>standard:
     * 1-1,024</p> </li> </ul> <p>You must specify either <code>SnapshotId</code> or
     * <code>VolumeSize</code>. If you specify both <code>SnapshotId</code> and
     * <code>VolumeSize</code>, the volume size must be equal or greater than the size
     * of the snapshot.</p>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}


    /**
     * <p>The volume type. Valid values are as follows:</p> <ul> <li> <p>
     * <code>gp2</code> </p> </li> <li> <p> <code>gp3</code> </p> </li> <li> <p>
     * <code>io1</code> </p> </li> <li> <p> <code>sc1</code> </p> </li> <li> <p>
     * <code>st1</code> </p> </li> <li> <p> <code>standard</code> </p> </li> </ul>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>The volume type. Valid values are as follows:</p> <ul> <li> <p>
     * <code>gp2</code> </p> </li> <li> <p> <code>gp3</code> </p> </li> <li> <p>
     * <code>io1</code> </p> </li> <li> <p> <code>sc1</code> </p> </li> <li> <p>
     * <code>st1</code> </p> </li> <li> <p> <code>standard</code> </p> </li> </ul>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>The volume type. Valid values are as follows:</p> <ul> <li> <p>
     * <code>gp2</code> </p> </li> <li> <p> <code>gp3</code> </p> </li> <li> <p>
     * <code>io1</code> </p> </li> <li> <p> <code>sc1</code> </p> </li> <li> <p>
     * <code>st1</code> </p> </li> <li> <p> <code>standard</code> </p> </li> </ul>
     */
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>The volume type. Valid values are as follows:</p> <ul> <li> <p>
     * <code>gp2</code> </p> </li> <li> <p> <code>gp3</code> </p> </li> <li> <p>
     * <code>io1</code> </p> </li> <li> <p> <code>sc1</code> </p> </li> <li> <p>
     * <code>st1</code> </p> </li> <li> <p> <code>standard</code> </p> </li> </ul>
     */
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>The volume type. Valid values are as follows:</p> <ul> <li> <p>
     * <code>gp2</code> </p> </li> <li> <p> <code>gp3</code> </p> </li> <li> <p>
     * <code>io1</code> </p> </li> <li> <p> <code>sc1</code> </p> </li> <li> <p>
     * <code>st1</code> </p> </li> <li> <p> <code>standard</code> </p> </li> </ul>
     */
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    /**
     * <p>The volume type. Valid values are as follows:</p> <ul> <li> <p>
     * <code>gp2</code> </p> </li> <li> <p> <code>gp3</code> </p> </li> <li> <p>
     * <code>io1</code> </p> </li> <li> <p> <code>sc1</code> </p> </li> <li> <p>
     * <code>st1</code> </p> </li> <li> <p> <code>standard</code> </p> </li> </ul>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    /**
     * <p>The volume type. Valid values are as follows:</p> <ul> <li> <p>
     * <code>gp2</code> </p> </li> <li> <p> <code>gp3</code> </p> </li> <li> <p>
     * <code>io1</code> </p> </li> <li> <p> <code>sc1</code> </p> </li> <li> <p>
     * <code>st1</code> </p> </li> <li> <p> <code>standard</code> </p> </li> </ul>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}

    /**
     * <p>The volume type. Valid values are as follows:</p> <ul> <li> <p>
     * <code>gp2</code> </p> </li> <li> <p> <code>gp3</code> </p> </li> <li> <p>
     * <code>io1</code> </p> </li> <li> <p> <code>sc1</code> </p> </li> <li> <p>
     * <code>st1</code> </p> </li> <li> <p> <code>standard</code> </p> </li> </ul>
     */
    inline AwsAutoScalingLaunchConfigurationBlockDeviceMappingsEbsDetails& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}

  private:

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet = false;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
