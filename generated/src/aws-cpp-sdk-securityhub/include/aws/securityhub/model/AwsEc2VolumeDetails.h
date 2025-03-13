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
    AWS_SECURITYHUB_API AwsEc2VolumeDetails() = default;
    AWS_SECURITYHUB_API AwsEc2VolumeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VolumeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates when the volume was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::String>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::String>
    AwsEc2VolumeDetails& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device name for the volume that is attached to the instance. </p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    AwsEc2VolumeDetails& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the volume is encrypted.</p>
     */
    inline bool GetEncrypted() const { return m_encrypted; }
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }
    inline AwsEc2VolumeDetails& WithEncrypted(bool value) { SetEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume, in GiBs.</p>
     */
    inline int GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline AwsEc2VolumeDetails& WithSize(int value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot from which the volume was created.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    AwsEc2VolumeDetails& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume state. Valid values are as follows:</p> <ul> <li> <p>
     * <code>available</code> </p> </li> <li> <p> <code>creating</code> </p> </li> <li>
     * <p> <code>deleted</code> </p> </li> <li> <p> <code>deleting</code> </p> </li>
     * <li> <p> <code>error</code> </p> </li> <li> <p> <code>in-use</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsEc2VolumeDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key that was used to protect the volume encryption key for
     * the volume.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    AwsEc2VolumeDetails& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume attachments.</p>
     */
    inline const Aws::Vector<AwsEc2VolumeAttachment>& GetAttachments() const { return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    template<typename AttachmentsT = Aws::Vector<AwsEc2VolumeAttachment>>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Aws::Vector<AwsEc2VolumeAttachment>>
    AwsEc2VolumeDetails& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = AwsEc2VolumeAttachment>
    AwsEc2VolumeDetails& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the volume. </p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    AwsEc2VolumeDetails& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume type. </p>
     */
    inline const Aws::String& GetVolumeType() const { return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    template<typename VolumeTypeT = Aws::String>
    void SetVolumeType(VolumeTypeT&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::forward<VolumeTypeT>(value); }
    template<typename VolumeTypeT = Aws::String>
    AwsEc2VolumeDetails& WithVolumeType(VolumeTypeT&& value) { SetVolumeType(std::forward<VolumeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the volume was scanned or skipped. </p>
     */
    inline const Aws::String& GetVolumeScanStatus() const { return m_volumeScanStatus; }
    inline bool VolumeScanStatusHasBeenSet() const { return m_volumeScanStatusHasBeenSet; }
    template<typename VolumeScanStatusT = Aws::String>
    void SetVolumeScanStatus(VolumeScanStatusT&& value) { m_volumeScanStatusHasBeenSet = true; m_volumeScanStatus = std::forward<VolumeScanStatusT>(value); }
    template<typename VolumeScanStatusT = Aws::String>
    AwsEc2VolumeDetails& WithVolumeScanStatus(VolumeScanStatusT&& value) { SetVolumeScanStatus(std::forward<VolumeScanStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    bool m_encrypted{false};
    bool m_encryptedHasBeenSet = false;

    int m_size{0};
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
