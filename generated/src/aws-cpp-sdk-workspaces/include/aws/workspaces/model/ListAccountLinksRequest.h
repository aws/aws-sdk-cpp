﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/AccountLinkStatusEnum.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class ListAccountLinksRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ListAccountLinksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccountLinks"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Filters the account based on their link status.</p>
     */
    inline const Aws::Vector<AccountLinkStatusEnum>& GetLinkStatusFilter() const{ return m_linkStatusFilter; }
    inline bool LinkStatusFilterHasBeenSet() const { return m_linkStatusFilterHasBeenSet; }
    inline void SetLinkStatusFilter(const Aws::Vector<AccountLinkStatusEnum>& value) { m_linkStatusFilterHasBeenSet = true; m_linkStatusFilter = value; }
    inline void SetLinkStatusFilter(Aws::Vector<AccountLinkStatusEnum>&& value) { m_linkStatusFilterHasBeenSet = true; m_linkStatusFilter = std::move(value); }
    inline ListAccountLinksRequest& WithLinkStatusFilter(const Aws::Vector<AccountLinkStatusEnum>& value) { SetLinkStatusFilter(value); return *this;}
    inline ListAccountLinksRequest& WithLinkStatusFilter(Aws::Vector<AccountLinkStatusEnum>&& value) { SetLinkStatusFilter(std::move(value)); return *this;}
    inline ListAccountLinksRequest& AddLinkStatusFilter(const AccountLinkStatusEnum& value) { m_linkStatusFilterHasBeenSet = true; m_linkStatusFilter.push_back(value); return *this; }
    inline ListAccountLinksRequest& AddLinkStatusFilter(AccountLinkStatusEnum&& value) { m_linkStatusFilterHasBeenSet = true; m_linkStatusFilter.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAccountLinksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAccountLinksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAccountLinksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of accounts to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAccountLinksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<AccountLinkStatusEnum> m_linkStatusFilter;
    bool m_linkStatusFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
