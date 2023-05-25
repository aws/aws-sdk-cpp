/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SortPipelinesBy.h>
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
  class ListPipelinesRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListPipelinesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPipelines"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The prefix of the pipeline name.</p>
     */
    inline const Aws::String& GetPipelineNamePrefix() const{ return m_pipelineNamePrefix; }

    /**
     * <p>The prefix of the pipeline name.</p>
     */
    inline bool PipelineNamePrefixHasBeenSet() const { return m_pipelineNamePrefixHasBeenSet; }

    /**
     * <p>The prefix of the pipeline name.</p>
     */
    inline void SetPipelineNamePrefix(const Aws::String& value) { m_pipelineNamePrefixHasBeenSet = true; m_pipelineNamePrefix = value; }

    /**
     * <p>The prefix of the pipeline name.</p>
     */
    inline void SetPipelineNamePrefix(Aws::String&& value) { m_pipelineNamePrefixHasBeenSet = true; m_pipelineNamePrefix = std::move(value); }

    /**
     * <p>The prefix of the pipeline name.</p>
     */
    inline void SetPipelineNamePrefix(const char* value) { m_pipelineNamePrefixHasBeenSet = true; m_pipelineNamePrefix.assign(value); }

    /**
     * <p>The prefix of the pipeline name.</p>
     */
    inline ListPipelinesRequest& WithPipelineNamePrefix(const Aws::String& value) { SetPipelineNamePrefix(value); return *this;}

    /**
     * <p>The prefix of the pipeline name.</p>
     */
    inline ListPipelinesRequest& WithPipelineNamePrefix(Aws::String&& value) { SetPipelineNamePrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix of the pipeline name.</p>
     */
    inline ListPipelinesRequest& WithPipelineNamePrefix(const char* value) { SetPipelineNamePrefix(value); return *this;}


    /**
     * <p>A filter that returns the pipelines that were created after a specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>A filter that returns the pipelines that were created after a specified
     * time.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>A filter that returns the pipelines that were created after a specified
     * time.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>A filter that returns the pipelines that were created after a specified
     * time.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>A filter that returns the pipelines that were created after a specified
     * time.</p>
     */
    inline ListPipelinesRequest& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>A filter that returns the pipelines that were created after a specified
     * time.</p>
     */
    inline ListPipelinesRequest& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns the pipelines that were created before a specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>A filter that returns the pipelines that were created before a specified
     * time.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>A filter that returns the pipelines that were created before a specified
     * time.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>A filter that returns the pipelines that were created before a specified
     * time.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>A filter that returns the pipelines that were created before a specified
     * time.</p>
     */
    inline ListPipelinesRequest& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>A filter that returns the pipelines that were created before a specified
     * time.</p>
     */
    inline ListPipelinesRequest& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>The field by which to sort results. The default is
     * <code>CreatedTime</code>.</p>
     */
    inline const SortPipelinesBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The field by which to sort results. The default is
     * <code>CreatedTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The field by which to sort results. The default is
     * <code>CreatedTime</code>.</p>
     */
    inline void SetSortBy(const SortPipelinesBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The field by which to sort results. The default is
     * <code>CreatedTime</code>.</p>
     */
    inline void SetSortBy(SortPipelinesBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The field by which to sort results. The default is
     * <code>CreatedTime</code>.</p>
     */
    inline ListPipelinesRequest& WithSortBy(const SortPipelinesBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The field by which to sort results. The default is
     * <code>CreatedTime</code>.</p>
     */
    inline ListPipelinesRequest& WithSortBy(SortPipelinesBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order for results.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for results.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for results.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for results.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for results.</p>
     */
    inline ListPipelinesRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for results.</p>
     */
    inline ListPipelinesRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>If the result of the previous <code>ListPipelines</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipelines, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListPipelines</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipelines, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of the previous <code>ListPipelines</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipelines, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListPipelines</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipelines, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListPipelines</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipelines, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListPipelines</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipelines, use the token in the next request.</p>
     */
    inline ListPipelinesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListPipelines</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipelines, use the token in the next request.</p>
     */
    inline ListPipelinesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListPipelines</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipelines, use the token in the next request.</p>
     */
    inline ListPipelinesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of pipelines to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of pipelines to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of pipelines to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of pipelines to return in the response.</p>
     */
    inline ListPipelinesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_pipelineNamePrefix;
    bool m_pipelineNamePrefixHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    SortPipelinesBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
