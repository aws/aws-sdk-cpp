/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/QueryCondition.h>
#include <utility>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class QueryAssistantRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API QueryAssistantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryAssistant"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Q assistant. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }

    /**
     * <p>The identifier of the Amazon Q assistant. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q assistant. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }

    /**
     * <p>The identifier of the Amazon Q assistant. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q assistant. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q assistant. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline QueryAssistantRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q assistant. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline QueryAssistantRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q assistant. Can be either the ID or the ARN.
     * URLs cannot contain the ARN.</p>
     */
    inline QueryAssistantRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}


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
    inline QueryAssistantRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline QueryAssistantRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline QueryAssistantRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline QueryAssistantRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about how to query content.</p>
     */
    inline const Aws::Vector<QueryCondition>& GetQueryCondition() const{ return m_queryCondition; }

    /**
     * <p>Information about how to query content.</p>
     */
    inline bool QueryConditionHasBeenSet() const { return m_queryConditionHasBeenSet; }

    /**
     * <p>Information about how to query content.</p>
     */
    inline void SetQueryCondition(const Aws::Vector<QueryCondition>& value) { m_queryConditionHasBeenSet = true; m_queryCondition = value; }

    /**
     * <p>Information about how to query content.</p>
     */
    inline void SetQueryCondition(Aws::Vector<QueryCondition>&& value) { m_queryConditionHasBeenSet = true; m_queryCondition = std::move(value); }

    /**
     * <p>Information about how to query content.</p>
     */
    inline QueryAssistantRequest& WithQueryCondition(const Aws::Vector<QueryCondition>& value) { SetQueryCondition(value); return *this;}

    /**
     * <p>Information about how to query content.</p>
     */
    inline QueryAssistantRequest& WithQueryCondition(Aws::Vector<QueryCondition>&& value) { SetQueryCondition(std::move(value)); return *this;}

    /**
     * <p>Information about how to query content.</p>
     */
    inline QueryAssistantRequest& AddQueryCondition(const QueryCondition& value) { m_queryConditionHasBeenSet = true; m_queryCondition.push_back(value); return *this; }

    /**
     * <p>Information about how to query content.</p>
     */
    inline QueryAssistantRequest& AddQueryCondition(QueryCondition&& value) { m_queryConditionHasBeenSet = true; m_queryCondition.push_back(std::move(value)); return *this; }


    /**
     * <p>The text to search for.</p>
     */
    inline const Aws::String& GetQueryText() const{ return m_queryText; }

    /**
     * <p>The text to search for.</p>
     */
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }

    /**
     * <p>The text to search for.</p>
     */
    inline void SetQueryText(const Aws::String& value) { m_queryTextHasBeenSet = true; m_queryText = value; }

    /**
     * <p>The text to search for.</p>
     */
    inline void SetQueryText(Aws::String&& value) { m_queryTextHasBeenSet = true; m_queryText = std::move(value); }

    /**
     * <p>The text to search for.</p>
     */
    inline void SetQueryText(const char* value) { m_queryTextHasBeenSet = true; m_queryText.assign(value); }

    /**
     * <p>The text to search for.</p>
     */
    inline QueryAssistantRequest& WithQueryText(const Aws::String& value) { SetQueryText(value); return *this;}

    /**
     * <p>The text to search for.</p>
     */
    inline QueryAssistantRequest& WithQueryText(Aws::String&& value) { SetQueryText(std::move(value)); return *this;}

    /**
     * <p>The text to search for.</p>
     */
    inline QueryAssistantRequest& WithQueryText(const char* value) { SetQueryText(value); return *this;}


    /**
     * <p>The identifier of the Amazon Q session. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The identifier of the Amazon Q session. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q session. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The identifier of the Amazon Q session. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q session. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q session. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline QueryAssistantRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q session. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline QueryAssistantRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q session. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline QueryAssistantRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}

  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<QueryCondition> m_queryCondition;
    bool m_queryConditionHasBeenSet = false;

    Aws::String m_queryText;
    bool m_queryTextHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
