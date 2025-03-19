/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/PoolInfo.h>
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
  class ListTapePoolsResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListTapePoolsResult() = default;
    AWS_STORAGEGATEWAY_API ListTapePoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListTapePoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>PoolInfo</code> objects, where each object describes a
     * single custom tape pool. If there are no custom tape pools, the
     * <code>PoolInfos</code> is an empty array. </p>
     */
    inline const Aws::Vector<PoolInfo>& GetPoolInfos() const { return m_poolInfos; }
    template<typename PoolInfosT = Aws::Vector<PoolInfo>>
    void SetPoolInfos(PoolInfosT&& value) { m_poolInfosHasBeenSet = true; m_poolInfos = std::forward<PoolInfosT>(value); }
    template<typename PoolInfosT = Aws::Vector<PoolInfo>>
    ListTapePoolsResult& WithPoolInfos(PoolInfosT&& value) { SetPoolInfos(std::forward<PoolInfosT>(value)); return *this;}
    template<typename PoolInfosT = PoolInfo>
    ListTapePoolsResult& AddPoolInfos(PoolInfosT&& value) { m_poolInfosHasBeenSet = true; m_poolInfos.emplace_back(std::forward<PoolInfosT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that indicates the position at which to begin the returned list of
     * tape pools. Use the marker in your next request to continue pagination of tape
     * pools. If there are no more tape pools to list, this element does not appear in
     * the response body. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListTapePoolsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTapePoolsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PoolInfo> m_poolInfos;
    bool m_poolInfosHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
