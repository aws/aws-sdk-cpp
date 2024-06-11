﻿/**
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
   * <p>Describes an iSCSI cached volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CachediSCSIVolume">AWS
   * API Reference</a></p>
   */
  class CachediSCSIVolume
  {
  public:
    AWS_STORAGEGATEWAY_API CachediSCSIVolume();
    AWS_STORAGEGATEWAY_API CachediSCSIVolume(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API CachediSCSIVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }
    inline bool VolumeARNHasBeenSet() const { return m_volumeARNHasBeenSet; }
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::move(value); }
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }
    inline CachediSCSIVolume& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}
    inline CachediSCSIVolume& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}
    inline CachediSCSIVolume& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the volume, e.g., vol-AE4B946D.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }
    inline CachediSCSIVolume& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}
    inline CachediSCSIVolume& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}
    inline CachediSCSIVolume& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One of the VolumeType enumeration values that describes the type of the
     * volume.</p>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }
    inline CachediSCSIVolume& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}
    inline CachediSCSIVolume& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}
    inline CachediSCSIVolume& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One of the VolumeStatus values that indicates the state of the storage
     * volume.</p>
     */
    inline const Aws::String& GetVolumeStatus() const{ return m_volumeStatus; }
    inline bool VolumeStatusHasBeenSet() const { return m_volumeStatusHasBeenSet; }
    inline void SetVolumeStatus(const Aws::String& value) { m_volumeStatusHasBeenSet = true; m_volumeStatus = value; }
    inline void SetVolumeStatus(Aws::String&& value) { m_volumeStatusHasBeenSet = true; m_volumeStatus = std::move(value); }
    inline void SetVolumeStatus(const char* value) { m_volumeStatusHasBeenSet = true; m_volumeStatus.assign(value); }
    inline CachediSCSIVolume& WithVolumeStatus(const Aws::String& value) { SetVolumeStatus(value); return *this;}
    inline CachediSCSIVolume& WithVolumeStatus(Aws::String&& value) { SetVolumeStatus(std::move(value)); return *this;}
    inline CachediSCSIVolume& WithVolumeStatus(const char* value) { SetVolumeStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether a storage volume is attached to or detached
     * from a gateway. For more information, see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/managing-volumes.html#attach-detach-volume">Moving
     * your volumes to a different gateway</a>.</p>
     */
    inline const Aws::String& GetVolumeAttachmentStatus() const{ return m_volumeAttachmentStatus; }
    inline bool VolumeAttachmentStatusHasBeenSet() const { return m_volumeAttachmentStatusHasBeenSet; }
    inline void SetVolumeAttachmentStatus(const Aws::String& value) { m_volumeAttachmentStatusHasBeenSet = true; m_volumeAttachmentStatus = value; }
    inline void SetVolumeAttachmentStatus(Aws::String&& value) { m_volumeAttachmentStatusHasBeenSet = true; m_volumeAttachmentStatus = std::move(value); }
    inline void SetVolumeAttachmentStatus(const char* value) { m_volumeAttachmentStatusHasBeenSet = true; m_volumeAttachmentStatus.assign(value); }
    inline CachediSCSIVolume& WithVolumeAttachmentStatus(const Aws::String& value) { SetVolumeAttachmentStatus(value); return *this;}
    inline CachediSCSIVolume& WithVolumeAttachmentStatus(Aws::String&& value) { SetVolumeAttachmentStatus(std::move(value)); return *this;}
    inline CachediSCSIVolume& WithVolumeAttachmentStatus(const char* value) { SetVolumeAttachmentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the volume capacity.</p>
     */
    inline long long GetVolumeSizeInBytes() const{ return m_volumeSizeInBytes; }
    inline bool VolumeSizeInBytesHasBeenSet() const { return m_volumeSizeInBytesHasBeenSet; }
    inline void SetVolumeSizeInBytes(long long value) { m_volumeSizeInBytesHasBeenSet = true; m_volumeSizeInBytes = value; }
    inline CachediSCSIVolume& WithVolumeSizeInBytes(long long value) { SetVolumeSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the percentage complete if the volume is restoring or
     * bootstrapping that represents the percent of data transferred. This field does
     * not appear in the response if the cached volume is not restoring or
     * bootstrapping.</p>
     */
    inline double GetVolumeProgress() const{ return m_volumeProgress; }
    inline bool VolumeProgressHasBeenSet() const { return m_volumeProgressHasBeenSet; }
    inline void SetVolumeProgress(double value) { m_volumeProgressHasBeenSet = true; m_volumeProgress = value; }
    inline CachediSCSIVolume& WithVolumeProgress(double value) { SetVolumeProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the cached volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g., snap-78e22663. Otherwise, this field is not
     * included.</p>
     */
    inline const Aws::String& GetSourceSnapshotId() const{ return m_sourceSnapshotId; }
    inline bool SourceSnapshotIdHasBeenSet() const { return m_sourceSnapshotIdHasBeenSet; }
    inline void SetSourceSnapshotId(const Aws::String& value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId = value; }
    inline void SetSourceSnapshotId(Aws::String&& value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId = std::move(value); }
    inline void SetSourceSnapshotId(const char* value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId.assign(value); }
    inline CachediSCSIVolume& WithSourceSnapshotId(const Aws::String& value) { SetSourceSnapshotId(value); return *this;}
    inline CachediSCSIVolume& WithSourceSnapshotId(Aws::String&& value) { SetSourceSnapshotId(std::move(value)); return *this;}
    inline CachediSCSIVolume& WithSourceSnapshotId(const char* value) { SetSourceSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p>
     */
    inline const VolumeiSCSIAttributes& GetVolumeiSCSIAttributes() const{ return m_volumeiSCSIAttributes; }
    inline bool VolumeiSCSIAttributesHasBeenSet() const { return m_volumeiSCSIAttributesHasBeenSet; }
    inline void SetVolumeiSCSIAttributes(const VolumeiSCSIAttributes& value) { m_volumeiSCSIAttributesHasBeenSet = true; m_volumeiSCSIAttributes = value; }
    inline void SetVolumeiSCSIAttributes(VolumeiSCSIAttributes&& value) { m_volumeiSCSIAttributesHasBeenSet = true; m_volumeiSCSIAttributes = std::move(value); }
    inline CachediSCSIVolume& WithVolumeiSCSIAttributes(const VolumeiSCSIAttributes& value) { SetVolumeiSCSIAttributes(value); return *this;}
    inline CachediSCSIVolume& WithVolumeiSCSIAttributes(VolumeiSCSIAttributes&& value) { SetVolumeiSCSIAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the volume was created. Volumes created prior to March 28, 2017
     * don’t have this timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline CachediSCSIVolume& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline CachediSCSIVolume& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the data stored on the volume in bytes. This value is calculated
     * based on the number of blocks that are touched, instead of the actual amount of
     * data written. This value can be useful for sequential write patterns but less
     * accurate for random write patterns. <code>VolumeUsedInBytes</code> is different
     * from the compressed size of the volume, which is the value that is used to
     * calculate your bill.</p>  <p>This value is not available for volumes
     * created prior to May 13, 2015, until you store data on the volume.</p> <p>If you
     * use a delete tool that overwrites the data on your volume with random data, your
     * usage will not be reduced. This is because the random data is not compressible.
     * If you want to reduce the amount of billed storage on your volume, we recommend
     * overwriting your files with zeros to compress the data to a negligible amount of
     * actual storage.</p> 
     */
    inline long long GetVolumeUsedInBytes() const{ return m_volumeUsedInBytes; }
    inline bool VolumeUsedInBytesHasBeenSet() const { return m_volumeUsedInBytesHasBeenSet; }
    inline void SetVolumeUsedInBytes(long long value) { m_volumeUsedInBytesHasBeenSet = true; m_volumeUsedInBytes = value; }
    inline CachediSCSIVolume& WithVolumeUsedInBytes(long long value) { SetVolumeUsedInBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }
    inline CachediSCSIVolume& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}
    inline CachediSCSIVolume& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}
    inline CachediSCSIVolume& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}
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
    inline const Aws::String& GetTargetName() const{ return m_targetName; }
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }
    inline void SetTargetName(const Aws::String& value) { m_targetNameHasBeenSet = true; m_targetName = value; }
    inline void SetTargetName(Aws::String&& value) { m_targetNameHasBeenSet = true; m_targetName = std::move(value); }
    inline void SetTargetName(const char* value) { m_targetNameHasBeenSet = true; m_targetName.assign(value); }
    inline CachediSCSIVolume& WithTargetName(const Aws::String& value) { SetTargetName(value); return *this;}
    inline CachediSCSIVolume& WithTargetName(Aws::String&& value) { SetTargetName(std::move(value)); return *this;}
    inline CachediSCSIVolume& WithTargetName(const char* value) { SetTargetName(value); return *this;}
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

    long long m_volumeSizeInBytes;
    bool m_volumeSizeInBytesHasBeenSet = false;

    double m_volumeProgress;
    bool m_volumeProgressHasBeenSet = false;

    Aws::String m_sourceSnapshotId;
    bool m_sourceSnapshotIdHasBeenSet = false;

    VolumeiSCSIAttributes m_volumeiSCSIAttributes;
    bool m_volumeiSCSIAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    long long m_volumeUsedInBytes;
    bool m_volumeUsedInBytesHasBeenSet = false;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet = false;

    Aws::String m_targetName;
    bool m_targetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
