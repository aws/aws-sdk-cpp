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
    AWS_SAGEMAKER_API ListFeatureGroupsRequest();

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
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }
    inline ListFeatureGroupsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}
    inline ListFeatureGroupsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}
    inline ListFeatureGroupsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>FeatureGroup</code> status. Filters by <code>FeatureGroup</code>
     * status. </p>
     */
    inline const FeatureGroupStatus& GetFeatureGroupStatusEquals() const{ return m_featureGroupStatusEquals; }
    inline bool FeatureGroupStatusEqualsHasBeenSet() const { return m_featureGroupStatusEqualsHasBeenSet; }
    inline void SetFeatureGroupStatusEquals(const FeatureGroupStatus& value) { m_featureGroupStatusEqualsHasBeenSet = true; m_featureGroupStatusEquals = value; }
    inline void SetFeatureGroupStatusEquals(FeatureGroupStatus&& value) { m_featureGroupStatusEqualsHasBeenSet = true; m_featureGroupStatusEquals = std::move(value); }
    inline ListFeatureGroupsRequest& WithFeatureGroupStatusEquals(const FeatureGroupStatus& value) { SetFeatureGroupStatusEquals(value); return *this;}
    inline ListFeatureGroupsRequest& WithFeatureGroupStatusEquals(FeatureGroupStatus&& value) { SetFeatureGroupStatusEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>OfflineStore</code> status. Filters by <code>OfflineStore</code>
     * status. </p>
     */
    inline const OfflineStoreStatusValue& GetOfflineStoreStatusEquals() const{ return m_offlineStoreStatusEquals; }
    inline bool OfflineStoreStatusEqualsHasBeenSet() const { return m_offlineStoreStatusEqualsHasBeenSet; }
    inline void SetOfflineStoreStatusEquals(const OfflineStoreStatusValue& value) { m_offlineStoreStatusEqualsHasBeenSet = true; m_offlineStoreStatusEquals = value; }
    inline void SetOfflineStoreStatusEquals(OfflineStoreStatusValue&& value) { m_offlineStoreStatusEqualsHasBeenSet = true; m_offlineStoreStatusEquals = std::move(value); }
    inline ListFeatureGroupsRequest& WithOfflineStoreStatusEquals(const OfflineStoreStatusValue& value) { SetOfflineStoreStatusEquals(value); return *this;}
    inline ListFeatureGroupsRequest& WithOfflineStoreStatusEquals(OfflineStoreStatusValue&& value) { SetOfflineStoreStatusEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to search for <code>FeatureGroups</code>s created after a
     * specific date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }
    inline ListFeatureGroupsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}
    inline ListFeatureGroupsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to search for <code>FeatureGroups</code>s created before a
     * specific date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }
    inline ListFeatureGroupsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}
    inline ListFeatureGroupsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which feature groups are listed.</p>
     */
    inline const FeatureGroupSortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const FeatureGroupSortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(FeatureGroupSortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListFeatureGroupsRequest& WithSortOrder(const FeatureGroupSortOrder& value) { SetSortOrder(value); return *this;}
    inline ListFeatureGroupsRequest& WithSortOrder(FeatureGroupSortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value on which the feature group list is sorted.</p>
     */
    inline const FeatureGroupSortBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const FeatureGroupSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(FeatureGroupSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListFeatureGroupsRequest& WithSortBy(const FeatureGroupSortBy& value) { SetSortBy(value); return *this;}
    inline ListFeatureGroupsRequest& WithSortBy(FeatureGroupSortBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results returned by <code>ListFeatureGroups</code>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFeatureGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to resume pagination of <code>ListFeatureGroups</code> results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListFeatureGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFeatureGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFeatureGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    FeatureGroupStatus m_featureGroupStatusEquals;
    bool m_featureGroupStatusEqualsHasBeenSet = false;

    OfflineStoreStatusValue m_offlineStoreStatusEquals;
    bool m_offlineStoreStatusEqualsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    FeatureGroupSortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    FeatureGroupSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
