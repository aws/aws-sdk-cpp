/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/VolumeiSCSIAttributes.h>
#include <aws/core/utils/DateTime.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes an iSCSI stored volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/StorediSCSIVolume">AWS
   * API Reference</a></p>
   */
  class StorediSCSIVolume
  {
  public:
    AWS_STORAGEGATEWAY_API StorediSCSIVolume() = default;
    AWS_STORAGEGATEWAY_API StorediSCSIVolume(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API StorediSCSIVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume.</p>
     */
    inline const Aws::String& GetVolumeARN() const { return m_volumeARN; }
    inline bool VolumeARNHasBeenSet() const { return m_volumeARNHasBeenSet; }
    template<typename VolumeARNT = Aws::String>
    void SetVolumeARN(VolumeARNT&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::forward<VolumeARNT>(value); }
    template<typename VolumeARNT = Aws::String>
    StorediSCSIVolume& WithVolumeARN(VolumeARNT&& value) { SetVolumeARN(std::forward<VolumeARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the volume, e.g., vol-AE4B946D.</p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    StorediSCSIVolume& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One of the VolumeType enumeration values describing the type of the
     * volume.</p>
     */
    inline const Aws::String& GetVolumeType() const { return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    template<typename VolumeTypeT = Aws::String>
    void SetVolumeType(VolumeTypeT&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::forward<VolumeTypeT>(value); }
    template<typename VolumeTypeT = Aws::String>
    StorediSCSIVolume& WithVolumeType(VolumeTypeT&& value) { SetVolumeType(std::forward<VolumeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One of the VolumeStatus values that indicates the state of the storage
     * volume.</p>
     */
    inline const Aws::String& GetVolumeStatus() const { return m_volumeStatus; }
    inline bool VolumeStatusHasBeenSet() const { return m_volumeStatusHasBeenSet; }
    template<typename VolumeStatusT = Aws::String>
    void SetVolumeStatus(VolumeStatusT&& value) { m_volumeStatusHasBeenSet = true; m_volumeStatus = std::forward<VolumeStatusT>(value); }
    template<typename VolumeStatusT = Aws::String>
    StorediSCSIVolume& WithVolumeStatus(VolumeStatusT&& value) { SetVolumeStatus(std::forward<VolumeStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether a storage volume is attached to, detached
     * from, or is in the process of detaching from a gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/managing-volumes.html#attach-detach-volume">Moving
     * your volumes to a different gateway</a>.</p>
     */
    inline const Aws::String& GetVolumeAttachmentStatus() const { return m_volumeAttachmentStatus; }
    inline bool VolumeAttachmentStatusHasBeenSet() const { return m_volumeAttachmentStatusHasBeenSet; }
    template<typename VolumeAttachmentStatusT = Aws::String>
    void SetVolumeAttachmentStatus(VolumeAttachmentStatusT&& value) { m_volumeAttachmentStatusHasBeenSet = true; m_volumeAttachmentStatus = std::forward<VolumeAttachmentStatusT>(value); }
    template<typename VolumeAttachmentStatusT = Aws::String>
    StorediSCSIVolume& WithVolumeAttachmentStatus(VolumeAttachmentStatusT&& value) { SetVolumeAttachmentStatus(std::forward<VolumeAttachmentStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume in bytes.</p>
     */
    inline long long GetVolumeSizeInBytes() const { return m_volumeSizeInBytes; }
    inline bool VolumeSizeInBytesHasBeenSet() const { return m_volumeSizeInBytesHasBeenSet; }
    inline void SetVolumeSizeInBytes(long long value) { m_volumeSizeInBytesHasBeenSet = true; m_volumeSizeInBytes = value; }
    inline StorediSCSIVolume& WithVolumeSizeInBytes(long long value) { SetVolumeSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the percentage complete if the volume is restoring or
     * bootstrapping that represents the percent of data transferred. This field does
     * not appear in the response if the stored volume is not restoring or
     * bootstrapping.</p>
     */
    inline double GetVolumeProgress() const { return m_volumeProgress; }
    inline bool VolumeProgressHasBeenSet() const { return m_volumeProgressHasBeenSet; }
    inline void SetVolumeProgress(double value) { m_volumeProgressHasBeenSet = true; m_volumeProgress = value; }
    inline StorediSCSIVolume& WithVolumeProgress(double value) { SetVolumeProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p>
     */
    inline const Aws::String& GetVolumeDiskId() const { return m_volumeDiskId; }
    inline bool VolumeDiskIdHasBeenSet() const { return m_volumeDiskIdHasBeenSet; }
    template<typename VolumeDiskIdT = Aws::String>
    void SetVolumeDiskId(VolumeDiskIdT&& value) { m_volumeDiskIdHasBeenSet = true; m_volumeDiskId = std::forward<VolumeDiskIdT>(value); }
    template<typename VolumeDiskIdT = Aws::String>
    StorediSCSIVolume& WithVolumeDiskId(VolumeDiskIdT&& value) { SetVolumeDiskId(std::forward<VolumeDiskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the stored volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline const Aws::String& GetSourceSnapshotId() const { return m_sourceSnapshotId; }
    inline bool SourceSnapshotIdHasBeenSet() const { return m_sourceSnapshotIdHasBeenSet; }
    template<typename SourceSnapshotIdT = Aws::String>
    void SetSourceSnapshotId(SourceSnapshotIdT&& value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId = std::forward<SourceSnapshotIdT>(value); }
    template<typename SourceSnapshotIdT = Aws::String>
    StorediSCSIVolume& WithSourceSnapshotId(SourceSnapshotIdT&& value) { SetSourceSnapshotId(std::forward<SourceSnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if when the stored volume was created, existing data on the
     * underlying local disk was preserved.</p> <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline bool GetPreservedExistingData() const { return m_preservedExistingData; }
    inline bool PreservedExistingDataHasBeenSet() const { return m_preservedExistingDataHasBeenSet; }
    inline void SetPreservedExistingData(bool value) { m_preservedExistingDataHasBeenSet = true; m_preservedExistingData = value; }
    inline StorediSCSIVolume& WithPreservedExistingData(bool value) { SetPreservedExistingData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p>
     */
    inline const VolumeiSCSIAttributes& GetVolumeiSCSIAttributes() const { return m_volumeiSCSIAttributes; }
    inline bool VolumeiSCSIAttributesHasBeenSet() const { return m_volumeiSCSIAttributesHasBeenSet; }
    template<typename VolumeiSCSIAttributesT = VolumeiSCSIAttributes>
    void SetVolumeiSCSIAttributes(VolumeiSCSIAttributesT&& value) { m_volumeiSCSIAttributesHasBeenSet = true; m_volumeiSCSIAttributes = std::forward<VolumeiSCSIAttributesT>(value); }
    template<typename VolumeiSCSIAttributesT = VolumeiSCSIAttributes>
    StorediSCSIVolume& WithVolumeiSCSIAttributes(VolumeiSCSIAttributesT&& value) { SetVolumeiSCSIAttributes(std::forward<VolumeiSCSIAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the volume was created. Volumes created prior to March 28, 2017
     * don’t have this timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    StorediSCSIVolume& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the data stored on the volume in bytes. This value is calculated
     * based on the number of blocks that are touched, instead of the actual amount of
     * data written. This value can be useful for sequential write patterns but less
     * accurate for random write patterns. <code>VolumeUsedInBytes</code> is different
     * from the compressed size of the volume, which is the value that is used to
     * calculate your bill.</p>  <p>This value is not available for volumes
     * created prior to May 13, 2015, until you store data on the volume.</p> 
     */
    inline long long GetVolumeUsedInBytes() const { return m_volumeUsedInBytes; }
    inline bool VolumeUsedInBytesHasBeenSet() const { return m_volumeUsedInBytesHasBeenSet; }
    inline void SetVolumeUsedInBytes(long long value) { m_volumeUsedInBytesHasBeenSet = true; m_volumeUsedInBytes = value; }
    inline StorediSCSIVolume& WithVolumeUsedInBytes(long long value) { SetVolumeUsedInBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetKMSKey() const { return m_kMSKey; }
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }
    template<typename KMSKeyT = Aws::String>
    void SetKMSKey(KMSKeyT&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::forward<KMSKeyT>(value); }
    template<typename KMSKeyT = Aws::String>
    StorediSCSIVolume& WithKMSKey(KMSKeyT&& value) { SetKMSKey(std::forward<KMSKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline const Aws::String& GetTargetName() const { return m_targetName; }
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }
    template<typename TargetNameT = Aws::String>
    void SetTargetName(TargetNameT&& value) { m_targetNameHasBeenSet = true; m_targetName = std::forward<TargetNameT>(value); }
    template<typename TargetNameT = Aws::String>
    StorediSCSIVolume& WithTargetName(TargetNameT&& value) { SetTargetName(std::forward<TargetNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet = false;

    Aws::String m_volumeStatus;
    bool m_volumeStatusHasBeenSet = false;

    Aws::String m_volumeAttachmentStatus;
    bool m_volumeAttachmentStatusHasBeenSet = false;

    long long m_volumeSizeInBytes{0};
    bool m_volumeSizeInBytesHasBeenSet = false;

    double m_volumeProgress{0.0};
    bool m_volumeProgressHasBeenSet = false;

    Aws::String m_volumeDiskId;
    bool m_volumeDiskIdHasBeenSet = false;

    Aws::String m_sourceSnapshotId;
    bool m_sourceSnapshotIdHasBeenSet = false;

    bool m_preservedExistingData{false};
    bool m_preservedExistingDataHasBeenSet = false;

    VolumeiSCSIAttributes m_volumeiSCSIAttributes;
    bool m_volumeiSCSIAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    long long m_volumeUsedInBytes{0};
    bool m_volumeUsedInBytesHasBeenSet = false;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet = false;

    Aws::String m_targetName;
    bool m_targetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
