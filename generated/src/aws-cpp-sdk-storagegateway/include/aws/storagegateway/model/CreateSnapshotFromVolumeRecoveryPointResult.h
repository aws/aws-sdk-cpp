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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  class CreateSnapshotFromVolumeRecoveryPointResult
  {
  public:
    AWS_STORAGEGATEWAY_API CreateSnapshotFromVolumeRecoveryPointResult();
    AWS_STORAGEGATEWAY_API CreateSnapshotFromVolumeRecoveryPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API CreateSnapshotFromVolumeRecoveryPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARN = value; }
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARN = std::move(value); }
    inline void SetVolumeARN(const char* value) { m_volumeARN.assign(value); }
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the volume was created from the recovery point.</p>
     */
    inline const Aws::String& GetVolumeRecoveryPointTime() const{ return m_volumeRecoveryPointTime; }
    inline void SetVolumeRecoveryPointTime(const Aws::String& value) { m_volumeRecoveryPointTime = value; }
    inline void SetVolumeRecoveryPointTime(Aws::String&& value) { m_volumeRecoveryPointTime = std::move(value); }
    inline void SetVolumeRecoveryPointTime(const char* value) { m_volumeRecoveryPointTime.assign(value); }
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeRecoveryPointTime(const Aws::String& value) { SetVolumeRecoveryPointTime(value); return *this;}
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeRecoveryPointTime(Aws::String&& value) { SetVolumeRecoveryPointTime(std::move(value)); return *this;}
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeRecoveryPointTime(const char* value) { SetVolumeRecoveryPointTime(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;

    Aws::String m_volumeARN;

    Aws::String m_volumeRecoveryPointTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
