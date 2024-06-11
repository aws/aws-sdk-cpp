/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sdb/SimpleDB_EXPORTS.h>
#include <aws/sdb/SimpleDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sdb/model/UpdateCondition.h>
#include <aws/sdb/model/Attribute.h>
#include <utility>

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

  /**
   */
  class DeleteAttributesRequest : public SimpleDBRequest
  {
  public:
    AWS_SIMPLEDB_API DeleteAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAttributes"; }

    AWS_SIMPLEDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_SIMPLEDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * The name of the domain in which to perform the operation.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline DeleteAttributesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DeleteAttributesRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DeleteAttributesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the item. Similar to rows on a spreadsheet, items represent
     * individual objects that contain one or more value-attribute pairs.
     */
    inline const Aws::String& GetItemName() const{ return m_itemName; }
    inline bool ItemNameHasBeenSet() const { return m_itemNameHasBeenSet; }
    inline void SetItemName(const Aws::String& value) { m_itemNameHasBeenSet = true; m_itemName = value; }
    inline void SetItemName(Aws::String&& value) { m_itemNameHasBeenSet = true; m_itemName = std::move(value); }
    inline void SetItemName(const char* value) { m_itemNameHasBeenSet = true; m_itemName.assign(value); }
    inline DeleteAttributesRequest& WithItemName(const Aws::String& value) { SetItemName(value); return *this;}
    inline DeleteAttributesRequest& WithItemName(Aws::String&& value) { SetItemName(std::move(value)); return *this;}
    inline DeleteAttributesRequest& WithItemName(const char* value) { SetItemName(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of Attributes. Similar to columns on a spreadsheet, attributes represent
     * categories of data that can be assigned to items.
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline DeleteAttributesRequest& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}
    inline DeleteAttributesRequest& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}
    inline DeleteAttributesRequest& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline DeleteAttributesRequest& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The update condition which, if specified, determines whether the specified
     * attributes will be deleted or not. The update condition must be satisfied in
     * order for this request to be processed and the attributes to be deleted.
     */
    inline const UpdateCondition& GetExpected() const{ return m_expected; }
    inline bool ExpectedHasBeenSet() const { return m_expectedHasBeenSet; }
    inline void SetExpected(const UpdateCondition& value) { m_expectedHasBeenSet = true; m_expected = value; }
    inline void SetExpected(UpdateCondition&& value) { m_expectedHasBeenSet = true; m_expected = std::move(value); }
    inline DeleteAttributesRequest& WithExpected(const UpdateCondition& value) { SetExpected(value); return *this;}
    inline DeleteAttributesRequest& WithExpected(UpdateCondition&& value) { SetExpected(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_itemName;
    bool m_itemNameHasBeenSet = false;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    UpdateCondition m_expected;
    bool m_expectedHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
