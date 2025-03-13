/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/sdb/SimpleDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

  /**
   */
  class GetAttributesRequest : public SimpleDBRequest
  {
  public:
    AWS_SIMPLEDB_API GetAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAttributes"; }

    AWS_SIMPLEDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_SIMPLEDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * The name of the domain in which to perform the operation.
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetAttributesRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the item.
     */
    inline const Aws::String& GetItemName() const { return m_itemName; }
    inline bool ItemNameHasBeenSet() const { return m_itemNameHasBeenSet; }
    template<typename ItemNameT = Aws::String>
    void SetItemName(ItemNameT&& value) { m_itemNameHasBeenSet = true; m_itemName = std::forward<ItemNameT>(value); }
    template<typename ItemNameT = Aws::String>
    GetAttributesRequest& WithItemName(ItemNameT&& value) { SetItemName(std::forward<ItemNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The names of the attributes.
     */
    inline const Aws::Vector<Aws::String>& GetAttributeNames() const { return m_attributeNames; }
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }
    template<typename AttributeNamesT = Aws::Vector<Aws::String>>
    void SetAttributeNames(AttributeNamesT&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::forward<AttributeNamesT>(value); }
    template<typename AttributeNamesT = Aws::Vector<Aws::String>>
    GetAttributesRequest& WithAttributeNames(AttributeNamesT&& value) { SetAttributeNames(std::forward<AttributeNamesT>(value)); return *this;}
    template<typename AttributeNamesT = Aws::String>
    GetAttributesRequest& AddAttributeNames(AttributeNamesT&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.emplace_back(std::forward<AttributeNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Determines whether or not strong consistency should be enforced when data is
     * read from SimpleDB. If <code>true</code>, any data previously written to
     * SimpleDB will be returned. Otherwise, results will be consistent eventually, and
     * the client may not see data that was written immediately before your read.
     */
    inline bool GetConsistentRead() const { return m_consistentRead; }
    inline bool ConsistentReadHasBeenSet() const { return m_consistentReadHasBeenSet; }
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }
    inline GetAttributesRequest& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_itemName;
    bool m_itemNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributeNames;
    bool m_attributeNamesHasBeenSet = false;

    bool m_consistentRead{false};
    bool m_consistentReadHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
