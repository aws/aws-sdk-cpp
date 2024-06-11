/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/RecommendationJobStatus.h>
#include <aws/sagemaker/model/ListInferenceRecommendationsJobsSortBy.h>
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
  class ListInferenceRecommendationsJobsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListInferenceRecommendationsJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInferenceRecommendationsJobs"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A filter that returns only jobs created after the specified time
     * (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }
    inline ListInferenceRecommendationsJobsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}
    inline ListInferenceRecommendationsJobsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only jobs created before the specified time
     * (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }
    inline ListInferenceRecommendationsJobsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}
    inline ListInferenceRecommendationsJobsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only jobs that were last modified after the specified
     * time (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const{ return m_lastModifiedTimeAfter; }
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }
    inline void SetLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = value; }
    inline void SetLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::move(value); }
    inline ListInferenceRecommendationsJobsRequest& WithLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { SetLastModifiedTimeAfter(value); return *this;}
    inline ListInferenceRecommendationsJobsRequest& WithLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { SetLastModifiedTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only jobs that were last modified before the specified
     * time (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const{ return m_lastModifiedTimeBefore; }
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }
    inline void SetLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = value; }
    inline void SetLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::move(value); }
    inline ListInferenceRecommendationsJobsRequest& WithLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { SetLastModifiedTimeBefore(value); return *this;}
    inline ListInferenceRecommendationsJobsRequest& WithLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { SetLastModifiedTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string in the job name. This filter returns only recommendations whose name
     * contains the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }
    inline ListInferenceRecommendationsJobsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}
    inline ListInferenceRecommendationsJobsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}
    inline ListInferenceRecommendationsJobsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that retrieves only inference recommendations jobs with a specific
     * status.</p>
     */
    inline const RecommendationJobStatus& GetStatusEquals() const{ return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(const RecommendationJobStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline void SetStatusEquals(RecommendationJobStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }
    inline ListInferenceRecommendationsJobsRequest& WithStatusEquals(const RecommendationJobStatus& value) { SetStatusEquals(value); return *this;}
    inline ListInferenceRecommendationsJobsRequest& WithStatusEquals(RecommendationJobStatus&& value) { SetStatusEquals(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter by which to sort the results.</p>
     */
    inline const ListInferenceRecommendationsJobsSortBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const ListInferenceRecommendationsJobsSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(ListInferenceRecommendationsJobsSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListInferenceRecommendationsJobsRequest& WithSortBy(const ListInferenceRecommendationsJobsSortBy& value) { SetSortBy(value); return *this;}
    inline ListInferenceRecommendationsJobsRequest& WithSortBy(ListInferenceRecommendationsJobsSortBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for the results.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListInferenceRecommendationsJobsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListInferenceRecommendationsJobsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response to a previous
     * <code>ListInferenceRecommendationsJobsRequest</code> request was truncated, the
     * response includes a <code>NextToken</code>. To retrieve the next set of
     * recommendations, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListInferenceRecommendationsJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInferenceRecommendationsJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInferenceRecommendationsJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of recommendations to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListInferenceRecommendationsJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only jobs that were created for this model.</p>
     */
    inline const Aws::String& GetModelNameEquals() const{ return m_modelNameEquals; }
    inline bool ModelNameEqualsHasBeenSet() const { return m_modelNameEqualsHasBeenSet; }
    inline void SetModelNameEquals(const Aws::String& value) { m_modelNameEqualsHasBeenSet = true; m_modelNameEquals = value; }
    inline void SetModelNameEquals(Aws::String&& value) { m_modelNameEqualsHasBeenSet = true; m_modelNameEquals = std::move(value); }
    inline void SetModelNameEquals(const char* value) { m_modelNameEqualsHasBeenSet = true; m_modelNameEquals.assign(value); }
    inline ListInferenceRecommendationsJobsRequest& WithModelNameEquals(const Aws::String& value) { SetModelNameEquals(value); return *this;}
    inline ListInferenceRecommendationsJobsRequest& WithModelNameEquals(Aws::String&& value) { SetModelNameEquals(std::move(value)); return *this;}
    inline ListInferenceRecommendationsJobsRequest& WithModelNameEquals(const char* value) { SetModelNameEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only jobs that were created for this versioned model
     * package.</p>
     */
    inline const Aws::String& GetModelPackageVersionArnEquals() const{ return m_modelPackageVersionArnEquals; }
    inline bool ModelPackageVersionArnEqualsHasBeenSet() const { return m_modelPackageVersionArnEqualsHasBeenSet; }
    inline void SetModelPackageVersionArnEquals(const Aws::String& value) { m_modelPackageVersionArnEqualsHasBeenSet = true; m_modelPackageVersionArnEquals = value; }
    inline void SetModelPackageVersionArnEquals(Aws::String&& value) { m_modelPackageVersionArnEqualsHasBeenSet = true; m_modelPackageVersionArnEquals = std::move(value); }
    inline void SetModelPackageVersionArnEquals(const char* value) { m_modelPackageVersionArnEqualsHasBeenSet = true; m_modelPackageVersionArnEquals.assign(value); }
    inline ListInferenceRecommendationsJobsRequest& WithModelPackageVersionArnEquals(const Aws::String& value) { SetModelPackageVersionArnEquals(value); return *this;}
    inline ListInferenceRecommendationsJobsRequest& WithModelPackageVersionArnEquals(Aws::String&& value) { SetModelPackageVersionArnEquals(std::move(value)); return *this;}
    inline ListInferenceRecommendationsJobsRequest& WithModelPackageVersionArnEquals(const char* value) { SetModelPackageVersionArnEquals(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeAfter;
    bool m_lastModifiedTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeBefore;
    bool m_lastModifiedTimeBeforeHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    RecommendationJobStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet = false;

    ListInferenceRecommendationsJobsSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_modelNameEquals;
    bool m_modelNameEqualsHasBeenSet = false;

    Aws::String m_modelPackageVersionArnEquals;
    bool m_modelPackageVersionArnEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
