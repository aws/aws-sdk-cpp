/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   */
  class ChangeMessageVisibilityRequest : public SQSRequest
  {
  public:
    AWS_SQS_API ChangeMessageVisibilityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChangeMessageVisibility"; }

    AWS_SQS_API Aws::String SerializePayload() const override;

    AWS_SQS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The URL of the Amazon SQS queue whose message's visibility is changed.</p>
     * <p>Queue URLs and names are case-sensitive.</p>
     */
    inline const Aws::String& GetQueueUrl() const { return m_queueUrl; }
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }
    template<typename QueueUrlT = Aws::String>
    void SetQueueUrl(QueueUrlT&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::forward<QueueUrlT>(value); }
    template<typename QueueUrlT = Aws::String>
    ChangeMessageVisibilityRequest& WithQueueUrl(QueueUrlT&& value) { SetQueueUrl(std::forward<QueueUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The receipt handle associated with the message, whose visibility timeout is
     * changed. This parameter is returned by the <code> <a>ReceiveMessage</a> </code>
     * action.</p>
     */
    inline const Aws::String& GetReceiptHandle() const { return m_receiptHandle; }
    inline bool ReceiptHandleHasBeenSet() const { return m_receiptHandleHasBeenSet; }
    template<typename ReceiptHandleT = Aws::String>
    void SetReceiptHandle(ReceiptHandleT&& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = std::forward<ReceiptHandleT>(value); }
    template<typename ReceiptHandleT = Aws::String>
    ChangeMessageVisibilityRequest& WithReceiptHandle(ReceiptHandleT&& value) { SetReceiptHandle(std::forward<ReceiptHandleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value for the message's visibility timeout (in seconds). Values
     * range: <code>0</code> to <code>43200</code>. Maximum: 12 hours.</p>
     */
    inline int GetVisibilityTimeout() const { return m_visibilityTimeout; }
    inline bool VisibilityTimeoutHasBeenSet() const { return m_visibilityTimeoutHasBeenSet; }
    inline void SetVisibilityTimeout(int value) { m_visibilityTimeoutHasBeenSet = true; m_visibilityTimeout = value; }
    inline ChangeMessageVisibilityRequest& WithVisibilityTimeout(int value) { SetVisibilityTimeout(value); return *this;}
    ///@}
  private:

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet = false;

    Aws::String m_receiptHandle;
    bool m_receiptHandleHasBeenSet = false;

    int m_visibilityTimeout{0};
    bool m_visibilityTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
