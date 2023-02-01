/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListPipelineExecutionStepsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListPipelineExecutionStepsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPipelineExecutionSteps"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionArn() const{ return m_pipelineExecutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline bool PipelineExecutionArnHasBeenSet() const { return m_pipelineExecutionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionArn(const Aws::String& value) { m_pipelineExecutionArnHasBeenSet = true; m_pipelineExecutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionArn(Aws::String&& value) { m_pipelineExecutionArnHasBeenSet = true; m_pipelineExecutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionArn(const char* value) { m_pipelineExecutionArnHasBeenSet = true; m_pipelineExecutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline ListPipelineExecutionStepsRequest& WithPipelineExecutionArn(const Aws::String& value) { SetPipelineExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline ListPipelineExecutionStepsRequest& WithPipelineExecutionArn(Aws::String&& value) { SetPipelineExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline ListPipelineExecutionStepsRequest& WithPipelineExecutionArn(const char* value) { SetPipelineExecutionArn(value); return *this;}


    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline ListPipelineExecutionStepsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline ListPipelineExecutionStepsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline ListPipelineExecutionStepsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of pipeline execution steps to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of pipeline execution steps to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of pipeline execution steps to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of pipeline execution steps to return in the response.</p>
     */
    inline ListPipelineExecutionStepsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The field by which to sort results. The default is
     * <code>CreatedTime</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The field by which to sort results. The default is
     * <code>CreatedTime</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The field by which to sort results. The default is
     * <code>CreatedTime</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The field by which to sort results. The default is
     * <code>CreatedTime</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The field by which to sort results. The default is
     * <code>CreatedTime</code>.</p>
     */
    inline ListPipelineExecutionStepsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The field by which to sort results. The default is
     * <code>CreatedTime</code>.</p>
     */
    inline ListPipelineExecutionStepsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineExecutionArn;
    bool m_pipelineExecutionArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
