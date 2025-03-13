/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/VolumeRecoveryPointInfo.h>
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
  class ListVolumeRecoveryPointsResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListVolumeRecoveryPointsResult() = default;
    AWS_STORAGEGATEWAY_API ListVolumeRecoveryPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListVolumeRecoveryPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    ListVolumeRecoveryPointsResult& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>VolumeRecoveryPointInfo</a> objects.</p>
     */
    inline const Aws::Vector<VolumeRecoveryPointInfo>& GetVolumeRecoveryPointInfos() const { return m_volumeRecoveryPointInfos; }
    template<typename VolumeRecoveryPointInfosT = Aws::Vector<VolumeRecoveryPointInfo>>
    void SetVolumeRecoveryPointInfos(VolumeRecoveryPointInfosT&& value) { m_volumeRecoveryPointInfosHasBeenSet = true; m_volumeRecoveryPointInfos = std::forward<VolumeRecoveryPointInfosT>(value); }
    template<typename VolumeRecoveryPointInfosT = Aws::Vector<VolumeRecoveryPointInfo>>
    ListVolumeRecoveryPointsResult& WithVolumeRecoveryPointInfos(VolumeRecoveryPointInfosT&& value) { SetVolumeRecoveryPointInfos(std::forward<VolumeRecoveryPointInfosT>(value)); return *this;}
    template<typename VolumeRecoveryPointInfosT = VolumeRecoveryPointInfo>
    ListVolumeRecoveryPointsResult& AddVolumeRecoveryPointInfos(VolumeRecoveryPointInfosT&& value) { m_volumeRecoveryPointInfosHasBeenSet = true; m_volumeRecoveryPointInfos.emplace_back(std::forward<VolumeRecoveryPointInfosT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVolumeRecoveryPointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::Vector<VolumeRecoveryPointInfo> m_volumeRecoveryPointInfos;
    bool m_volumeRecoveryPointInfosHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
