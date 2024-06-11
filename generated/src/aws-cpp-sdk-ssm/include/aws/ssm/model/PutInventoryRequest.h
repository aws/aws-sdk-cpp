/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InventoryItem.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class PutInventoryRequest : public SSMRequest
  {
  public:
    AWS_SSM_API PutInventoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutInventory"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An managed node ID where you want to add or update inventory items.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline PutInventoryRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline PutInventoryRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline PutInventoryRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inventory items that you want to add or update on managed nodes.</p>
     */
    inline const Aws::Vector<InventoryItem>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<InventoryItem>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<InventoryItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline PutInventoryRequest& WithItems(const Aws::Vector<InventoryItem>& value) { SetItems(value); return *this;}
    inline PutInventoryRequest& WithItems(Aws::Vector<InventoryItem>&& value) { SetItems(std::move(value)); return *this;}
    inline PutInventoryRequest& AddItems(const InventoryItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline PutInventoryRequest& AddItems(InventoryItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Vector<InventoryItem> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
