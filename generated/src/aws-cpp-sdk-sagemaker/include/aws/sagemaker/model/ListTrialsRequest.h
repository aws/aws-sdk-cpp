/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SortTrialsBy.h>
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
  class ListTrialsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListTrialsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTrials"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A filter that returns only trials that are part of the specified
     * experiment.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }

    /**
     * <p>A filter that returns only trials that are part of the specified
     * experiment.</p>
     */
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }

    /**
     * <p>A filter that returns only trials that are part of the specified
     * experiment.</p>
     */
    inline void SetExperimentName(const Aws::String& value) { m_experimentNameHasBeenSet = true; m_experimentName = value; }

    /**
     * <p>A filter that returns only trials that are part of the specified
     * experiment.</p>
     */
    inline void SetExperimentName(Aws::String&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::move(value); }

    /**
     * <p>A filter that returns only trials that are part of the specified
     * experiment.</p>
     */
    inline void SetExperimentName(const char* value) { m_experimentNameHasBeenSet = true; m_experimentName.assign(value); }

    /**
     * <p>A filter that returns only trials that are part of the specified
     * experiment.</p>
     */
    inline ListTrialsRequest& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}

    /**
     * <p>A filter that returns only trials that are part of the specified
     * experiment.</p>
     */
    inline ListTrialsRequest& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}

    /**
     * <p>A filter that returns only trials that are part of the specified
     * experiment.</p>
     */
    inline ListTrialsRequest& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}


    /**
     * <p>A filter that returns only trials that are associated with the specified
     * trial component.</p>
     */
    inline const Aws::String& GetTrialComponentName() const{ return m_trialComponentName; }

    /**
     * <p>A filter that returns only trials that are associated with the specified
     * trial component.</p>
     */
    inline bool TrialComponentNameHasBeenSet() const { return m_trialComponentNameHasBeenSet; }

    /**
     * <p>A filter that returns only trials that are associated with the specified
     * trial component.</p>
     */
    inline void SetTrialComponentName(const Aws::String& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = value; }

    /**
     * <p>A filter that returns only trials that are associated with the specified
     * trial component.</p>
     */
    inline void SetTrialComponentName(Aws::String&& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = std::move(value); }

    /**
     * <p>A filter that returns only trials that are associated with the specified
     * trial component.</p>
     */
    inline void SetTrialComponentName(const char* value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName.assign(value); }

    /**
     * <p>A filter that returns only trials that are associated with the specified
     * trial component.</p>
     */
    inline ListTrialsRequest& WithTrialComponentName(const Aws::String& value) { SetTrialComponentName(value); return *this;}

    /**
     * <p>A filter that returns only trials that are associated with the specified
     * trial component.</p>
     */
    inline ListTrialsRequest& WithTrialComponentName(Aws::String&& value) { SetTrialComponentName(std::move(value)); return *this;}

    /**
     * <p>A filter that returns only trials that are associated with the specified
     * trial component.</p>
     */
    inline ListTrialsRequest& WithTrialComponentName(const char* value) { SetTrialComponentName(value); return *this;}


    /**
     * <p>A filter that returns only trials created after the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>A filter that returns only trials created after the specified time.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>A filter that returns only trials created after the specified time.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>A filter that returns only trials created after the specified time.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>A filter that returns only trials created after the specified time.</p>
     */
    inline ListTrialsRequest& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>A filter that returns only trials created after the specified time.</p>
     */
    inline ListTrialsRequest& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only trials created before the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>A filter that returns only trials created before the specified time.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only trials created before the specified time.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>A filter that returns only trials created before the specified time.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>A filter that returns only trials created before the specified time.</p>
     */
    inline ListTrialsRequest& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>A filter that returns only trials created before the specified time.</p>
     */
    inline ListTrialsRequest& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline const SortTrialsBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const SortTrialsBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(SortTrialsBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline ListTrialsRequest& WithSortBy(const SortTrialsBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline ListTrialsRequest& WithSortBy(SortTrialsBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline ListTrialsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline ListTrialsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>The maximum number of trials to return in the response. The default value is
     * 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of trials to return in the response. The default value is
     * 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of trials to return in the response. The default value is
     * 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of trials to return in the response. The default value is
     * 10.</p>
     */
    inline ListTrialsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the previous call to <code>ListTrials</code> didn't return the full set of
     * trials, the call returns a token for getting the next set of trials.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous call to <code>ListTrials</code> didn't return the full set of
     * trials, the call returns a token for getting the next set of trials.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous call to <code>ListTrials</code> didn't return the full set of
     * trials, the call returns a token for getting the next set of trials.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous call to <code>ListTrials</code> didn't return the full set of
     * trials, the call returns a token for getting the next set of trials.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous call to <code>ListTrials</code> didn't return the full set of
     * trials, the call returns a token for getting the next set of trials.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous call to <code>ListTrials</code> didn't return the full set of
     * trials, the call returns a token for getting the next set of trials.</p>
     */
    inline ListTrialsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous call to <code>ListTrials</code> didn't return the full set of
     * trials, the call returns a token for getting the next set of trials.</p>
     */
    inline ListTrialsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous call to <code>ListTrials</code> didn't return the full set of
     * trials, the call returns a token for getting the next set of trials.</p>
     */
    inline ListTrialsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_experimentName;
    bool m_experimentNameHasBeenSet = false;

    Aws::String m_trialComponentName;
    bool m_trialComponentNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    SortTrialsBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
