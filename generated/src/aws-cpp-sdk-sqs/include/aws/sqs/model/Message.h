/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sqs/model/MessageSystemAttributeName.h>
#include <aws/sqs/model/MessageAttributeValue.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SQS
{
namespace Model
{

  /**
   * <p>An Amazon SQS message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/Message">AWS API
   * Reference</a></p>
   */
  class Message
  {
  public:
    AWS_SQS_API Message() = default;
    AWS_SQS_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_SQS_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SQS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the message. A <code>MessageId</code>is considered
     * unique across all Amazon Web Services accounts for an extended period of
     * time.</p>
     */
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    Message& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier associated with the act of receiving the message. A new receipt
     * handle is returned every time you receive a message. When deleting a message,
     * you provide the last received receipt handle to delete the message.</p>
     */
    inline const Aws::String& GetReceiptHandle() const { return m_receiptHandle; }
    inline bool ReceiptHandleHasBeenSet() const { return m_receiptHandleHasBeenSet; }
    template<typename ReceiptHandleT = Aws::String>
    void SetReceiptHandle(ReceiptHandleT&& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = std::forward<ReceiptHandleT>(value); }
    template<typename ReceiptHandleT = Aws::String>
    Message& WithReceiptHandle(ReceiptHandleT&& value) { SetReceiptHandle(std::forward<ReceiptHandleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An MD5 digest of the non-URL-encoded message body string.</p>
     */
    inline const Aws::String& GetMD5OfBody() const { return m_mD5OfBody; }
    inline bool MD5OfBodyHasBeenSet() const { return m_mD5OfBodyHasBeenSet; }
    template<typename MD5OfBodyT = Aws::String>
    void SetMD5OfBody(MD5OfBodyT&& value) { m_mD5OfBodyHasBeenSet = true; m_mD5OfBody = std::forward<MD5OfBodyT>(value); }
    template<typename MD5OfBodyT = Aws::String>
    Message& WithMD5OfBody(MD5OfBodyT&& value) { SetMD5OfBody(std::forward<MD5OfBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message's contents (not URL-encoded).</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    Message& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the attributes requested in <code> <a>ReceiveMessage</a> </code> to
     * their respective values. Supported attributes:</p> <ul> <li> <p>
     * <code>ApproximateReceiveCount</code> </p> </li> <li> <p>
     * <code>ApproximateFirstReceiveTimestamp</code> </p> </li> <li> <p>
     * <code>MessageDeduplicationId</code> </p> </li> <li> <p>
     * <code>MessageGroupId</code> </p> </li> <li> <p> <code>SenderId</code> </p> </li>
     * <li> <p> <code>SentTimestamp</code> </p> </li> <li> <p>
     * <code>SequenceNumber</code> </p> </li> </ul> <p>
     * <code>ApproximateFirstReceiveTimestamp</code> and <code>SentTimestamp</code> are
     * each returned as an integer representing the <a
     * href="http://en.wikipedia.org/wiki/Unix_time">epoch time</a> in
     * milliseconds.</p>
     */
    inline const Aws::Map<MessageSystemAttributeName, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<MessageSystemAttributeName, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<MessageSystemAttributeName, Aws::String>>
    Message& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    inline Message& AddAttributes(MessageSystemAttributeName key, Aws::String value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. You can use
     * this attribute to verify that Amazon SQS received the message correctly. Amazon
     * SQS URL-decodes the message before creating the MD5 digest. For information
     * about MD5, see <a href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>.</p>
     */
    inline const Aws::String& GetMD5OfMessageAttributes() const { return m_mD5OfMessageAttributes; }
    inline bool MD5OfMessageAttributesHasBeenSet() const { return m_mD5OfMessageAttributesHasBeenSet; }
    template<typename MD5OfMessageAttributesT = Aws::String>
    void SetMD5OfMessageAttributes(MD5OfMessageAttributesT&& value) { m_mD5OfMessageAttributesHasBeenSet = true; m_mD5OfMessageAttributes = std::forward<MD5OfMessageAttributesT>(value); }
    template<typename MD5OfMessageAttributesT = Aws::String>
    Message& WithMD5OfMessageAttributes(MD5OfMessageAttributesT&& value) { SetMD5OfMessageAttributes(std::forward<MD5OfMessageAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-message-metadata.html#sqs-message-attributes">Amazon
     * SQS message attributes</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const { return m_messageAttributes; }
    inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }
    template<typename MessageAttributesT = Aws::Map<Aws::String, MessageAttributeValue>>
    void SetMessageAttributes(MessageAttributesT&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = std::forward<MessageAttributesT>(value); }
    template<typename MessageAttributesT = Aws::Map<Aws::String, MessageAttributeValue>>
    Message& WithMessageAttributes(MessageAttributesT&& value) { SetMessageAttributes(std::forward<MessageAttributesT>(value)); return *this;}
    template<typename MessageAttributesKeyT = Aws::String, typename MessageAttributesValueT = MessageAttributeValue>
    Message& AddMessageAttributes(MessageAttributesKeyT&& key, MessageAttributesValueT&& value) {
      m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::forward<MessageAttributesKeyT>(key), std::forward<MessageAttributesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_receiptHandle;
    bool m_receiptHandleHasBeenSet = false;

    Aws::String m_mD5OfBody;
    bool m_mD5OfBodyHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::Map<MessageSystemAttributeName, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_mD5OfMessageAttributes;
    bool m_mD5OfMessageAttributesHasBeenSet = false;

    Aws::Map<Aws::String, MessageAttributeValue> m_messageAttributes;
    bool m_messageAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
