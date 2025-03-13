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
  /**
   * <p>A JSON object containing the following fields:</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeWorkingStorageOutput">AWS
   * API Reference</a></p>
   */
  class DescribeWorkingStorageResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeWorkingStorageResult() = default;
    AWS_STORAGEGATEWAY_API DescribeWorkingStorageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeWorkingStorageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    DescribeWorkingStorageResult& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
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
    DescribeWorkingStorageResult& WithDiskIds(DiskIdsT&& value) { SetDiskIds(std::forward<DiskIdsT>(value)); return *this;}
    template<typename DiskIdsT = Aws::String>
    DescribeWorkingStorageResult& AddDiskIds(DiskIdsT&& value) { m_diskIdsHasBeenSet = true; m_diskIds.emplace_back(std::forward<DiskIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total working storage in bytes in use by the gateway. If no working
     * storage is configured for the gateway, this field returns 0.</p>
     */
    inline long long GetWorkingStorageUsedInBytes() const { return m_workingStorageUsedInBytes; }
    inline void SetWorkingStorageUsedInBytes(long long value) { m_workingStorageUsedInBytesHasBeenSet = true; m_workingStorageUsedInBytes = value; }
    inline DescribeWorkingStorageResult& WithWorkingStorageUsedInBytes(long long value) { SetWorkingStorageUsedInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total working storage in bytes allocated for the gateway. If no working
     * storage is configured for the gateway, this field returns 0.</p>
     */
    inline long long GetWorkingStorageAllocatedInBytes() const { return m_workingStorageAllocatedInBytes; }
    inline void SetWorkingStorageAllocatedInBytes(long long value) { m_workingStorageAllocatedInBytesHasBeenSet = true; m_workingStorageAllocatedInBytes = value; }
    inline DescribeWorkingStorageResult& WithWorkingStorageAllocatedInBytes(long long value) { SetWorkingStorageAllocatedInBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWorkingStorageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_diskIds;
    bool m_diskIdsHasBeenSet = false;

    long long m_workingStorageUsedInBytes{0};
    bool m_workingStorageUsedInBytesHasBeenSet = false;

    long long m_workingStorageAllocatedInBytes{0};
    bool m_workingStorageAllocatedInBytesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
