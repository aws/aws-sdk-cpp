/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeCacheResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeCacheResult() = default;
    AWS_STORAGEGATEWAY_API DescribeCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    DescribeCacheResult& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string has a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDiskIds() const { return m_diskIds; }
    template<typename DiskIdsT = Aws::Vector<Aws::String>>
    void SetDiskIds(DiskIdsT&& value) { m_diskIdsHasBeenSet = true; m_diskIds = std::forward<DiskIdsT>(value); }
    template<typename DiskIdsT = Aws::Vector<Aws::String>>
    DescribeCacheResult& WithDiskIds(DiskIdsT&& value) { SetDiskIds(std::forward<DiskIdsT>(value)); return *this;}
    template<typename DiskIdsT = Aws::String>
    DescribeCacheResult& AddDiskIds(DiskIdsT&& value) { m_diskIdsHasBeenSet = true; m_diskIds.emplace_back(std::forward<DiskIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The amount of cache in bytes allocated to a gateway.</p>
     */
    inline long long GetCacheAllocatedInBytes() const { return m_cacheAllocatedInBytes; }
    inline void SetCacheAllocatedInBytes(long long value) { m_cacheAllocatedInBytesHasBeenSet = true; m_cacheAllocatedInBytes = value; }
    inline DescribeCacheResult& WithCacheAllocatedInBytes(long long value) { SetCacheAllocatedInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Percent use of the gateway's cache storage. This metric applies only to the
     * gateway-cached volume setup. The sample is taken at the end of the reporting
     * period.</p>
     */
    inline double GetCacheUsedPercentage() const { return m_cacheUsedPercentage; }
    inline void SetCacheUsedPercentage(double value) { m_cacheUsedPercentageHasBeenSet = true; m_cacheUsedPercentage = value; }
    inline DescribeCacheResult& WithCacheUsedPercentage(double value) { SetCacheUsedPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file share's contribution to the overall percentage of the gateway's
     * cache that has not been persisted to Amazon Web Services. The sample is taken at
     * the end of the reporting period.</p>
     */
    inline double GetCacheDirtyPercentage() const { return m_cacheDirtyPercentage; }
    inline void SetCacheDirtyPercentage(double value) { m_cacheDirtyPercentageHasBeenSet = true; m_cacheDirtyPercentage = value; }
    inline DescribeCacheResult& WithCacheDirtyPercentage(double value) { SetCacheDirtyPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Percent of application read operations from the file shares that are served
     * from cache. The sample is taken at the end of the reporting period.</p>
     */
    inline double GetCacheHitPercentage() const { return m_cacheHitPercentage; }
    inline void SetCacheHitPercentage(double value) { m_cacheHitPercentageHasBeenSet = true; m_cacheHitPercentage = value; }
    inline DescribeCacheResult& WithCacheHitPercentage(double value) { SetCacheHitPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Percent of application read operations from the file shares that are not
     * served from cache. The sample is taken at the end of the reporting period.</p>
     */
    inline double GetCacheMissPercentage() const { return m_cacheMissPercentage; }
    inline void SetCacheMissPercentage(double value) { m_cacheMissPercentageHasBeenSet = true; m_cacheMissPercentage = value; }
    inline DescribeCacheResult& WithCacheMissPercentage(double value) { SetCacheMissPercentage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCacheResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_diskIds;
    bool m_diskIdsHasBeenSet = false;

    long long m_cacheAllocatedInBytes{0};
    bool m_cacheAllocatedInBytesHasBeenSet = false;

    double m_cacheUsedPercentage{0.0};
    bool m_cacheUsedPercentageHasBeenSet = false;

    double m_cacheDirtyPercentage{0.0};
    bool m_cacheDirtyPercentageHasBeenSet = false;

    double m_cacheHitPercentage{0.0};
    bool m_cacheHitPercentageHasBeenSet = false;

    double m_cacheMissPercentage{0.0};
    bool m_cacheMissPercentageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
