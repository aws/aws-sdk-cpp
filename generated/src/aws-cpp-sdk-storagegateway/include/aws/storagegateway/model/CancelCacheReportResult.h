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
  class CancelCacheReportResult
  {
  public:
    AWS_STORAGEGATEWAY_API CancelCacheReportResult();
    AWS_STORAGEGATEWAY_API CancelCacheReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API CancelCacheReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cache report you want to cancel.</p>
     */
    inline const Aws::String& GetCacheReportARN() const{ return m_cacheReportARN; }
    inline void SetCacheReportARN(const Aws::String& value) { m_cacheReportARN = value; }
    inline void SetCacheReportARN(Aws::String&& value) { m_cacheReportARN = std::move(value); }
    inline void SetCacheReportARN(const char* value) { m_cacheReportARN.assign(value); }
    inline CancelCacheReportResult& WithCacheReportARN(const Aws::String& value) { SetCacheReportARN(value); return *this;}
    inline CancelCacheReportResult& WithCacheReportARN(Aws::String&& value) { SetCacheReportARN(std::move(value)); return *this;}
    inline CancelCacheReportResult& WithCacheReportARN(const char* value) { SetCacheReportARN(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelCacheReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelCacheReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelCacheReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_cacheReportARN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
