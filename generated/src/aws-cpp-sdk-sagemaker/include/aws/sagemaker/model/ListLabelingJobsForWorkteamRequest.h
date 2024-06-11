﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ListLabelingJobsForWorkteamSortByOptions.h>
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
  class ListLabelingJobsForWorkteamRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListLabelingJobsForWorkteamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLabelingJobsForWorkteam"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the work team for which you want to see
     * labeling jobs for.</p>
     */
    inline const Aws::String& GetWorkteamArn() const{ return m_workteamArn; }
    inline bool WorkteamArnHasBeenSet() const { return m_workteamArnHasBeenSet; }
    inline void SetWorkteamArn(const Aws::String& value) { m_workteamArnHasBeenSet = true; m_workteamArn = value; }
    inline void SetWorkteamArn(Aws::String&& value) { m_workteamArnHasBeenSet = true; m_workteamArn = std::move(value); }
    inline void SetWorkteamArn(const char* value) { m_workteamArnHasBeenSet = true; m_workteamArn.assign(value); }
    inline ListLabelingJobsForWorkteamRequest& WithWorkteamArn(const Aws::String& value) { SetWorkteamArn(value); return *this;}
    inline ListLabelingJobsForWorkteamRequest& WithWorkteamArn(Aws::String&& value) { SetWorkteamArn(std::move(value)); return *this;}
    inline ListLabelingJobsForWorkteamRequest& WithWorkteamArn(const char* value) { SetWorkteamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of labeling jobs to return in each page of the
     * response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListLabelingJobsForWorkteamRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the result of the previous <code>ListLabelingJobsForWorkteam</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of labeling jobs, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListLabelingJobsForWorkteamRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLabelingJobsForWorkteamRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLabelingJobsForWorkteamRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only labeling jobs created after the specified time
     * (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }
    inline ListLabelingJobsForWorkteamRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}
    inline ListLabelingJobsForWorkteamRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns only labeling jobs created before the specified time
     * (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }
    inline ListLabelingJobsForWorkteamRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}
    inline ListLabelingJobsForWorkteamRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter the limits jobs to only the ones whose job reference code contains
     * the specified string.</p>
     */
    inline const Aws::String& GetJobReferenceCodeContains() const{ return m_jobReferenceCodeContains; }
    inline bool JobReferenceCodeContainsHasBeenSet() const { return m_jobReferenceCodeContainsHasBeenSet; }
    inline void SetJobReferenceCodeContains(const Aws::String& value) { m_jobReferenceCodeContainsHasBeenSet = true; m_jobReferenceCodeContains = value; }
    inline void SetJobReferenceCodeContains(Aws::String&& value) { m_jobReferenceCodeContainsHasBeenSet = true; m_jobReferenceCodeContains = std::move(value); }
    inline void SetJobReferenceCodeContains(const char* value) { m_jobReferenceCodeContainsHasBeenSet = true; m_jobReferenceCodeContains.assign(value); }
    inline ListLabelingJobsForWorkteamRequest& WithJobReferenceCodeContains(const Aws::String& value) { SetJobReferenceCodeContains(value); return *this;}
    inline ListLabelingJobsForWorkteamRequest& WithJobReferenceCodeContains(Aws::String&& value) { SetJobReferenceCodeContains(std::move(value)); return *this;}
    inline ListLabelingJobsForWorkteamRequest& WithJobReferenceCodeContains(const char* value) { SetJobReferenceCodeContains(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline const ListLabelingJobsForWorkteamSortByOptions& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const ListLabelingJobsForWorkteamSortByOptions& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(ListLabelingJobsForWorkteamSortByOptions&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListLabelingJobsForWorkteamRequest& WithSortBy(const ListLabelingJobsForWorkteamSortByOptions& value) { SetSortBy(value); return *this;}
    inline ListLabelingJobsForWorkteamRequest& WithSortBy(ListLabelingJobsForWorkteamSortByOptions&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ListLabelingJobsForWorkteamRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ListLabelingJobsForWorkteamRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_workteamArn;
    bool m_workteamArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::String m_jobReferenceCodeContains;
    bool m_jobReferenceCodeContainsHasBeenSet = false;

    ListLabelingJobsForWorkteamSortByOptions m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
