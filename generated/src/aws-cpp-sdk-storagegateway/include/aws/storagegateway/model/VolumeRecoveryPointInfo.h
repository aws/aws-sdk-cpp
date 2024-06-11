/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes a storage volume recovery point object.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/VolumeRecoveryPointInfo">AWS
   * API Reference</a></p>
   */
  class VolumeRecoveryPointInfo
  {
  public:
    AWS_STORAGEGATEWAY_API VolumeRecoveryPointInfo();
    AWS_STORAGEGATEWAY_API VolumeRecoveryPointInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API VolumeRecoveryPointInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }
    inline bool VolumeARNHasBeenSet() const { return m_volumeARNHasBeenSet; }
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::move(value); }
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }
    inline VolumeRecoveryPointInfo& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}
    inline VolumeRecoveryPointInfo& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}
    inline VolumeRecoveryPointInfo& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the volume in bytes.</p>
     */
    inline long long GetVolumeSizeInBytes() const{ return m_volumeSizeInBytes; }
    inline bool VolumeSizeInBytesHasBeenSet() const { return m_volumeSizeInBytesHasBeenSet; }
    inline void SetVolumeSizeInBytes(long long value) { m_volumeSizeInBytesHasBeenSet = true; m_volumeSizeInBytes = value; }
    inline VolumeRecoveryPointInfo& WithVolumeSizeInBytes(long long value) { SetVolumeSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the data stored on the volume in bytes.</p>  <p>This value
     * is not available for volumes created prior to May 13, 2015, until you store data
     * on the volume.</p> 
     */
    inline long long GetVolumeUsageInBytes() const{ return m_volumeUsageInBytes; }
    inline bool VolumeUsageInBytesHasBeenSet() const { return m_volumeUsageInBytesHasBeenSet; }
    inline void SetVolumeUsageInBytes(long long value) { m_volumeUsageInBytesHasBeenSet = true; m_volumeUsageInBytes = value; }
    inline VolumeRecoveryPointInfo& WithVolumeUsageInBytes(long long value) { SetVolumeUsageInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the recovery point was taken.</p>
     */
    inline const Aws::String& GetVolumeRecoveryPointTime() const{ return m_volumeRecoveryPointTime; }
    inline bool VolumeRecoveryPointTimeHasBeenSet() const { return m_volumeRecoveryPointTimeHasBeenSet; }
    inline void SetVolumeRecoveryPointTime(const Aws::String& value) { m_volumeRecoveryPointTimeHasBeenSet = true; m_volumeRecoveryPointTime = value; }
    inline void SetVolumeRecoveryPointTime(Aws::String&& value) { m_volumeRecoveryPointTimeHasBeenSet = true; m_volumeRecoveryPointTime = std::move(value); }
    inline void SetVolumeRecoveryPointTime(const char* value) { m_volumeRecoveryPointTimeHasBeenSet = true; m_volumeRecoveryPointTime.assign(value); }
    inline VolumeRecoveryPointInfo& WithVolumeRecoveryPointTime(const Aws::String& value) { SetVolumeRecoveryPointTime(value); return *this;}
    inline VolumeRecoveryPointInfo& WithVolumeRecoveryPointTime(Aws::String&& value) { SetVolumeRecoveryPointTime(std::move(value)); return *this;}
    inline VolumeRecoveryPointInfo& WithVolumeRecoveryPointTime(const char* value) { SetVolumeRecoveryPointTime(value); return *this;}
    ///@}
  private:

    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet = false;

    long long m_volumeSizeInBytes;
    bool m_volumeSizeInBytesHasBeenSet = false;

    long long m_volumeUsageInBytes;
    bool m_volumeUsageInBytesHasBeenSet = false;

    Aws::String m_volumeRecoveryPointTime;
    bool m_volumeRecoveryPointTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
