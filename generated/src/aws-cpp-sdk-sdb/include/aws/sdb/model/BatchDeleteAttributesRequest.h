/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/sdb/SimpleDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sdb/model/DeletableItem.h>
#include <utility>

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

  /**
   */
  class BatchDeleteAttributesRequest : public SimpleDBRequest
  {
  public:
    AWS_SIMPLEDB_API BatchDeleteAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteAttributes"; }

    AWS_SIMPLEDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_SIMPLEDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * The name of the domain in which the attributes are being deleted.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * The name of the domain in which the attributes are being deleted.
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * The name of the domain in which the attributes are being deleted.
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The name of the domain in which the attributes are being deleted.
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * The name of the domain in which the attributes are being deleted.
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * The name of the domain in which the attributes are being deleted.
     */
    inline BatchDeleteAttributesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The name of the domain in which the attributes are being deleted.
     */
    inline BatchDeleteAttributesRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * The name of the domain in which the attributes are being deleted.
     */
    inline BatchDeleteAttributesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * A list of items on which to perform the operation.
     */
    inline const Aws::Vector<DeletableItem>& GetItems() const{ return m_items; }

    /**
     * A list of items on which to perform the operation.
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * A list of items on which to perform the operation.
     */
    inline void SetItems(const Aws::Vector<DeletableItem>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A list of items on which to perform the operation.
     */
    inline void SetItems(Aws::Vector<DeletableItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * A list of items on which to perform the operation.
     */
    inline BatchDeleteAttributesRequest& WithItems(const Aws::Vector<DeletableItem>& value) { SetItems(value); return *this;}

    /**
     * A list of items on which to perform the operation.
     */
    inline BatchDeleteAttributesRequest& WithItems(Aws::Vector<DeletableItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * A list of items on which to perform the operation.
     */
    inline BatchDeleteAttributesRequest& AddItems(const DeletableItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * A list of items on which to perform the operation.
     */
    inline BatchDeleteAttributesRequest& AddItems(DeletableItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<DeletableItem> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
