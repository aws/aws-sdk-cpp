/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/secretsmanager/model/SortOrderType.h>
#include <aws/secretsmanager/model/Filter.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class ListSecretsRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API ListSecretsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSecrets"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies whether to include secrets scheduled for deletion. By default,
     * secrets scheduled for deletion aren't included.</p>
     */
    inline bool GetIncludePlannedDeletion() const{ return m_includePlannedDeletion; }
    inline bool IncludePlannedDeletionHasBeenSet() const { return m_includePlannedDeletionHasBeenSet; }
    inline void SetIncludePlannedDeletion(bool value) { m_includePlannedDeletionHasBeenSet = true; m_includePlannedDeletion = value; }
    inline ListSecretsRequest& WithIncludePlannedDeletion(bool value) { SetIncludePlannedDeletion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of results to include in the response.</p> <p>If there are more
     * results available, in the response, Secrets Manager includes
     * <code>NextToken</code>. To get the next results, call <code>ListSecrets</code>
     * again with the value from <code>NextToken</code>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSecretsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * call did not show all results. To get the next results, call
     * <code>ListSecrets</code> again with this value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListSecretsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSecretsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSecretsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters to apply to the list of secrets.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListSecretsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline ListSecretsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline ListSecretsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline ListSecretsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Secrets are listed by <code>CreatedDate</code>. </p>
     */
    inline const SortOrderType& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrderType& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrderType&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListSecretsRequest& WithSortOrder(const SortOrderType& value) { SetSortOrder(value); return *this;}
    inline ListSecretsRequest& WithSortOrder(SortOrderType&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}
  private:

    bool m_includePlannedDeletion;
    bool m_includePlannedDeletionHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    SortOrderType m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
