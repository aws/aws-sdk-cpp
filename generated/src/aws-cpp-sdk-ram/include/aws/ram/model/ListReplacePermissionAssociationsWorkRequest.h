﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ram/model/ReplacePermissionAssociationsWorkStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class ListReplacePermissionAssociationsWorkRequest : public RAMRequest
  {
  public:
    AWS_RAM_API ListReplacePermissionAssociationsWorkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReplacePermissionAssociationsWork"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of IDs. These values come from the <code>id</code>field of the
     * <code>replacePermissionAssociationsWork</code>structure returned by the
     * <a>ReplacePermissionAssociations</a> operation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetWorkIds() const{ return m_workIds; }
    inline bool WorkIdsHasBeenSet() const { return m_workIdsHasBeenSet; }
    inline void SetWorkIds(const Aws::Vector<Aws::String>& value) { m_workIdsHasBeenSet = true; m_workIds = value; }
    inline void SetWorkIds(Aws::Vector<Aws::String>&& value) { m_workIdsHasBeenSet = true; m_workIds = std::move(value); }
    inline ListReplacePermissionAssociationsWorkRequest& WithWorkIds(const Aws::Vector<Aws::String>& value) { SetWorkIds(value); return *this;}
    inline ListReplacePermissionAssociationsWorkRequest& WithWorkIds(Aws::Vector<Aws::String>&& value) { SetWorkIds(std::move(value)); return *this;}
    inline ListReplacePermissionAssociationsWorkRequest& AddWorkIds(const Aws::String& value) { m_workIdsHasBeenSet = true; m_workIds.push_back(value); return *this; }
    inline ListReplacePermissionAssociationsWorkRequest& AddWorkIds(Aws::String&& value) { m_workIdsHasBeenSet = true; m_workIds.push_back(std::move(value)); return *this; }
    inline ListReplacePermissionAssociationsWorkRequest& AddWorkIds(const char* value) { m_workIdsHasBeenSet = true; m_workIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to see only the details about requests with a status
     * that matches this value.</p>
     */
    inline const ReplacePermissionAssociationsWorkStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReplacePermissionAssociationsWorkStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReplacePermissionAssociationsWorkStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListReplacePermissionAssociationsWorkRequest& WithStatus(const ReplacePermissionAssociationsWorkStatus& value) { SetStatus(value); return *this;}
    inline ListReplacePermissionAssociationsWorkRequest& WithStatus(ReplacePermissionAssociationsWorkStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListReplacePermissionAssociationsWorkRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReplacePermissionAssociationsWorkRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReplacePermissionAssociationsWorkRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListReplacePermissionAssociationsWorkRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_workIds;
    bool m_workIdsHasBeenSet = false;

    ReplacePermissionAssociationsWorkStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
