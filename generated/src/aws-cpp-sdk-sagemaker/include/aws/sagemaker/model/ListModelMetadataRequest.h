/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/model/ModelMetadataSearchExpression.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListModelMetadataRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListModelMetadataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListModelMetadata"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>One or more filters that searches for the specified resource or resources in
     * a search. All resource objects that satisfy the expression's condition are
     * included in the search results. Specify the Framework, FrameworkVersion, Domain
     * or Task to filter supported. Filter names and values are case-sensitive.</p>
     */
    inline const ModelMetadataSearchExpression& GetSearchExpression() const { return m_searchExpression; }
    inline bool SearchExpressionHasBeenSet() const { return m_searchExpressionHasBeenSet; }
    template<typename SearchExpressionT = ModelMetadataSearchExpression>
    void SetSearchExpression(SearchExpressionT&& value) { m_searchExpressionHasBeenSet = true; m_searchExpression = std::forward<SearchExpressionT>(value); }
    template<typename SearchExpressionT = ModelMetadataSearchExpression>
    ListModelMetadataRequest& WithSearchExpression(SearchExpressionT&& value) { SetSearchExpression(std::forward<SearchExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response to a previous <code>ListModelMetadataResponse</code> request
     * was truncated, the response includes a NextToken. To retrieve the next set of
     * model metadata, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelMetadataRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of models to return in the response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListModelMetadataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    ModelMetadataSearchExpression m_searchExpression;
    bool m_searchExpressionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
