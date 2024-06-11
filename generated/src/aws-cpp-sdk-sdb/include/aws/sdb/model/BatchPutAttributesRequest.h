/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/sdb/SimpleDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sdb/model/ReplaceableItem.h>
#include <utility>

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

  /**
   */
  class BatchPutAttributesRequest : public SimpleDBRequest
  {
  public:
    AWS_SIMPLEDB_API BatchPutAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutAttributes"; }

    AWS_SIMPLEDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_SIMPLEDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * The name of the domain in which the attributes are being stored.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline BatchPutAttributesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline BatchPutAttributesRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline BatchPutAttributesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of items on which to perform the operation.
     */
    inline const Aws::Vector<ReplaceableItem>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<ReplaceableItem>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<ReplaceableItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline BatchPutAttributesRequest& WithItems(const Aws::Vector<ReplaceableItem>& value) { SetItems(value); return *this;}
    inline BatchPutAttributesRequest& WithItems(Aws::Vector<ReplaceableItem>&& value) { SetItems(std::move(value)); return *this;}
    inline BatchPutAttributesRequest& AddItems(const ReplaceableItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline BatchPutAttributesRequest& AddItems(ReplaceableItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<ReplaceableItem> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
