/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/ConnectWisdomServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/SearchExpression.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ConnectWisdomService
{
namespace Model
{

  /**
   */
  class SearchContentRequest : public ConnectWisdomServiceRequest
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API SearchContentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchContent"; }

    AWS_CONNECTWISDOMSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONNECTWISDOMSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline SearchContentRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline SearchContentRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline SearchContentRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline SearchContentRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchContentRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchContentRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchContentRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The search expression to filter results.</p>
     */
    inline const SearchExpression& GetSearchExpression() const{ return m_searchExpression; }

    /**
     * <p>The search expression to filter results.</p>
     */
    inline bool SearchExpressionHasBeenSet() const { return m_searchExpressionHasBeenSet; }

    /**
     * <p>The search expression to filter results.</p>
     */
    inline void SetSearchExpression(const SearchExpression& value) { m_searchExpressionHasBeenSet = true; m_searchExpression = value; }

    /**
     * <p>The search expression to filter results.</p>
     */
    inline void SetSearchExpression(SearchExpression&& value) { m_searchExpressionHasBeenSet = true; m_searchExpression = std::move(value); }

    /**
     * <p>The search expression to filter results.</p>
     */
    inline SearchContentRequest& WithSearchExpression(const SearchExpression& value) { SetSearchExpression(value); return *this;}

    /**
     * <p>The search expression to filter results.</p>
     */
    inline SearchContentRequest& WithSearchExpression(SearchExpression&& value) { SetSearchExpression(std::move(value)); return *this;}

  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SearchExpression m_searchExpression;
    bool m_searchExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
