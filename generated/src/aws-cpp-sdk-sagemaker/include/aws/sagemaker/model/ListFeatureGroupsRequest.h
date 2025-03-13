/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/FeatureGroupStatus.h>
#include <aws/sagemaker/model/OfflineStoreStatusValue.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/FeatureGroupSortOrder.h>
#include <aws/sagemaker/model/FeatureGroupSortBy.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListFeatureGroupsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListFeatureGroupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFeatureGroups"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A string that partially matches one or more <code>FeatureGroup</code>s names.
     * Filters <code>FeatureGroup</code>s by name. </p>
     */
    inline const Aws::String& GetNameContains() const { return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    template<typename NameContainsT = Aws::String>
    void SetNameContains(NameContainsT&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::forward<NameContainsT>(value); }
    template<typename NameContainsT = Aws::String>
    ListFeatureGroupsRequest& WithNameContains(NameContainsT&& value) { SetNameContains(std::forward<NameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>FeatureGroup</code> status. Filters by <code>FeatureGroup</code>
     * status. </p>
     */
    inline FeatureGroupStatus GetFeatureGroupStatusEquals() const { return m_featureGroupStatusEquals; }
    inline bool FeatureGroupStatusEqualsHasBeenSet() const { return m_featureGroupStatusEqualsHasBeenSet; }
    inline void SetFeatureGroupStatusEquals(FeatureGroupStatus value) { m_featureGroupStatusEqualsHasBeenSet = true; m_featureGroupStatusEquals = value; }
    inline ListFeatureGroupsRequest& WithFeatureGroupStatusEquals(FeatureGroupStatus value) { SetFeatureGroupStatusEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>OfflineStore</code> status. Filters by <code>OfflineStore</code>
     * status. </p>
     */
    inline OfflineStoreStatusValue GetOfflineStoreStatusEquals() const { return m_offlineStoreStatusEquals; }
    inline bool OfflineStoreStatusEqualsHasBeenSet() const { return m_offlineStoreStatusEqualsHasBeenSet; }
    inline void SetOfflineStoreStatusEquals(OfflineStoreStatusValue value) { m_offlineStoreStatusEqualsHasBeenSet = true; m_offlineStoreStatusEquals = value; }
    inline ListFeatureGroupsRequest& WithOfflineStoreStatusEquals(OfflineStoreStatusValue value) { SetOfflineStoreStatusEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to search for <code>FeatureGroups</code>s created after a
     * specific date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListFeatureGroupsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to search for <code>FeatureGroups</code>s created before a
     * specific date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListFeatureGroupsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which feature groups are listed.</p>
     */
    inline FeatureGroupSortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(FeatureGroupSortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListFeatureGroupsRequest& WithSortOrder(FeatureGroupSortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value on which the feature group list is sorted.</p>
     */
    inline FeatureGroupSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(FeatureGroupSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListFeatureGroupsRequest& WithSortBy(FeatureGroupSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results returned by <code>ListFeatureGroups</code>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFeatureGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to resume pagination of <code>ListFeatureGroups</code> results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFeatureGroupsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    FeatureGroupStatus m_featureGroupStatusEquals{FeatureGroupStatus::NOT_SET};
    bool m_featureGroupStatusEqualsHasBeenSet = false;

    OfflineStoreStatusValue m_offlineStoreStatusEquals{OfflineStoreStatusValue::NOT_SET};
    bool m_offlineStoreStatusEqualsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    FeatureGroupSortOrder m_sortOrder{FeatureGroupSortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    FeatureGroupSortBy m_sortBy{FeatureGroupSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
