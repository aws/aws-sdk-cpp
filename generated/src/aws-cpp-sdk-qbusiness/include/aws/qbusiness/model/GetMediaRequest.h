/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class GetMediaRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API GetMediaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMedia"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business which contains the media object.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline GetMediaRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetMediaRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetMediaRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business conversation.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }
    inline GetMediaRequest& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}
    inline GetMediaRequest& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}
    inline GetMediaRequest& WithConversationId(const char* value) { SetConversationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline GetMediaRequest& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline GetMediaRequest& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline GetMediaRequest& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the media object. You can find this in the
     * <code>sourceAttributions</code> returned by the <code>Chat</code>,
     * <code>ChatSync</code>, and <code>ListMessages</code> API responses.</p>
     */
    inline const Aws::String& GetMediaId() const{ return m_mediaId; }
    inline bool MediaIdHasBeenSet() const { return m_mediaIdHasBeenSet; }
    inline void SetMediaId(const Aws::String& value) { m_mediaIdHasBeenSet = true; m_mediaId = value; }
    inline void SetMediaId(Aws::String&& value) { m_mediaIdHasBeenSet = true; m_mediaId = std::move(value); }
    inline void SetMediaId(const char* value) { m_mediaIdHasBeenSet = true; m_mediaId.assign(value); }
    inline GetMediaRequest& WithMediaId(const Aws::String& value) { SetMediaId(value); return *this;}
    inline GetMediaRequest& WithMediaId(Aws::String&& value) { SetMediaId(std::move(value)); return *this;}
    inline GetMediaRequest& WithMediaId(const char* value) { SetMediaId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_mediaId;
    bool m_mediaIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
