/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/CacheReportInfo.h>
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
  class ListCacheReportsResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListCacheReportsResult() = default;
    AWS_STORAGEGATEWAY_API ListCacheReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListCacheReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of existing cache reports for all file shares associated with your
     * Amazon Web Services account. This list includes all information provided by the
     * <code>DescribeCacheReport</code> action, such as report status, completion
     * progress, start time, end time, filters, and tags.</p>
     */
    inline const Aws::Vector<CacheReportInfo>& GetCacheReportList() const { return m_cacheReportList; }
    template<typename CacheReportListT = Aws::Vector<CacheReportInfo>>
    void SetCacheReportList(CacheReportListT&& value) { m_cacheReportListHasBeenSet = true; m_cacheReportList = std::forward<CacheReportListT>(value); }
    template<typename CacheReportListT = Aws::Vector<CacheReportInfo>>
    ListCacheReportsResult& WithCacheReportList(CacheReportListT&& value) { SetCacheReportList(std::forward<CacheReportListT>(value)); return *this;}
    template<typename CacheReportListT = CacheReportInfo>
    ListCacheReportsResult& AddCacheReportList(CacheReportListT&& value) { m_cacheReportListHasBeenSet = true; m_cacheReportList.emplace_back(std::forward<CacheReportListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListCacheReportsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCacheReportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CacheReportInfo> m_cacheReportList;
    bool m_cacheReportListHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
