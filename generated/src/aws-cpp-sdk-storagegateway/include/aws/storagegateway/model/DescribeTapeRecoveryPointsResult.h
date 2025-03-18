/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/TapeRecoveryPointInfo.h>
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
   * <p>DescribeTapeRecoveryPointsOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeTapeRecoveryPointsOutput">AWS
   * API Reference</a></p>
   */
  class DescribeTapeRecoveryPointsResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeTapeRecoveryPointsResult() = default;
    AWS_STORAGEGATEWAY_API DescribeTapeRecoveryPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeTapeRecoveryPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    DescribeTapeRecoveryPointsResult& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of TapeRecoveryPointInfos that are available for the specified
     * gateway.</p>
     */
    inline const Aws::Vector<TapeRecoveryPointInfo>& GetTapeRecoveryPointInfos() const { return m_tapeRecoveryPointInfos; }
    template<typename TapeRecoveryPointInfosT = Aws::Vector<TapeRecoveryPointInfo>>
    void SetTapeRecoveryPointInfos(TapeRecoveryPointInfosT&& value) { m_tapeRecoveryPointInfosHasBeenSet = true; m_tapeRecoveryPointInfos = std::forward<TapeRecoveryPointInfosT>(value); }
    template<typename TapeRecoveryPointInfosT = Aws::Vector<TapeRecoveryPointInfo>>
    DescribeTapeRecoveryPointsResult& WithTapeRecoveryPointInfos(TapeRecoveryPointInfosT&& value) { SetTapeRecoveryPointInfos(std::forward<TapeRecoveryPointInfosT>(value)); return *this;}
    template<typename TapeRecoveryPointInfosT = TapeRecoveryPointInfo>
    DescribeTapeRecoveryPointsResult& AddTapeRecoveryPointInfos(TapeRecoveryPointInfosT&& value) { m_tapeRecoveryPointInfosHasBeenSet = true; m_tapeRecoveryPointInfos.emplace_back(std::forward<TapeRecoveryPointInfosT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An opaque string that indicates the position at which the virtual tape
     * recovery points that were listed for description ended.</p> <p>Use this marker
     * in your next request to list the next set of virtual tape recovery points in the
     * list. If there are no more recovery points to describe, this field does not
     * appear in the response.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeTapeRecoveryPointsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTapeRecoveryPointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::Vector<TapeRecoveryPointInfo> m_tapeRecoveryPointInfos;
    bool m_tapeRecoveryPointInfosHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
