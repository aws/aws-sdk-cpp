/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sqs/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SQS
{
namespace Model
{
  /**
   * <p>The <code>MD5OfMessageBody</code> and <code>MessageId</code>
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SendMessageResult">AWS
   * API Reference</a></p>
   */
  class SendMessageResult
  {
  public:
    AWS_SQS_API SendMessageResult() = default;
    AWS_SQS_API SendMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SQS_API SendMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An MD5 digest of the non-URL-encoded message body string. You can use this
     * attribute to verify that Amazon SQS received the message correctly. Amazon SQS
     * URL-decodes the message before creating the MD5 digest. For information about
     * MD5, see <a href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>.</p>
     */
    inline const Aws::String& GetMD5OfMessageBody() const { return m_mD5OfMessageBody; }
    template<typename MD5OfMessageBodyT = Aws::String>
    void SetMD5OfMessageBody(MD5OfMessageBodyT&& value) { m_mD5OfMessageBodyHasBeenSet = true; m_mD5OfMessageBody = std::forward<MD5OfMessageBodyT>(value); }
    template<typename MD5OfMessageBodyT = Aws::String>
    SendMessageResult& WithMD5OfMessageBody(MD5OfMessageBodyT&& value) { SetMD5OfMessageBody(std::forward<MD5OfMessageBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. You can use
     * this attribute to verify that Amazon SQS received the message correctly. Amazon
     * SQS URL-decodes the message before creating the MD5 digest. For information
     * about MD5, see <a href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>.</p>
     */
    inline const Aws::String& GetMD5OfMessageAttributes() const { return m_mD5OfMessageAttributes; }
    template<typename MD5OfMessageAttributesT = Aws::String>
    void SetMD5OfMessageAttributes(MD5OfMessageAttributesT&& value) { m_mD5OfMessageAttributesHasBeenSet = true; m_mD5OfMessageAttributes = std::forward<MD5OfMessageAttributesT>(value); }
    template<typename MD5OfMessageAttributesT = Aws::String>
    SendMessageResult& WithMD5OfMessageAttributes(MD5OfMessageAttributesT&& value) { SetMD5OfMessageAttributes(std::forward<MD5OfMessageAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An MD5 digest of the non-URL-encoded message system attribute string. You can
     * use this attribute to verify that Amazon SQS received the message correctly.
     * Amazon SQS URL-decodes the message before creating the MD5 digest.</p>
     */
    inline const Aws::String& GetMD5OfMessageSystemAttributes() const { return m_mD5OfMessageSystemAttributes; }
    template<typename MD5OfMessageSystemAttributesT = Aws::String>
    void SetMD5OfMessageSystemAttributes(MD5OfMessageSystemAttributesT&& value) { m_mD5OfMessageSystemAttributesHasBeenSet = true; m_mD5OfMessageSystemAttributes = std::forward<MD5OfMessageSystemAttributesT>(value); }
    template<typename MD5OfMessageSystemAttributesT = Aws::String>
    SendMessageResult& WithMD5OfMessageSystemAttributes(MD5OfMessageSystemAttributesT&& value) { SetMD5OfMessageSystemAttributes(std::forward<MD5OfMessageSystemAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute containing the <code>MessageId</code> of the message sent to the
     * queue. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-queue-message-identifiers.html">Queue
     * and Message Identifiers</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     */
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    SendMessageResult& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * large, non-consecutive number that Amazon SQS assigns to each message.</p>
     * <p>The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for a particular
     * <code>MessageGroupId</code>.</p>
     */
    inline const Aws::String& GetSequenceNumber() const { return m_sequenceNumber; }
    template<typename SequenceNumberT = Aws::String>
    void SetSequenceNumber(SequenceNumberT&& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = std::forward<SequenceNumberT>(value); }
    template<typename SequenceNumberT = Aws::String>
    SendMessageResult& WithSequenceNumber(SequenceNumberT&& value) { SetSequenceNumber(std::forward<SequenceNumberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SendMessageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    SendMessageResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mD5OfMessageBody;
    bool m_mD5OfMessageBodyHasBeenSet = false;

    Aws::String m_mD5OfMessageAttributes;
    bool m_mD5OfMessageAttributesHasBeenSet = false;

    Aws::String m_mD5OfMessageSystemAttributes;
    bool m_mD5OfMessageSystemAttributesHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_sequenceNumber;
    bool m_sequenceNumberHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
