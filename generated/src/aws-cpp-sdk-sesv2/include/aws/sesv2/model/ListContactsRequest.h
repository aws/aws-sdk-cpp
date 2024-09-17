/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ListContactsFilter.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   */
  class ListContactsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API ListContactsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListContacts"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the contact list.</p>
     */
    inline const Aws::String& GetContactListName() const{ return m_contactListName; }
    inline bool ContactListNameHasBeenSet() const { return m_contactListNameHasBeenSet; }
    inline void SetContactListName(const Aws::String& value) { m_contactListNameHasBeenSet = true; m_contactListName = value; }
    inline void SetContactListName(Aws::String&& value) { m_contactListNameHasBeenSet = true; m_contactListName = std::move(value); }
    inline void SetContactListName(const char* value) { m_contactListNameHasBeenSet = true; m_contactListName.assign(value); }
    inline ListContactsRequest& WithContactListName(const Aws::String& value) { SetContactListName(value); return *this;}
    inline ListContactsRequest& WithContactListName(Aws::String&& value) { SetContactListName(std::move(value)); return *this;}
    inline ListContactsRequest& WithContactListName(const char* value) { SetContactListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that can be applied to a list of contacts.</p>
     */
    inline const ListContactsFilter& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const ListContactsFilter& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(ListContactsFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline ListContactsRequest& WithFilter(const ListContactsFilter& value) { SetFilter(value); return *this;}
    inline ListContactsRequest& WithFilter(ListContactsFilter&& value) { SetFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of contacts that may be returned at once, which is dependent on if
     * there are more or less contacts than the value of the PageSize. Use this
     * parameter to paginate results. If additional contacts exist beyond the specified
     * limit, the <code>NextToken</code> element is sent in the response. Use the
     * <code>NextToken</code> value in subsequent requests to retrieve additional
     * contacts.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListContactsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string token indicating that there might be additional contacts available
     * to be listed. Use the token provided in the Response to use in the subsequent
     * call to ListContacts with the same parameters to retrieve the next page of
     * contacts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListContactsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListContactsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListContactsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_contactListName;
    bool m_contactListNameHasBeenSet = false;

    ListContactsFilter m_filter;
    bool m_filterHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
