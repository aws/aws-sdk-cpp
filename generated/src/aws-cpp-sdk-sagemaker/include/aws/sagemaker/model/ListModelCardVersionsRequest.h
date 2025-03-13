/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelCardStatus.h>
#include <aws/sagemaker/model/ModelCardVersionSortBy.h>
#include <aws/sagemaker/model/ModelCardSortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListModelCardVersionsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListModelCardVersionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListModelCardVersions"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Only list model card versions that were created after the time specified.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListModelCardVersionsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only list model card versions that were created before the time
     * specified.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListModelCardVersionsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of model card versions to list.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListModelCardVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List model card versions for the model card with the specified name or Amazon
     * Resource Name (ARN).</p>
     */
    inline const Aws::String& GetModelCardName() const { return m_modelCardName; }
    inline bool ModelCardNameHasBeenSet() const { return m_modelCardNameHasBeenSet; }
    template<typename ModelCardNameT = Aws::String>
    void SetModelCardName(ModelCardNameT&& value) { m_modelCardNameHasBeenSet = true; m_modelCardName = std::forward<ModelCardNameT>(value); }
    template<typename ModelCardNameT = Aws::String>
    ListModelCardVersionsRequest& WithModelCardName(ModelCardNameT&& value) { SetModelCardName(std::forward<ModelCardNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only list model card versions with the specified approval status.</p>
     */
    inline ModelCardStatus GetModelCardStatus() const { return m_modelCardStatus; }
    inline bool ModelCardStatusHasBeenSet() const { return m_modelCardStatusHasBeenSet; }
    inline void SetModelCardStatus(ModelCardStatus value) { m_modelCardStatusHasBeenSet = true; m_modelCardStatus = value; }
    inline ListModelCardVersionsRequest& WithModelCardStatus(ModelCardStatus value) { SetModelCardStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response to a previous <code>ListModelCardVersions</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model card versions, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelCardVersionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sort listed model card versions by version. Sorts by version by default.</p>
     */
    inline ModelCardVersionSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ModelCardVersionSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListModelCardVersionsRequest& WithSortBy(ModelCardVersionSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sort model card versions by ascending or descending order.</p>
     */
    inline ModelCardSortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(ModelCardSortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListModelCardVersionsRequest& WithSortOrder(ModelCardSortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_modelCardName;
    bool m_modelCardNameHasBeenSet = false;

    ModelCardStatus m_modelCardStatus{ModelCardStatus::NOT_SET};
    bool m_modelCardStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ModelCardVersionSortBy m_sortBy{ModelCardVersionSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    ModelCardSortOrder m_sortOrder{ModelCardSortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
