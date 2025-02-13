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
  class DeleteCacheReportResult
  {
  public:
    AWS_STORAGEGATEWAY_API DeleteCacheReportResult();
    AWS_STORAGEGATEWAY_API DeleteCacheReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DeleteCacheReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cache report you want to delete.</p>
     */
    inline const Aws::String& GetCacheReportARN() const{ return m_cacheReportARN; }
    inline void SetCacheReportARN(const Aws::String& value) { m_cacheReportARN = value; }
    inline void SetCacheReportARN(Aws::String&& value) { m_cacheReportARN = std::move(value); }
    inline void SetCacheReportARN(const char* value) { m_cacheReportARN.assign(value); }
    inline DeleteCacheReportResult& WithCacheReportARN(const Aws::String& value) { SetCacheReportARN(value); return *this;}
    inline DeleteCacheReportResult& WithCacheReportARN(Aws::String&& value) { SetCacheReportARN(std::move(value)); return *this;}
    inline DeleteCacheReportResult& WithCacheReportARN(const char* value) { SetCacheReportARN(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteCacheReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteCacheReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteCacheReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_cacheReportARN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
