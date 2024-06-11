/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmailmessageflow/WorkMailMessageFlow_EXPORTS.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmailmessageflow/model/RawMessageContent.h>
#include <utility>

namespace Aws
{
namespace WorkMailMessageFlow
{
namespace Model
{

  /**
   */
  class PutRawMessageContentRequest : public WorkMailMessageFlowRequest
  {
  public:
    AWS_WORKMAILMESSAGEFLOW_API PutRawMessageContentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRawMessageContent"; }

    AWS_WORKMAILMESSAGEFLOW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the email message being updated.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline PutRawMessageContentRequest& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline PutRawMessageContentRequest& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline PutRawMessageContentRequest& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the raw message content of the updated email message.</p>
     */
    inline const RawMessageContent& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const RawMessageContent& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(RawMessageContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline PutRawMessageContentRequest& WithContent(const RawMessageContent& value) { SetContent(value); return *this;}
    inline PutRawMessageContentRequest& WithContent(RawMessageContent&& value) { SetContent(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    RawMessageContent m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMailMessageFlow
} // namespace Aws
