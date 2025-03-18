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
  class DescribeUploadBufferResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeUploadBufferResult() = default;
    AWS_STORAGEGATEWAY_API DescribeUploadBufferResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeUploadBufferResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    DescribeUploadBufferResult& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of the gateway's local disk IDs that are configured as working
     * storage. Each local disk ID is specified as a string (minimum length of 1 and
     * maximum length of 300). If no local disks are configured as working storage,
     * then the DiskIds array is empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDiskIds() const { return m_diskIds; }
    template<typename DiskIdsT = Aws::Vector<Aws::String>>
    void SetDiskIds(DiskIdsT&& value) { m_diskIdsHasBeenSet = true; m_diskIds = std::forward<DiskIdsT>(value); }
    template<typename DiskIdsT = Aws::Vector<Aws::String>>
    DescribeUploadBufferResult& WithDiskIds(DiskIdsT&& value) { SetDiskIds(std::forward<DiskIdsT>(value)); return *this;}
    template<typename DiskIdsT = Aws::String>
    DescribeUploadBufferResult& AddDiskIds(DiskIdsT&& value) { m_diskIdsHasBeenSet = true; m_diskIds.emplace_back(std::forward<DiskIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of bytes being used in the gateway's upload buffer.</p>
     */
    inline long long GetUploadBufferUsedInBytes() const { return m_uploadBufferUsedInBytes; }
    inline void SetUploadBufferUsedInBytes(long long value) { m_uploadBufferUsedInBytesHasBeenSet = true; m_uploadBufferUsedInBytes = value; }
    inline DescribeUploadBufferResult& WithUploadBufferUsedInBytes(long long value) { SetUploadBufferUsedInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of bytes allocated in the gateway's as upload buffer.</p>
     */
    inline long long GetUploadBufferAllocatedInBytes() const { return m_uploadBufferAllocatedInBytes; }
    inline void SetUploadBufferAllocatedInBytes(long long value) { m_uploadBufferAllocatedInBytesHasBeenSet = true; m_uploadBufferAllocatedInBytes = value; }
    inline DescribeUploadBufferResult& WithUploadBufferAllocatedInBytes(long long value) { SetUploadBufferAllocatedInBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeUploadBufferResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_diskIds;
    bool m_diskIdsHasBeenSet = false;

    long long m_uploadBufferUsedInBytes{0};
    bool m_uploadBufferUsedInBytesHasBeenSet = false;

    long long m_uploadBufferAllocatedInBytes{0};
    bool m_uploadBufferAllocatedInBytesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
