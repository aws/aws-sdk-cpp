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
#include <aws/sdb/model/ReplaceableAttribute.h>
#include <utility>

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

  /**
   */
  class PutAttributesRequest : public SimpleDBRequest
  {
  public:
    AWS_SIMPLEDB_API PutAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAttributes"; }

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
    PutAttributesRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
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
    PutAttributesRequest& WithItemName(ItemNameT&& value) { SetItemName(std::forward<ItemNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The list of attributes.
     */
    inline const Aws::Vector<ReplaceableAttribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<ReplaceableAttribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<ReplaceableAttribute>>
    PutAttributesRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = ReplaceableAttribute>
    PutAttributesRequest& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The update condition which, if specified, determines whether the specified
     * attributes will be updated or not. The update condition must be satisfied in
     * order for this request to be processed and the attributes to be updated.
     */
    inline const UpdateCondition& GetExpected() const { return m_expected; }
    inline bool ExpectedHasBeenSet() const { return m_expectedHasBeenSet; }
    template<typename ExpectedT = UpdateCondition>
    void SetExpected(ExpectedT&& value) { m_expectedHasBeenSet = true; m_expected = std::forward<ExpectedT>(value); }
    template<typename ExpectedT = UpdateCondition>
    PutAttributesRequest& WithExpected(ExpectedT&& value) { SetExpected(std::forward<ExpectedT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_itemName;
    bool m_itemNameHasBeenSet = false;

    Aws::Vector<ReplaceableAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    UpdateCondition m_expected;
    bool m_expectedHasBeenSet = false;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
