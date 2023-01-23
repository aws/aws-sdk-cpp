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
    AWS_SIMPLEDB_API PutAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAttributes"; }

    AWS_SIMPLEDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_SIMPLEDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * The name of the domain in which to perform the operation.
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * The name of the domain in which to perform the operation.
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * The name of the domain in which to perform the operation.
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * The name of the domain in which to perform the operation.
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * The name of the domain in which to perform the operation.
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * The name of the domain in which to perform the operation.
     */
    inline PutAttributesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * The name of the domain in which to perform the operation.
     */
    inline PutAttributesRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * The name of the domain in which to perform the operation.
     */
    inline PutAttributesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * The name of the item.
     */
    inline const Aws::String& GetItemName() const{ return m_itemName; }

    /**
     * The name of the item.
     */
    inline bool ItemNameHasBeenSet() const { return m_itemNameHasBeenSet; }

    /**
     * The name of the item.
     */
    inline void SetItemName(const Aws::String& value) { m_itemNameHasBeenSet = true; m_itemName = value; }

    /**
     * The name of the item.
     */
    inline void SetItemName(Aws::String&& value) { m_itemNameHasBeenSet = true; m_itemName = std::move(value); }

    /**
     * The name of the item.
     */
    inline void SetItemName(const char* value) { m_itemNameHasBeenSet = true; m_itemName.assign(value); }

    /**
     * The name of the item.
     */
    inline PutAttributesRequest& WithItemName(const Aws::String& value) { SetItemName(value); return *this;}

    /**
     * The name of the item.
     */
    inline PutAttributesRequest& WithItemName(Aws::String&& value) { SetItemName(std::move(value)); return *this;}

    /**
     * The name of the item.
     */
    inline PutAttributesRequest& WithItemName(const char* value) { SetItemName(value); return *this;}


    /**
     * The list of attributes.
     */
    inline const Aws::Vector<ReplaceableAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * The list of attributes.
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * The list of attributes.
     */
    inline void SetAttributes(const Aws::Vector<ReplaceableAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * The list of attributes.
     */
    inline void SetAttributes(Aws::Vector<ReplaceableAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * The list of attributes.
     */
    inline PutAttributesRequest& WithAttributes(const Aws::Vector<ReplaceableAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * The list of attributes.
     */
    inline PutAttributesRequest& WithAttributes(Aws::Vector<ReplaceableAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * The list of attributes.
     */
    inline PutAttributesRequest& AddAttributes(const ReplaceableAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * The list of attributes.
     */
    inline PutAttributesRequest& AddAttributes(ReplaceableAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * The update condition which, if specified, determines whether the specified
     * attributes will be updated or not. The update condition must be satisfied in
     * order for this request to be processed and the attributes to be updated.
     */
    inline const UpdateCondition& GetExpected() const{ return m_expected; }

    /**
     * The update condition which, if specified, determines whether the specified
     * attributes will be updated or not. The update condition must be satisfied in
     * order for this request to be processed and the attributes to be updated.
     */
    inline bool ExpectedHasBeenSet() const { return m_expectedHasBeenSet; }

    /**
     * The update condition which, if specified, determines whether the specified
     * attributes will be updated or not. The update condition must be satisfied in
     * order for this request to be processed and the attributes to be updated.
     */
    inline void SetExpected(const UpdateCondition& value) { m_expectedHasBeenSet = true; m_expected = value; }

    /**
     * The update condition which, if specified, determines whether the specified
     * attributes will be updated or not. The update condition must be satisfied in
     * order for this request to be processed and the attributes to be updated.
     */
    inline void SetExpected(UpdateCondition&& value) { m_expectedHasBeenSet = true; m_expected = std::move(value); }

    /**
     * The update condition which, if specified, determines whether the specified
     * attributes will be updated or not. The update condition must be satisfied in
     * order for this request to be processed and the attributes to be updated.
     */
    inline PutAttributesRequest& WithExpected(const UpdateCondition& value) { SetExpected(value); return *this;}

    /**
     * The update condition which, if specified, determines whether the specified
     * attributes will be updated or not. The update condition must be satisfied in
     * order for this request to be processed and the attributes to be updated.
     */
    inline PutAttributesRequest& WithExpected(UpdateCondition&& value) { SetExpected(std::move(value)); return *this;}

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
