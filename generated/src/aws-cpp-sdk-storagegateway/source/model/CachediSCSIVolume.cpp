﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/CachediSCSIVolume.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

CachediSCSIVolume::CachediSCSIVolume(JsonView jsonValue)
{
  *this = jsonValue;
}

CachediSCSIVolume& CachediSCSIVolume::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VolumeARN"))
  {
    m_volumeARN = jsonValue.GetString("VolumeARN");
    m_volumeARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeId"))
  {
    m_volumeId = jsonValue.GetString("VolumeId");
    m_volumeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeType"))
  {
    m_volumeType = jsonValue.GetString("VolumeType");
    m_volumeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeStatus"))
  {
    m_volumeStatus = jsonValue.GetString("VolumeStatus");
    m_volumeStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeAttachmentStatus"))
  {
    m_volumeAttachmentStatus = jsonValue.GetString("VolumeAttachmentStatus");
    m_volumeAttachmentStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeSizeInBytes"))
  {
    m_volumeSizeInBytes = jsonValue.GetInt64("VolumeSizeInBytes");
    m_volumeSizeInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeProgress"))
  {
    m_volumeProgress = jsonValue.GetDouble("VolumeProgress");
    m_volumeProgressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceSnapshotId"))
  {
    m_sourceSnapshotId = jsonValue.GetString("SourceSnapshotId");
    m_sourceSnapshotIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeiSCSIAttributes"))
  {
    m_volumeiSCSIAttributes = jsonValue.GetObject("VolumeiSCSIAttributes");
    m_volumeiSCSIAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeUsedInBytes"))
  {
    m_volumeUsedInBytes = jsonValue.GetInt64("VolumeUsedInBytes");
    m_volumeUsedInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KMSKey"))
  {
    m_kMSKey = jsonValue.GetString("KMSKey");
    m_kMSKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetName"))
  {
    m_targetName = jsonValue.GetString("TargetName");
    m_targetNameHasBeenSet = true;
  }
  return *this;
}

JsonValue CachediSCSIVolume::Jsonize() const
{
  JsonValue payload;

  if(m_volumeARNHasBeenSet)
  {
   payload.WithString("VolumeARN", m_volumeARN);

  }

  if(m_volumeIdHasBeenSet)
  {
   payload.WithString("VolumeId", m_volumeId);

  }

  if(m_volumeTypeHasBeenSet)
  {
   payload.WithString("VolumeType", m_volumeType);

  }

  if(m_volumeStatusHasBeenSet)
  {
   payload.WithString("VolumeStatus", m_volumeStatus);

  }

  if(m_volumeAttachmentStatusHasBeenSet)
  {
   payload.WithString("VolumeAttachmentStatus", m_volumeAttachmentStatus);

  }

  if(m_volumeSizeInBytesHasBeenSet)
  {
   payload.WithInt64("VolumeSizeInBytes", m_volumeSizeInBytes);

  }

  if(m_volumeProgressHasBeenSet)
  {
   payload.WithDouble("VolumeProgress", m_volumeProgress);

  }

  if(m_sourceSnapshotIdHasBeenSet)
  {
   payload.WithString("SourceSnapshotId", m_sourceSnapshotId);

  }

  if(m_volumeiSCSIAttributesHasBeenSet)
  {
   payload.WithObject("VolumeiSCSIAttributes", m_volumeiSCSIAttributes.Jsonize());

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_volumeUsedInBytesHasBeenSet)
  {
   payload.WithInt64("VolumeUsedInBytes", m_volumeUsedInBytes);

  }

  if(m_kMSKeyHasBeenSet)
  {
   payload.WithString("KMSKey", m_kMSKey);

  }

  if(m_targetNameHasBeenSet)
  {
   payload.WithString("TargetName", m_targetName);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
