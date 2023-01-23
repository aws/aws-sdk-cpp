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
    AWS_STORAGEGATEWAY_API AddCacheRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddCache"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline AddCacheRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline AddCacheRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline AddCacheRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string has a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDiskIds() const{ return m_diskIds; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string has a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline bool DiskIdsHasBeenSet() const { return m_diskIdsHasBeenSet; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string has a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline void SetDiskIds(const Aws::Vector<Aws::String>& value) { m_diskIdsHasBeenSet = true; m_diskIds = value; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string has a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline void SetDiskIds(Aws::Vector<Aws::String>&& value) { m_diskIdsHasBeenSet = true; m_diskIds = std::move(value); }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string has a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline AddCacheRequest& WithDiskIds(const Aws::Vector<Aws::String>& value) { SetDiskIds(value); return *this;}

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string has a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline AddCacheRequest& WithDiskIds(Aws::Vector<Aws::String>&& value) { SetDiskIds(std::move(value)); return *this;}

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string has a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline AddCacheRequest& AddDiskIds(const Aws::String& value) { m_diskIdsHasBeenSet = true; m_diskIds.push_back(value); return *this; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string has a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline AddCacheRequest& AddDiskIds(Aws::String&& value) { m_diskIdsHasBeenSet = true; m_diskIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that identify disks that are to be configured as working
     * storage. Each string has a minimum length of 1 and maximum length of 300. You
     * can get the disk IDs from the <a>ListLocalDisks</a> API.</p>
     */
    inline AddCacheRequest& AddDiskIds(const char* value) { m_diskIdsHasBeenSet = true; m_diskIds.push_back(value); return *this; }

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_diskIds;
    bool m_diskIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
