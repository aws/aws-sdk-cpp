/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/VolumeInfo.h>
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
  /**
   * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
   * <a>ListVolumesOutput$Marker</a> </p> </li> <li> <p>
   * <a>ListVolumesOutput$VolumeInfos</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListVolumesOutput">AWS
   * API Reference</a></p>
   */
  class ListVolumesResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListVolumesResult() = default;
    AWS_STORAGEGATEWAY_API ListVolumesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListVolumesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    ListVolumesResult& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the marker in your next request to continue pagination of iSCSI volumes.
     * If there are no more volumes to list, this field does not appear in the response
     * body.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListVolumesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>VolumeInfo</a> objects, where each object describes an iSCSI
     * volume. If no volumes are defined for the gateway, then <code>VolumeInfos</code>
     * is an empty array "[]".</p>
     */
    inline const Aws::Vector<VolumeInfo>& GetVolumeInfos() const { return m_volumeInfos; }
    template<typename VolumeInfosT = Aws::Vector<VolumeInfo>>
    void SetVolumeInfos(VolumeInfosT&& value) { m_volumeInfosHasBeenSet = true; m_volumeInfos = std::forward<VolumeInfosT>(value); }
    template<typename VolumeInfosT = Aws::Vector<VolumeInfo>>
    ListVolumesResult& WithVolumeInfos(VolumeInfosT&& value) { SetVolumeInfos(std::forward<VolumeInfosT>(value)); return *this;}
    template<typename VolumeInfosT = VolumeInfo>
    ListVolumesResult& AddVolumeInfos(VolumeInfosT&& value) { m_volumeInfosHasBeenSet = true; m_volumeInfos.emplace_back(std::forward<VolumeInfosT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVolumesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<VolumeInfo> m_volumeInfos;
    bool m_volumeInfosHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
