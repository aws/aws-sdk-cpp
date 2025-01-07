/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2VolumeAttachment.h>
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
   * <p>Details about an EC2 volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VolumeDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VolumeDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VolumeDetails();
    AWS_SECURITYHUB_API AwsEc2VolumeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VolumeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates when the volume was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::String& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::String&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline void SetCreateTime(const char* value) { m_createTimeHasBeenSet = true; m_createTime.assign(value); }
    inline AwsEc2VolumeDetails& WithCreateTime(const Aws::String& value) { SetCreateTime(value); return *this;}
    inline AwsEc2VolumeDetails& WithCreateTime(Aws::String&& value) { SetCreateTime(std::move(value)); return *this;}
    inline AwsEc2VolumeDetails& WithCreateTime(const char* value) { SetCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name for the volume that is attached to the instance. </p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }
    inline AwsEc2VolumeDetails& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline AwsEc2VolumeDetails& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline AwsEc2VolumeDetails& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the volume is encrypted.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline AwsEc2VolumeDetails& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume, in GiBs.</p>
     */
    inline int GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline AwsEc2VolumeDetails& WithSize(int value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot from which the volume was created.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }
    inline AwsEc2VolumeDetails& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline AwsEc2VolumeDetails& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline AwsEc2VolumeDetails& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume state. Valid values are as follows:</p> <ul> <li> <p>
     * <code>available</code> </p> </li> <li> <p> <code>creating</code> </p> </li> <li>
     * <p> <code>deleted</code> </p> </li> <li> <p> <code>deleting</code> </p> </li>
     * <li> <p> <code>error</code> </p> </li> <li> <p> <code>in-use</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AwsEc2VolumeDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AwsEc2VolumeDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AwsEc2VolumeDetails& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key that was used to protect the volume encryption key for
     * the volume.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline AwsEc2VolumeDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline AwsEc2VolumeDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline AwsEc2VolumeDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume attachments.</p>
     */
    inline const Aws::Vector<AwsEc2VolumeAttachment>& GetAttachments() const{ return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    inline void SetAttachments(const Aws::Vector<AwsEc2VolumeAttachment>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }
    inline void SetAttachments(Aws::Vector<AwsEc2VolumeAttachment>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }
    inline AwsEc2VolumeDetails& WithAttachments(const Aws::Vector<AwsEc2VolumeAttachment>& value) { SetAttachments(value); return *this;}
    inline AwsEc2VolumeDetails& WithAttachments(Aws::Vector<AwsEc2VolumeAttachment>&& value) { SetAttachments(std::move(value)); return *this;}
    inline AwsEc2VolumeDetails& AddAttachments(const AwsEc2VolumeAttachment& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }
    inline AwsEc2VolumeDetails& AddAttachments(AwsEc2VolumeAttachment&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the volume. </p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }
    inline AwsEc2VolumeDetails& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}
    inline AwsEc2VolumeDetails& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}
    inline AwsEc2VolumeDetails& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume type. </p>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }
    inline AwsEc2VolumeDetails& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}
    inline AwsEc2VolumeDetails& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}
    inline AwsEc2VolumeDetails& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the volume was scanned or skipped. </p>
     */
    inline const Aws::String& GetVolumeScanStatus() const{ return m_volumeScanStatus; }
    inline bool VolumeScanStatusHasBeenSet() const { return m_volumeScanStatusHasBeenSet; }
    inline void SetVolumeScanStatus(const Aws::String& value) { m_volumeScanStatusHasBeenSet = true; m_volumeScanStatus = value; }
    inline void SetVolumeScanStatus(Aws::String&& value) { m_volumeScanStatusHasBeenSet = true; m_volumeScanStatus = std::move(value); }
    inline void SetVolumeScanStatus(const char* value) { m_volumeScanStatusHasBeenSet = true; m_volumeScanStatus.assign(value); }
    inline AwsEc2VolumeDetails& WithVolumeScanStatus(const Aws::String& value) { SetVolumeScanStatus(value); return *this;}
    inline AwsEc2VolumeDetails& WithVolumeScanStatus(Aws::String&& value) { SetVolumeScanStatus(std::move(value)); return *this;}
    inline AwsEc2VolumeDetails& WithVolumeScanStatus(const char* value) { SetVolumeScanStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    int m_size;
    bool m_sizeHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<AwsEc2VolumeAttachment> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    Aws::String m_volumeScanStatus;
    bool m_volumeScanStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
