﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/ResourceExplorer2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

  /**
   */
  class ListIndexesForMembersRequest : public ResourceExplorer2Request
  {
  public:
    AWS_RESOURCEEXPLORER2_API ListIndexesForMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIndexesForMembers"; }

    AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The account IDs will limit the output to only indexes from these
     * accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIdList() const{ return m_accountIdList; }
    inline bool AccountIdListHasBeenSet() const { return m_accountIdListHasBeenSet; }
    inline void SetAccountIdList(const Aws::Vector<Aws::String>& value) { m_accountIdListHasBeenSet = true; m_accountIdList = value; }
    inline void SetAccountIdList(Aws::Vector<Aws::String>&& value) { m_accountIdListHasBeenSet = true; m_accountIdList = std::move(value); }
    inline ListIndexesForMembersRequest& WithAccountIdList(const Aws::Vector<Aws::String>& value) { SetAccountIdList(value); return *this;}
    inline ListIndexesForMembersRequest& WithAccountIdList(Aws::Vector<Aws::String>&& value) { SetAccountIdList(std::move(value)); return *this;}
    inline ListIndexesForMembersRequest& AddAccountIdList(const Aws::String& value) { m_accountIdListHasBeenSet = true; m_accountIdList.push_back(value); return *this; }
    inline ListIndexesForMembersRequest& AddAccountIdList(Aws::String&& value) { m_accountIdListHasBeenSet = true; m_accountIdList.push_back(std::move(value)); return *this; }
    inline ListIndexesForMembersRequest& AddAccountIdList(const char* value) { m_accountIdListHasBeenSet = true; m_accountIdList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results that you want included on each page of the
     * response. If you do not include this parameter, it defaults to a value
     * appropriate to the operation. If additional items exist beyond those included in
     * the current response, the <code>NextToken</code> response element is present and
     * has a value (is not null). Include that value as the <code>NextToken</code>
     * request parameter in the next call to the operation to get the next part of the
     * results.</p>  <p>An API operation can return fewer results than the
     * maximum even when there are more results available. You should check
     * <code>NextToken</code> after every operation to ensure that you receive all of
     * the results.</p> 
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListIndexesForMembersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from. The pagination tokens expire after 24
     * hours.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListIndexesForMembersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIndexesForMembersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIndexesForMembersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIdList;
    bool m_accountIdListHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
