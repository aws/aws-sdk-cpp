/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class DescribeCacheReportRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeCacheReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCacheReport"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cache report you want to describe.</p>
     */
    inline const Aws::String& GetCacheReportARN() const{ return m_cacheReportARN; }
    inline bool CacheReportARNHasBeenSet() const { return m_cacheReportARNHasBeenSet; }
    inline void SetCacheReportARN(const Aws::String& value) { m_cacheReportARNHasBeenSet = true; m_cacheReportARN = value; }
    inline void SetCacheReportARN(Aws::String&& value) { m_cacheReportARNHasBeenSet = true; m_cacheReportARN = std::move(value); }
    inline void SetCacheReportARN(const char* value) { m_cacheReportARNHasBeenSet = true; m_cacheReportARN.assign(value); }
    inline DescribeCacheReportRequest& WithCacheReportARN(const Aws::String& value) { SetCacheReportARN(value); return *this;}
    inline DescribeCacheReportRequest& WithCacheReportARN(Aws::String&& value) { SetCacheReportARN(std::move(value)); return *this;}
    inline DescribeCacheReportRequest& WithCacheReportARN(const char* value) { SetCacheReportARN(value); return *this;}
    ///@}
  private:

    Aws::String m_cacheReportARN;
    bool m_cacheReportARNHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
