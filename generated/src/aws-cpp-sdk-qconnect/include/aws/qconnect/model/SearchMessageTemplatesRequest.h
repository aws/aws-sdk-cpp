/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/MessageTemplateSearchExpression.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QConnect
{
namespace Model
{

  /**
   */
  class SearchMessageTemplatesRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API SearchMessageTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchMessageTemplates"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;

    AWS_QCONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline SearchMessageTemplatesRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline SearchMessageTemplatesRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline SearchMessageTemplatesRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchMessageTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline SearchMessageTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchMessageTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchMessageTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search expression for querying the message template.</p>
     */
    inline const MessageTemplateSearchExpression& GetSearchExpression() const{ return m_searchExpression; }
    inline bool SearchExpressionHasBeenSet() const { return m_searchExpressionHasBeenSet; }
    inline void SetSearchExpression(const MessageTemplateSearchExpression& value) { m_searchExpressionHasBeenSet = true; m_searchExpression = value; }
    inline void SetSearchExpression(MessageTemplateSearchExpression&& value) { m_searchExpressionHasBeenSet = true; m_searchExpression = std::move(value); }
    inline SearchMessageTemplatesRequest& WithSearchExpression(const MessageTemplateSearchExpression& value) { SetSearchExpression(value); return *this;}
    inline SearchMessageTemplatesRequest& WithSearchExpression(MessageTemplateSearchExpression&& value) { SetSearchExpression(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    MessageTemplateSearchExpression m_searchExpression;
    bool m_searchExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
