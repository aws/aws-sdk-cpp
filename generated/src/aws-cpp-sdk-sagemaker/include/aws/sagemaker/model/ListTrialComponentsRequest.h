/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SortTrialComponentsBy.h>
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
  class ListTrialComponentsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListTrialComponentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTrialComponents"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A filter that returns only components that are part of the specified
     * experiment. If you specify <code>ExperimentName</code>, you can't filter by
     * <code>SourceArn</code> or <code>TrialName</code>.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }

    /**
     * <p>A filter that returns only components that are part of the specified
     * experiment. If you specify <code>ExperimentName</code>, you can't filter by
     * <code>SourceArn</code> or <code>TrialName</code>.</p>
     */
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }

    /**
     * <p>A filter that returns only components that are part of the specified
     * experiment. If you specify <code>ExperimentName</code>, you can't filter by
     * <code>SourceArn</code> or <code>TrialName</code>.</p>
     */
    inline void SetExperimentName(const Aws::String& value) { m_experimentNameHasBeenSet = true; m_experimentName = value; }

    /**
     * <p>A filter that returns only components that are part of the specified
     * experiment. If you specify <code>ExperimentName</code>, you can't filter by
     * <code>SourceArn</code> or <code>TrialName</code>.</p>
     */
    inline void SetExperimentName(Aws::String&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::move(value); }

    /**
     * <p>A filter that returns only components that are part of the specified
     * experiment. If you specify <code>ExperimentName</code>, you can't filter by
     * <code>SourceArn</code> or <code>TrialName</code>.</p>
     */
    inline void SetExperimentName(const char* value) { m_experimentNameHasBeenSet = true; m_experimentName.assign(value); }

    /**
     * <p>A filter that returns only components that are part of the specified
     * experiment. If you specify <code>ExperimentName</code>, you can't filter by
     * <code>SourceArn</code> or <code>TrialName</code>.</p>
     */
    inline ListTrialComponentsRequest& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}

    /**
     * <p>A filter that returns only components that are part of the specified
     * experiment. If you specify <code>ExperimentName</code>, you can't filter by
     * <code>SourceArn</code> or <code>TrialName</code>.</p>
     */
    inline ListTrialComponentsRequest& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}

    /**
     * <p>A filter that returns only components that are part of the specified
     * experiment. If you specify <code>ExperimentName</code>, you can't filter by
     * <code>SourceArn</code> or <code>TrialName</code>.</p>
     */
    inline ListTrialComponentsRequest& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}


    /**
     * <p>A filter that returns only components that are part of the specified trial.
     * If you specify <code>TrialName</code>, you can't filter by
     * <code>ExperimentName</code> or <code>SourceArn</code>.</p>
     */
    inline const Aws::String& GetTrialName() const{ return m_trialName; }

    /**
     * <p>A filter that returns only components that are part of the specified trial.
     * If you specify <code>TrialName</code>, you can't filter by
     * <code>ExperimentName</code> or <code>SourceArn</code>.</p>
     */
    inline bool TrialNameHasBeenSet() const { return m_trialNameHasBeenSet; }

    /**
     * <p>A filter that returns only components that are part of the specified trial.
     * If you specify <code>TrialName</code>, you can't filter by
     * <code>ExperimentName</code> or <code>SourceArn</code>.</p>
     */
    inline void SetTrialName(const Aws::String& value) { m_trialNameHasBeenSet = true; m_trialName = value; }

    /**
     * <p>A filter that returns only components that are part of the specified trial.
     * If you specify <code>TrialName</code>, you can't filter by
     * <code>ExperimentName</code> or <code>SourceArn</code>.</p>
     */
    inline void SetTrialName(Aws::String&& value) { m_trialNameHasBeenSet = true; m_trialName = std::move(value); }

    /**
     * <p>A filter that returns only components that are part of the specified trial.
     * If you specify <code>TrialName</code>, you can't filter by
     * <code>ExperimentName</code> or <code>SourceArn</code>.</p>
     */
    inline void SetTrialName(const char* value) { m_trialNameHasBeenSet = true; m_trialName.assign(value); }

    /**
     * <p>A filter that returns only components that are part of the specified trial.
     * If you specify <code>TrialName</code>, you can't filter by
     * <code>ExperimentName</code> or <code>SourceArn</code>.</p>
     */
    inline ListTrialComponentsRequest& WithTrialName(const Aws::String& value) { SetTrialName(value); return *this;}

    /**
     * <p>A filter that returns only components that are part of the specified trial.
     * If you specify <code>TrialName</code>, you can't filter by
     * <code>ExperimentName</code> or <code>SourceArn</code>.</p>
     */
    inline ListTrialComponentsRequest& WithTrialName(Aws::String&& value) { SetTrialName(std::move(value)); return *this;}

    /**
     * <p>A filter that returns only components that are part of the specified trial.
     * If you specify <code>TrialName</code>, you can't filter by
     * <code>ExperimentName</code> or <code>SourceArn</code>.</p>
     */
    inline ListTrialComponentsRequest& WithTrialName(const char* value) { SetTrialName(value); return *this;}


    /**
     * <p>A filter that returns only components that have the specified source Amazon
     * Resource Name (ARN). If you specify <code>SourceArn</code>, you can't filter by
     * <code>ExperimentName</code> or <code>TrialName</code>.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>A filter that returns only components that have the specified source Amazon
     * Resource Name (ARN). If you specify <code>SourceArn</code>, you can't filter by
     * <code>ExperimentName</code> or <code>TrialName</code>.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>A filter that returns only components that have the specified source Amazon
     * Resource Name (ARN). If you specify <code>SourceArn</code>, you can't filter by
     * <code>ExperimentName</code> or <code>TrialName</code>.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>A filter that returns only components that have the specified source Amazon
     * Resource Name (ARN). If you specify <code>SourceArn</code>, you can't filter by
     * <code>ExperimentName</code> or <code>TrialName</code>.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>A filter that returns only components that have the specified source Amazon
     * Resource Name (ARN). If you specify <code>SourceArn</code>, you can't filter by
     * <code>ExperimentName</code> or <code>TrialName</code>.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>A filter that returns only components that have the specified source Amazon
     * Resource Name (ARN). If you specify <code>SourceArn</code>, you can't filter by
     * <code>ExperimentName</code> or <code>TrialName</code>.</p>
     */
    inline ListTrialComponentsRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>A filter that returns only components that have the specified source Amazon
     * Resource Name (ARN). If you specify <code>SourceArn</code>, you can't filter by
     * <code>ExperimentName</code> or <code>TrialName</code>.</p>
     */
    inline ListTrialComponentsRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>A filter that returns only components that have the specified source Amazon
     * Resource Name (ARN). If you specify <code>SourceArn</code>, you can't filter by
     * <code>ExperimentName</code> or <code>TrialName</code>.</p>
     */
    inline ListTrialComponentsRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>A filter that returns only components created after the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>A filter that returns only components created after the specified time.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>A filter that returns only components created after the specified time.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>A filter that returns only components created after the specified time.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>A filter that returns only components created after the specified time.</p>
     */
    inline ListTrialComponentsRequest& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>A filter that returns only components created after the specified time.</p>
     */
    inline ListTrialComponentsRequest& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only components created before the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>A filter that returns only components created before the specified time.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only components created before the specified time.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>A filter that returns only components created before the specified time.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>A filter that returns only components created before the specified time.</p>
     */
    inline ListTrialComponentsRequest& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>A filter that returns only components created before the specified time.</p>
     */
    inline ListTrialComponentsRequest& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline const SortTrialComponentsBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const SortTrialComponentsBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(SortTrialComponentsBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline ListTrialComponentsRequest& WithSortBy(const SortTrialComponentsBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline ListTrialComponentsRequest& WithSortBy(SortTrialComponentsBy&& value) { SetSortBy(std::move(value)); return *this;}


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
    inline ListTrialComponentsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline ListTrialComponentsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>The maximum number of components to return in the response. The default value
     * is 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of components to return in the response. The default value
     * is 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of components to return in the response. The default value
     * is 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of components to return in the response. The default value
     * is 10.</p>
     */
    inline ListTrialComponentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the previous call to <code>ListTrialComponents</code> didn't return the
     * full set of components, the call returns a token for getting the next set of
     * components.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous call to <code>ListTrialComponents</code> didn't return the
     * full set of components, the call returns a token for getting the next set of
     * components.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous call to <code>ListTrialComponents</code> didn't return the
     * full set of components, the call returns a token for getting the next set of
     * components.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous call to <code>ListTrialComponents</code> didn't return the
     * full set of components, the call returns a token for getting the next set of
     * components.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous call to <code>ListTrialComponents</code> didn't return the
     * full set of components, the call returns a token for getting the next set of
     * components.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous call to <code>ListTrialComponents</code> didn't return the
     * full set of components, the call returns a token for getting the next set of
     * components.</p>
     */
    inline ListTrialComponentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous call to <code>ListTrialComponents</code> didn't return the
     * full set of components, the call returns a token for getting the next set of
     * components.</p>
     */
    inline ListTrialComponentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous call to <code>ListTrialComponents</code> didn't return the
     * full set of components, the call returns a token for getting the next set of
     * components.</p>
     */
    inline ListTrialComponentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_experimentName;
    bool m_experimentNameHasBeenSet = false;

    Aws::String m_trialName;
    bool m_trialNameHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    SortTrialComponentsBy m_sortBy;
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
