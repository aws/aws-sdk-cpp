/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/AppImageConfigSortKey.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListAppImageConfigsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListAppImageConfigsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAppImageConfigs"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The total number of items to return in the response. If the total number of
     * items available is more than the value specified, a <code>NextToken</code> is
     * provided in the response. To resume pagination, provide the
     * <code>NextToken</code> value in the as part of a subsequent call. The default
     * value is 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAppImageConfigsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous call to <code>ListImages</code> didn't return the full set of
     * AppImageConfigs, the call returns a token for getting the next set of
     * AppImageConfigs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAppImageConfigsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAppImageConfigsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAppImageConfigsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only AppImageConfigs whose name contains the specified
     * string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }
    inline ListAppImageConfigsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}
    inline ListAppImageConfigsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}
    inline ListAppImageConfigsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only AppImageConfigs created on or before the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }
    inline ListAppImageConfigsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}
    inline ListAppImageConfigsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only AppImageConfigs created on or after the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }
    inline ListAppImageConfigsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}
    inline ListAppImageConfigsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only AppImageConfigs modified on or before the
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimeBefore() const{ return m_modifiedTimeBefore; }
    inline bool ModifiedTimeBeforeHasBeenSet() const { return m_modifiedTimeBeforeHasBeenSet; }
    inline void SetModifiedTimeBefore(const Aws::Utils::DateTime& value) { m_modifiedTimeBeforeHasBeenSet = true; m_modifiedTimeBefore = value; }
    inline void SetModifiedTimeBefore(Aws::Utils::DateTime&& value) { m_modifiedTimeBeforeHasBeenSet = true; m_modifiedTimeBefore = std::move(value); }
    inline ListAppImageConfigsRequest& WithModifiedTimeBefore(const Aws::Utils::DateTime& value) { SetModifiedTimeBefore(value); return *this;}
    inline ListAppImageConfigsRequest& WithModifiedTimeBefore(Aws::Utils::DateTime&& value) { SetModifiedTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only AppImageConfigs modified on or after the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimeAfter() const{ return m_modifiedTimeAfter; }
    inline bool ModifiedTimeAfterHasBeenSet() const { return m_modifiedTimeAfterHasBeenSet; }
    inline void SetModifiedTimeAfter(const Aws::Utils::DateTime& value) { m_modifiedTimeAfterHasBeenSet = true; m_modifiedTimeAfter = value; }
    inline void SetModifiedTimeAfter(Aws::Utils::DateTime&& value) { m_modifiedTimeAfterHasBeenSet = true; m_modifiedTimeAfter = std::move(value); }
    inline ListAppImageConfigsRequest& WithModifiedTimeAfter(const Aws::Utils::DateTime& value) { SetModifiedTimeAfter(value); return *this;}
    inline ListAppImageConfigsRequest& WithModifiedTimeAfter(Aws::Utils::DateTime&& value) { SetModifiedTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline const AppImageConfigSortKey& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const AppImageConfigSortKey& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(AppImageConfigSortKey&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListAppImageConfigsRequest& WithSortBy(const AppImageConfigSortKey& value) { SetSortBy(value); return *this;}
    inline ListAppImageConfigsRequest& WithSortBy(AppImageConfigSortKey&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListAppImageConfigsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListAppImageConfigsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTimeBefore;
    bool m_modifiedTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTimeAfter;
    bool m_modifiedTimeAfterHasBeenSet = false;

    AppImageConfigSortKey m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
