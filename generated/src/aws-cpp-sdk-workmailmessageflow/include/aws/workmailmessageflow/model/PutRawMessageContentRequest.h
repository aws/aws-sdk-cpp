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
    AWS_WORKMAILMESSAGEFLOW_API PutRawMessageContentRequest() = default;

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
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    PutRawMessageContentRequest& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the raw message content of the updated email message.</p>
     */
    inline const RawMessageContent& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = RawMessageContent>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = RawMessageContent>
    PutRawMessageContentRequest& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
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
