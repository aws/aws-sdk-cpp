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
    AWS_STORAGEGATEWAY_API ListCacheReportsResult();
    AWS_STORAGEGATEWAY_API ListCacheReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListCacheReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of existing cache reports for all file shares associated with your
     * Amazon Web Services account. This list includes all information provided by the
     * <code>DescribeCacheReport</code> action, such as report status, completion
     * progress, start time, end time, filters, and tags.</p>
     */
    inline const Aws::Vector<CacheReportInfo>& GetCacheReportList() const{ return m_cacheReportList; }
    inline void SetCacheReportList(const Aws::Vector<CacheReportInfo>& value) { m_cacheReportList = value; }
    inline void SetCacheReportList(Aws::Vector<CacheReportInfo>&& value) { m_cacheReportList = std::move(value); }
    inline ListCacheReportsResult& WithCacheReportList(const Aws::Vector<CacheReportInfo>& value) { SetCacheReportList(value); return *this;}
    inline ListCacheReportsResult& WithCacheReportList(Aws::Vector<CacheReportInfo>&& value) { SetCacheReportList(std::move(value)); return *this;}
    inline ListCacheReportsResult& AddCacheReportList(const CacheReportInfo& value) { m_cacheReportList.push_back(value); return *this; }
    inline ListCacheReportsResult& AddCacheReportList(CacheReportInfo&& value) { m_cacheReportList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline ListCacheReportsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListCacheReportsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListCacheReportsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCacheReportsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCacheReportsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCacheReportsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CacheReportInfo> m_cacheReportList;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
