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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   */
  class GetSessionRequest : public ConnectWisdomServiceRequest
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API GetSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSession"; }

    AWS_CONNECTWISDOMSERVICE_API Aws::String SerializePayload() const override;


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
    inline GetSessionRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline GetSessionRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline GetSessionRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}


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
    inline GetSessionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline GetSessionRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline GetSessionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}

  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
