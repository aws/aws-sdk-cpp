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
    AWS_STORAGEGATEWAY_API DescribeCacheReportResult();
    AWS_STORAGEGATEWAY_API DescribeCacheReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeCacheReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains all informational fields associated with a cache report. Includes
     * name, ARN, tags, status, progress, filters, start time, and end time.</p>
     */
    inline const CacheReportInfo& GetCacheReportInfo() const{ return m_cacheReportInfo; }
    inline void SetCacheReportInfo(const CacheReportInfo& value) { m_cacheReportInfo = value; }
    inline void SetCacheReportInfo(CacheReportInfo&& value) { m_cacheReportInfo = std::move(value); }
    inline DescribeCacheReportResult& WithCacheReportInfo(const CacheReportInfo& value) { SetCacheReportInfo(value); return *this;}
    inline DescribeCacheReportResult& WithCacheReportInfo(CacheReportInfo&& value) { SetCacheReportInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeCacheReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeCacheReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeCacheReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    CacheReportInfo m_cacheReportInfo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
