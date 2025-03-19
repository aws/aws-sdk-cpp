/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ModelCardExportJobStatus.h>
#include <aws/sagemaker/model/ModelCardExportJobSortBy.h>
#include <aws/sagemaker/model/ModelCardExportJobSortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListModelCardExportJobsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListModelCardExportJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListModelCardExportJobs"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>List export jobs for the model card with the specified name.</p>
     */
    inline const Aws::String& GetModelCardName() const { return m_modelCardName; }
    inline bool ModelCardNameHasBeenSet() const { return m_modelCardNameHasBeenSet; }
    template<typename ModelCardNameT = Aws::String>
    void SetModelCardName(ModelCardNameT&& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = std::forward<ModelCardNameT>(value); }
    template<typename ModelCardNameT = Aws::String>
    ListModelCardExportJobsRequest& WithModelCardName(ModelCardNameT&& value) { SetModelCardName(std::forward<ModelCardNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List export jobs for the model card with the specified version.</p>
     */
    inline int GetModelCardVersion() const { return m_modelCardVersion; }
    inline bool ModelCardVersionHasBeenSet() const { return m_modelCardVersionHasBeenSet; }
    inline void SetModelCardVersion(int value) { m_modelCardVersionHasBeenSet = true; m_modelCardVersion = value; }
    inline ListModelCardExportJobsRequest& WithModelCardVersion(int value) { SetModelCardVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only list model card export jobs that were created after the time
     * specified.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListModelCardExportJobsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only list model card export jobs that were created before the time
     * specified.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListModelCardExportJobsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only list model card export jobs with names that contain the specified
     * string.</p>
     */
    inline const Aws::String& GetModelCardExportJobNameContains() const { return m_modelCardExportJobNameContains; }
    inline bool ModelCardExportJobNameContainsHasBeenSet() const { return m_modelCardExportJobNameContainsHasBeenSet; }
    template<typename ModelCardExportJobNameContainsT = Aws::String>
    void SetModelCardExportJobNameContains(ModelCardExportJobNameContainsT&& value) { m_modelCardExportJobNameContainsHasBeenSet = true; m_modelCardExportJobNameContains = std::forward<ModelCardExportJobNameContainsT>(value); }
    template<typename ModelCardExportJobNameContainsT = Aws::String>
    ListModelCardExportJobsRequest& WithModelCardExportJobNameContains(ModelCardExportJobNameContainsT&& value) { SetModelCardExportJobNameContains(std::forward<ModelCardExportJobNameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only list model card export jobs with the specified status.</p>
     */
    inline ModelCardExportJobStatus GetStatusEquals() const { return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(ModelCardExportJobStatus value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline ListModelCardExportJobsRequest& WithStatusEquals(ModelCardExportJobStatus value) { SetStatusEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sort model card export jobs by either name or creation time. Sorts by
     * creation time by default.</p>
     */
    inline ModelCardExportJobSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ModelCardExportJobSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListModelCardExportJobsRequest& WithSortBy(ModelCardExportJobSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sort model card export jobs by ascending or descending order.</p>
     */
    inline ModelCardExportJobSortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(ModelCardExportJobSortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListModelCardExportJobsRequest& WithSortOrder(ModelCardExportJobSortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response to a previous <code>ListModelCardExportJobs</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of model card export jobs, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelCardExportJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of model card export jobs to list.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListModelCardExportJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_modelCardName;
    bool m_modelCardNameHasBeenSet = false;

    int m_modelCardVersion{0};
    bool m_modelCardVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::String m_modelCardExportJobNameContains;
    bool m_modelCardExportJobNameContainsHasBeenSet = false;

    ModelCardExportJobStatus m_statusEquals{ModelCardExportJobStatus::NOT_SET};
    bool m_statusEqualsHasBeenSet = false;

    ModelCardExportJobSortBy m_sortBy{ModelCardExportJobSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    ModelCardExportJobSortOrder m_sortOrder{ModelCardExportJobSortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
