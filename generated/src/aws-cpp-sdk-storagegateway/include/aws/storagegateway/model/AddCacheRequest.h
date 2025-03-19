/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class AddCacheRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API AddCacheRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddCache"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    AddCacheRequest& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string has a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDiskIds() const { return m_diskIds; }
    inline bool DiskIdsHasBeenSet() const { return m_diskIdsHasBeenSet; }
    template<typename DiskIdsT = Aws::Vector<Aws::String>>
    void SetDiskIds(DiskIdsT&& value) { m_diskIdsHasBeenSet = true; m_diskIds = std::forward<DiskIdsT>(value); }
    template<typename DiskIdsT = Aws::Vector<Aws::String>>
    AddCacheRequest& WithDiskIds(DiskIdsT&& value) { SetDiskIds(std::forward<DiskIdsT>(value)); return *this;}
    template<typename DiskIdsT = Aws::String>
    AddCacheRequest& AddDiskIds(DiskIdsT&& value) { m_diskIdsHasBeenSet = true; m_diskIds.emplace_back(std::forward<DiskIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_diskIds;
    bool m_diskIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
