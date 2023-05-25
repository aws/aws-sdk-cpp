/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SESV2
{
namespace Model
{

  /**
   */
  class ListContactListsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API ListContactListsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListContactLists"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;

    AWS_SESV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Maximum number of contact lists to return at once. Use this parameter to
     * paginate results. If additional contact lists exist beyond the specified limit,
     * the <code>NextToken</code> element is sent in the response. Use the
     * <code>NextToken</code> value in subsequent requests to retrieve additional
     * lists.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>Maximum number of contact lists to return at once. Use this parameter to
     * paginate results. If additional contact lists exist beyond the specified limit,
     * the <code>NextToken</code> element is sent in the response. Use the
     * <code>NextToken</code> value in subsequent requests to retrieve additional
     * lists.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>Maximum number of contact lists to return at once. Use this parameter to
     * paginate results. If additional contact lists exist beyond the specified limit,
     * the <code>NextToken</code> element is sent in the response. Use the
     * <code>NextToken</code> value in subsequent requests to retrieve additional
     * lists.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>Maximum number of contact lists to return at once. Use this parameter to
     * paginate results. If additional contact lists exist beyond the specified limit,
     * the <code>NextToken</code> element is sent in the response. Use the
     * <code>NextToken</code> value in subsequent requests to retrieve additional
     * lists.</p>
     */
    inline ListContactListsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Use the token provided in the Response to use in the
     * subsequent call to ListContactLists with the same parameters to retrieve the
     * next page of contact lists.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Use the token provided in the Response to use in the
     * subsequent call to ListContactLists with the same parameters to retrieve the
     * next page of contact lists.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Use the token provided in the Response to use in the
     * subsequent call to ListContactLists with the same parameters to retrieve the
     * next page of contact lists.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Use the token provided in the Response to use in the
     * subsequent call to ListContactLists with the same parameters to retrieve the
     * next page of contact lists.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Use the token provided in the Response to use in the
     * subsequent call to ListContactLists with the same parameters to retrieve the
     * next page of contact lists.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Use the token provided in the Response to use in the
     * subsequent call to ListContactLists with the same parameters to retrieve the
     * next page of contact lists.</p>
     */
    inline ListContactListsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Use the token provided in the Response to use in the
     * subsequent call to ListContactLists with the same parameters to retrieve the
     * next page of contact lists.</p>
     */
    inline ListContactListsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Use the token provided in the Response to use in the
     * subsequent call to ListContactLists with the same parameters to retrieve the
     * next page of contact lists.</p>
     */
    inline ListContactListsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
