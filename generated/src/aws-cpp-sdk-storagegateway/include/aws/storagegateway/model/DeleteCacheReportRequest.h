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
  class DeleteCacheReportRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DeleteCacheReportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCacheReport"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cache report you want to delete.</p>
     */
    inline const Aws::String& GetCacheReportARN() const { return m_cacheReportARN; }
    inline bool CacheReportARNHasBeenSet() const { return m_cacheReportARNHasBeenSet; }
    template<typename CacheReportARNT = Aws::String>
    void SetCacheReportARN(CacheReportARNT&& value) { m_cacheReportARNHasBeenSet = true; m_cacheReportARN = std::forward<CacheReportARNT>(value); }
    template<typename CacheReportARNT = Aws::String>
    DeleteCacheReportRequest& WithCacheReportARN(CacheReportARNT&& value) { SetCacheReportARN(std::forward<CacheReportARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cacheReportARN;
    bool m_cacheReportARNHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
