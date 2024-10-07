/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/Origin.h>
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
  class ListAIPromptVersionsRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API ListAIPromptVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAIPromptVersions"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;

    AWS_QCONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect AI prompt for which versions are to
     * be listed.</p>
     */
    inline const Aws::String& GetAiPromptId() const{ return m_aiPromptId; }
    inline bool AiPromptIdHasBeenSet() const { return m_aiPromptIdHasBeenSet; }
    inline void SetAiPromptId(const Aws::String& value) { m_aiPromptIdHasBeenSet = true; m_aiPromptId = value; }
    inline void SetAiPromptId(Aws::String&& value) { m_aiPromptIdHasBeenSet = true; m_aiPromptId = std::move(value); }
    inline void SetAiPromptId(const char* value) { m_aiPromptIdHasBeenSet = true; m_aiPromptId.assign(value); }
    inline ListAIPromptVersionsRequest& WithAiPromptId(const Aws::String& value) { SetAiPromptId(value); return *this;}
    inline ListAIPromptVersionsRequest& WithAiPromptId(Aws::String&& value) { SetAiPromptId(std::move(value)); return *this;}
    inline ListAIPromptVersionsRequest& WithAiPromptId(const char* value) { SetAiPromptId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }
    inline ListAIPromptVersionsRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline ListAIPromptVersionsRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline ListAIPromptVersionsRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAIPromptVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline ListAIPromptVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAIPromptVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAIPromptVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin of the AI Prompt versions to be listed. <code>SYSTEM</code> for a
     * default AI Agent created by Q in Connect or <code>CUSTOMER</code> for an AI
     * Agent created by calling AI Agent creation APIs. </p>
     */
    inline const Origin& GetOrigin() const{ return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(const Origin& value) { m_originHasBeenSet = true; m_origin = value; }
    inline void SetOrigin(Origin&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }
    inline ListAIPromptVersionsRequest& WithOrigin(const Origin& value) { SetOrigin(value); return *this;}
    inline ListAIPromptVersionsRequest& WithOrigin(Origin&& value) { SetOrigin(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_aiPromptId;
    bool m_aiPromptIdHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Origin m_origin;
    bool m_originHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
