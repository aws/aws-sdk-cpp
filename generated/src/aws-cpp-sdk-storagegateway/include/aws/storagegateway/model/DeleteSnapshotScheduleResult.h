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
  class DeleteSnapshotScheduleResult
  {
  public:
    AWS_STORAGEGATEWAY_API DeleteSnapshotScheduleResult() = default;
    AWS_STORAGEGATEWAY_API DeleteSnapshotScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DeleteSnapshotScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The volume which snapshot schedule was deleted.</p>
     */
    inline const Aws::String& GetVolumeARN() const { return m_volumeARN; }
    template<typename VolumeARNT = Aws::String>
    void SetVolumeARN(VolumeARNT&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::forward<VolumeARNT>(value); }
    template<typename VolumeARNT = Aws::String>
    DeleteSnapshotScheduleResult& WithVolumeARN(VolumeARNT&& value) { SetVolumeARN(std::forward<VolumeARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteSnapshotScheduleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
