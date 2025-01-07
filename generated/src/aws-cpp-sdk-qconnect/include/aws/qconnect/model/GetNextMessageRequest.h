/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetNextMessageRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API GetNextMessageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetNextMessage"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;

    AWS_QCONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }
    inline GetNextMessageRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline GetNextMessageRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline GetNextMessageRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next message. Use the value returned in the SendMessage or
     * previous response in the next request to retrieve the next message.</p>
     */
    inline const Aws::String& GetNextMessageToken() const{ return m_nextMessageToken; }
    inline bool NextMessageTokenHasBeenSet() const { return m_nextMessageTokenHasBeenSet; }
    inline void SetNextMessageToken(const Aws::String& value) { m_nextMessageTokenHasBeenSet = true; m_nextMessageToken = value; }
    inline void SetNextMessageToken(Aws::String&& value) { m_nextMessageTokenHasBeenSet = true; m_nextMessageToken = std::move(value); }
    inline void SetNextMessageToken(const char* value) { m_nextMessageTokenHasBeenSet = true; m_nextMessageToken.assign(value); }
    inline GetNextMessageRequest& WithNextMessageToken(const Aws::String& value) { SetNextMessageToken(value); return *this;}
    inline GetNextMessageRequest& WithNextMessageToken(Aws::String&& value) { SetNextMessageToken(std::move(value)); return *this;}
    inline GetNextMessageRequest& WithNextMessageToken(const char* value) { SetNextMessageToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline GetNextMessageRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline GetNextMessageRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline GetNextMessageRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}
  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_nextMessageToken;
    bool m_nextMessageTokenHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
