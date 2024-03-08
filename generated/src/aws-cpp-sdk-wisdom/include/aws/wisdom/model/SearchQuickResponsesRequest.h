/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/ConnectWisdomServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/QuickResponseSearchExpression.h>
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
  class SearchQuickResponsesRequest : public ConnectWisdomServiceRequest
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API SearchQuickResponsesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchQuickResponses"; }

    AWS_CONNECTWISDOMSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONNECTWISDOMSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-attrib-list.html#user-defined-attributes">user-defined
     * Amazon Connect contact attributes</a> to be resolved when search results are
     * returned.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-attrib-list.html#user-defined-attributes">user-defined
     * Amazon Connect contact attributes</a> to be resolved when search results are
     * returned.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-attrib-list.html#user-defined-attributes">user-defined
     * Amazon Connect contact attributes</a> to be resolved when search results are
     * returned.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-attrib-list.html#user-defined-attributes">user-defined
     * Amazon Connect contact attributes</a> to be resolved when search results are
     * returned.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-attrib-list.html#user-defined-attributes">user-defined
     * Amazon Connect contact attributes</a> to be resolved when search results are
     * returned.</p>
     */
    inline SearchQuickResponsesRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-attrib-list.html#user-defined-attributes">user-defined
     * Amazon Connect contact attributes</a> to be resolved when search results are
     * returned.</p>
     */
    inline SearchQuickResponsesRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-attrib-list.html#user-defined-attributes">user-defined
     * Amazon Connect contact attributes</a> to be resolved when search results are
     * returned.</p>
     */
    inline SearchQuickResponsesRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-attrib-list.html#user-defined-attributes">user-defined
     * Amazon Connect contact attributes</a> to be resolved when search results are
     * returned.</p>
     */
    inline SearchQuickResponsesRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-attrib-list.html#user-defined-attributes">user-defined
     * Amazon Connect contact attributes</a> to be resolved when search results are
     * returned.</p>
     */
    inline SearchQuickResponsesRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-attrib-list.html#user-defined-attributes">user-defined
     * Amazon Connect contact attributes</a> to be resolved when search results are
     * returned.</p>
     */
    inline SearchQuickResponsesRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-attrib-list.html#user-defined-attributes">user-defined
     * Amazon Connect contact attributes</a> to be resolved when search results are
     * returned.</p>
     */
    inline SearchQuickResponsesRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-attrib-list.html#user-defined-attributes">user-defined
     * Amazon Connect contact attributes</a> to be resolved when search results are
     * returned.</p>
     */
    inline SearchQuickResponsesRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/connect-attrib-list.html#user-defined-attributes">user-defined
     * Amazon Connect contact attributes</a> to be resolved when search results are
     * returned.</p>
     */
    inline SearchQuickResponsesRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The identifier of the knowledge base. This should be a QUICK_RESPONSES type
     * knowledge base. Can be either the ID or the ARN. URLs cannot contain the
     * ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The identifier of the knowledge base. This should be a QUICK_RESPONSES type
     * knowledge base. Can be either the ID or the ARN. URLs cannot contain the
     * ARN.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The identifier of the knowledge base. This should be a QUICK_RESPONSES type
     * knowledge base. Can be either the ID or the ARN. URLs cannot contain the
     * ARN.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The identifier of the knowledge base. This should be a QUICK_RESPONSES type
     * knowledge base. Can be either the ID or the ARN. URLs cannot contain the
     * ARN.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The identifier of the knowledge base. This should be a QUICK_RESPONSES type
     * knowledge base. Can be either the ID or the ARN. URLs cannot contain the
     * ARN.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The identifier of the knowledge base. This should be a QUICK_RESPONSES type
     * knowledge base. Can be either the ID or the ARN. URLs cannot contain the
     * ARN.</p>
     */
    inline SearchQuickResponsesRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The identifier of the knowledge base. This should be a QUICK_RESPONSES type
     * knowledge base. Can be either the ID or the ARN. URLs cannot contain the
     * ARN.</p>
     */
    inline SearchQuickResponsesRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the knowledge base. This should be a QUICK_RESPONSES type
     * knowledge base. Can be either the ID or the ARN. URLs cannot contain the
     * ARN.</p>
     */
    inline SearchQuickResponsesRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


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
    inline SearchQuickResponsesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline SearchQuickResponsesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchQuickResponsesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchQuickResponsesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The search expression for querying the quick response.</p>
     */
    inline const QuickResponseSearchExpression& GetSearchExpression() const{ return m_searchExpression; }

    /**
     * <p>The search expression for querying the quick response.</p>
     */
    inline bool SearchExpressionHasBeenSet() const { return m_searchExpressionHasBeenSet; }

    /**
     * <p>The search expression for querying the quick response.</p>
     */
    inline void SetSearchExpression(const QuickResponseSearchExpression& value) { m_searchExpressionHasBeenSet = true; m_searchExpression = value; }

    /**
     * <p>The search expression for querying the quick response.</p>
     */
    inline void SetSearchExpression(QuickResponseSearchExpression&& value) { m_searchExpressionHasBeenSet = true; m_searchExpression = std::move(value); }

    /**
     * <p>The search expression for querying the quick response.</p>
     */
    inline SearchQuickResponsesRequest& WithSearchExpression(const QuickResponseSearchExpression& value) { SetSearchExpression(value); return *this;}

    /**
     * <p>The search expression for querying the quick response.</p>
     */
    inline SearchQuickResponsesRequest& WithSearchExpression(QuickResponseSearchExpression&& value) { SetSearchExpression(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    QuickResponseSearchExpression m_searchExpression;
    bool m_searchExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
