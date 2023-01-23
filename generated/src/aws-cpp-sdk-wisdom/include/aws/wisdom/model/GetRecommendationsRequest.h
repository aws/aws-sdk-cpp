/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/ConnectWisdomServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetRecommendationsRequest : public ConnectWisdomServiceRequest
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API GetRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecommendations"; }

    AWS_CONNECTWISDOMSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONNECTWISDOMSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline GetRecommendationsRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline GetRecommendationsRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline GetRecommendationsRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}


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
    inline GetRecommendationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline GetRecommendationsRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline GetRecommendationsRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline GetRecommendationsRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>The duration (in seconds) for which the call waits for a recommendation to be
     * made available before returning. If a recommendation is available, the call
     * returns sooner than <code>WaitTimeSeconds</code>. If no messages are available
     * and the wait time expires, the call returns successfully with an empty list.</p>
     */
    inline int GetWaitTimeSeconds() const{ return m_waitTimeSeconds; }

    /**
     * <p>The duration (in seconds) for which the call waits for a recommendation to be
     * made available before returning. If a recommendation is available, the call
     * returns sooner than <code>WaitTimeSeconds</code>. If no messages are available
     * and the wait time expires, the call returns successfully with an empty list.</p>
     */
    inline bool WaitTimeSecondsHasBeenSet() const { return m_waitTimeSecondsHasBeenSet; }

    /**
     * <p>The duration (in seconds) for which the call waits for a recommendation to be
     * made available before returning. If a recommendation is available, the call
     * returns sooner than <code>WaitTimeSeconds</code>. If no messages are available
     * and the wait time expires, the call returns successfully with an empty list.</p>
     */
    inline void SetWaitTimeSeconds(int value) { m_waitTimeSecondsHasBeenSet = true; m_waitTimeSeconds = value; }

    /**
     * <p>The duration (in seconds) for which the call waits for a recommendation to be
     * made available before returning. If a recommendation is available, the call
     * returns sooner than <code>WaitTimeSeconds</code>. If no messages are available
     * and the wait time expires, the call returns successfully with an empty list.</p>
     */
    inline GetRecommendationsRequest& WithWaitTimeSeconds(int value) { SetWaitTimeSeconds(value); return *this;}

  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    int m_waitTimeSeconds;
    bool m_waitTimeSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
