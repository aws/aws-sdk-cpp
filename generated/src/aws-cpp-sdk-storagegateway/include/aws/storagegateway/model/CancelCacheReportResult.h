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
    AWS_STORAGEGATEWAY_API CancelCacheReportResult() = default;
    AWS_STORAGEGATEWAY_API CancelCacheReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API CancelCacheReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cache report you want to cancel.</p>
     */
    inline const Aws::String& GetCacheReportARN() const { return m_cacheReportARN; }
    template<typename CacheReportARNT = Aws::String>
    void SetCacheReportARN(CacheReportARNT&& value) { m_cacheReportARNHasBeenSet = true; m_cacheReportARN = std::forward<CacheReportARNT>(value); }
    template<typename CacheReportARNT = Aws::String>
    CancelCacheReportResult& WithCacheReportARN(CacheReportARNT&& value) { SetCacheReportARN(std::forward<CacheReportARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CancelCacheReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cacheReportARN;
    bool m_cacheReportARNHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
