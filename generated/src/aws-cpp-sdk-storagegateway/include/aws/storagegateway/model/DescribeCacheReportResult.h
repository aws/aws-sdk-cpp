/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/model/CacheReportInfo.h>
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
  class DescribeCacheReportResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeCacheReportResult() = default;
    AWS_STORAGEGATEWAY_API DescribeCacheReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeCacheReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains all informational fields associated with a cache report. Includes
     * name, ARN, tags, status, progress, filters, start time, and end time.</p>
     */
    inline const CacheReportInfo& GetCacheReportInfo() const { return m_cacheReportInfo; }
    template<typename CacheReportInfoT = CacheReportInfo>
    void SetCacheReportInfo(CacheReportInfoT&& value) { m_cacheReportInfoHasBeenSet = true; m_cacheReportInfo = std::forward<CacheReportInfoT>(value); }
    template<typename CacheReportInfoT = CacheReportInfo>
    DescribeCacheReportResult& WithCacheReportInfo(CacheReportInfoT&& value) { SetCacheReportInfo(std::forward<CacheReportInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCacheReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CacheReportInfo m_cacheReportInfo;
    bool m_cacheReportInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
