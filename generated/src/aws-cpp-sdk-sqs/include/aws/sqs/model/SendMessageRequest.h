/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sqs/model/MessageAttributeValue.h>
#include <aws/sqs/model/MessageSystemAttributeNameForSends.h>
#include <aws/sqs/model/MessageSystemAttributeValue.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SendMessageRequest">AWS
   * API Reference</a></p>
   */
  class SendMessageRequest : public SQSRequest
  {
  public:
    AWS_SQS_API SendMessageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendMessage"; }

    AWS_SQS_API Aws::String SerializePayload() const override;

    AWS_SQS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The URL of the Amazon SQS queue to which a message is sent.</p> <p>Queue URLs
     * and names are case-sensitive.</p>
     */
    inline const Aws::String& GetQueueUrl() const { return m_queueUrl; }
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }
    template<typename QueueUrlT = Aws::String>
    void SetQueueUrl(QueueUrlT&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::forward<QueueUrlT>(value); }
    template<typename QueueUrlT = Aws::String>
    SendMessageRequest& WithQueueUrl(QueueUrlT&& value) { SetQueueUrl(std::forward<QueueUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message to send. The minimum size is one character. The maximum size is 1
     * MiB or 1,048,576 bytes</p>  <p>A message can include only XML, JSON,
     * and unformatted text. The following Unicode characters are allowed. For more
     * information, see the <a href="http://www.w3.org/TR/REC-xml/#charsets">W3C
     * specification for characters</a>.</p> <p> <code>#x9</code> | <code>#xA</code> |
     * <code>#xD</code> | <code>#x20</code> to <code>#xD7FF</code> |
     * <code>#xE000</code> to <code>#xFFFD</code> | <code>#x10000</code> to
     * <code>#x10FFFF</code> </p> <p>Amazon SQS does not throw an exception or
     * completely reject the message if it contains invalid characters. Instead, it
     * replaces those invalid characters with U+FFFD before storing the message in the
     * queue, as long as the message body contains at least one valid character.</p>
     * 
     */
    inline const Aws::String& GetMessageBody() const { return m_messageBody; }
    inline bool MessageBodyHasBeenSet() const { return m_messageBodyHasBeenSet; }
    template<typename MessageBodyT = Aws::String>
    void SetMessageBody(MessageBodyT&& value) { m_messageBodyHasBeenSet = true; m_messageBody = std::forward<MessageBodyT>(value); }
    template<typename MessageBodyT = Aws::String>
    SendMessageRequest& WithMessageBody(MessageBodyT&& value) { SetMessageBody(std::forward<MessageBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The length of time, in seconds, for which to delay a specific message. Valid
     * values: 0 to 900. Maximum: 15 minutes. Messages with a positive
     * <code>DelaySeconds</code> value become available for processing after the delay
     * period is finished. If you don't specify a value, the default value for the
     * queue applies. </p>  <p>When you set <code>FifoQueue</code>, you can't set
     * <code>DelaySeconds</code> per message. You can set this parameter only on a
     * queue level.</p> 
     */
    inline int GetDelaySeconds() const { return m_delaySeconds; }
    inline bool DelaySecondsHasBeenSet() const { return m_delaySecondsHasBeenSet; }
    inline void SetDelaySeconds(int value) { m_delaySecondsHasBeenSet = true; m_delaySeconds = value; }
    inline SendMessageRequest& WithDelaySeconds(int value) { SetDelaySeconds(value); return *this;}
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
    SendMessageRequest& WithMessageAttributes(MessageAttributesT&& value) { SetMessageAttributes(std::forward<MessageAttributesT>(value)); return *this;}
    template<typename MessageAttributesKeyT = Aws::String, typename MessageAttributesValueT = MessageAttributeValue>
    SendMessageRequest& AddMessageAttributes(MessageAttributesKeyT&& key, MessageAttributesValueT&& value) {
      m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::forward<MessageAttributesKeyT>(key), std::forward<MessageAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The message system attribute to send. Each message system attribute consists
     * of a <code>Name</code>, <code>Type</code>, and <code>Value</code>.</p>
     *  <ul> <li> <p>Currently, the only supported message system attribute
     * is <code>AWSTraceHeader</code>. Its type must be <code>String</code> and its
     * value must be a correctly formatted X-Ray trace header string.</p> </li> <li>
     * <p>The size of a message system attribute doesn't count towards the total size
     * of a message.</p> </li> </ul> 
     */
    inline const Aws::Map<MessageSystemAttributeNameForSends, MessageSystemAttributeValue>& GetMessageSystemAttributes() const { return m_messageSystemAttributes; }
    inline bool MessageSystemAttributesHasBeenSet() const { return m_messageSystemAttributesHasBeenSet; }
    template<typename MessageSystemAttributesT = Aws::Map<MessageSystemAttributeNameForSends, MessageSystemAttributeValue>>
    void SetMessageSystemAttributes(MessageSystemAttributesT&& value) { m_messageSystemAttributesHasBeenSet = true; m_messageSystemAttributes = std::forward<MessageSystemAttributesT>(value); }
    template<typename MessageSystemAttributesT = Aws::Map<MessageSystemAttributeNameForSends, MessageSystemAttributeValue>>
    SendMessageRequest& WithMessageSystemAttributes(MessageSystemAttributesT&& value) { SetMessageSystemAttributes(std::forward<MessageSystemAttributesT>(value)); return *this;}
    inline SendMessageRequest& AddMessageSystemAttributes(MessageSystemAttributeNameForSends key, MessageSystemAttributeValue value) {
      m_messageSystemAttributesHasBeenSet = true; m_messageSystemAttributes.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * token used for deduplication of sent messages. If a message with a particular
     * <code>MessageDeduplicationId</code> is sent successfully, any messages sent with
     * the same <code>MessageDeduplicationId</code> are accepted successfully but
     * aren't delivered during the 5-minute deduplication interval. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/FIFO-queues-exactly-once-processing.html">
     * Exactly-once processing</a> in the <i>Amazon SQS Developer Guide</i>.</p> <ul>
     * <li> <p>Every message must have a unique
     * <code>MessageDeduplicationId</code>,</p> <ul> <li> <p>You may provide a
     * <code>MessageDeduplicationId</code> explicitly.</p> </li> <li> <p>If you aren't
     * able to provide a <code>MessageDeduplicationId</code> and you enable
     * <code>ContentBasedDeduplication</code> for your queue, Amazon SQS uses a SHA-256
     * hash to generate the <code>MessageDeduplicationId</code> using the body of the
     * message (but not the attributes of the message). </p> </li> <li> <p>If you don't
     * provide a <code>MessageDeduplicationId</code> and the queue doesn't have
     * <code>ContentBasedDeduplication</code> set, the action fails with an error.</p>
     * </li> <li> <p>If the queue has <code>ContentBasedDeduplication</code> set, your
     * <code>MessageDeduplicationId</code> overrides the generated one.</p> </li> </ul>
     * </li> <li> <p>When <code>ContentBasedDeduplication</code> is in effect, messages
     * with identical content sent within the deduplication interval are treated as
     * duplicates and only one copy of the message is delivered.</p> </li> <li> <p>If
     * you send one message with <code>ContentBasedDeduplication</code> enabled and
     * then another message with a <code>MessageDeduplicationId</code> that is the same
     * as the one generated for the first <code>MessageDeduplicationId</code>, the two
     * messages are treated as duplicates and only one copy of the message is
     * delivered. </p> </li> </ul>  <p>The <code>MessageDeduplicationId</code> is
     * available to the consumer of the message (this can be useful for troubleshooting
     * delivery issues).</p> <p>If a message is sent successfully but the
     * acknowledgement is lost and the message is resent with the same
     * <code>MessageDeduplicationId</code> after the deduplication interval, Amazon SQS
     * can't detect duplicate messages.</p> <p>Amazon SQS continues to keep track of
     * the message deduplication ID even after the message is received and deleted.</p>
     *  <p>The maximum length of <code>MessageDeduplicationId</code> is 128
     * characters. <code>MessageDeduplicationId</code> can contain alphanumeric
     * characters (<code>a-z</code>, <code>A-Z</code>, <code>0-9</code>) and
     * punctuation (<code>!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~</code>).</p>
     * <p>For best practices of using <code>MessageDeduplicationId</code>, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/using-messagededuplicationid-property.html">Using
     * the MessageDeduplicationId Property</a> in the <i>Amazon SQS Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetMessageDeduplicationId() const { return m_messageDeduplicationId; }
    inline bool MessageDeduplicationIdHasBeenSet() const { return m_messageDeduplicationIdHasBeenSet; }
    template<typename MessageDeduplicationIdT = Aws::String>
    void SetMessageDeduplicationId(MessageDeduplicationIdT&& value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId = std::forward<MessageDeduplicationIdT>(value); }
    template<typename MessageDeduplicationIdT = Aws::String>
    SendMessageRequest& WithMessageDeduplicationId(MessageDeduplicationIdT&& value) { SetMessageDeduplicationId(std::forward<MessageDeduplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>MessageGroupId</code> is an attribute used in Amazon SQS FIFO
     * (First-In-First-Out) and standard queues. In FIFO queues,
     * <code>MessageGroupId</code> organizes messages into distinct groups. Messages
     * within the same message group are always processed one at a time, in strict
     * order, ensuring that no two messages from the same group are processed
     * simultaneously. In standard queues, using <code>MessageGroupId</code> enables
     * fair queues. It is used to identify the tenant a message belongs to, helping
     * maintain consistent message dwell time across all tenants during noisy neighbor
     * events. Unlike FIFO queues, messages with the same <code>MessageGroupId</code>
     * can be processed in parallel, maintaining the high throughput of standard
     * queues.</p> <ul> <li> <p> <b>FIFO queues:</b> <code>MessageGroupId</code> acts
     * as the tag that specifies that a message belongs to a specific message group.
     * Messages that belong to the same message group are processed in a FIFO manner
     * (however, messages in different message groups might be processed out of order).
     * To interleave multiple ordered streams within a single queue, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple consumers can process the queue, but the
     * session data of each user is processed in a FIFO fashion.</p> <p>If you do not
     * provide a <code>MessageGroupId</code> when sending a message to a FIFO queue,
     * the action fails.</p> <p> <code>ReceiveMessage</code> might return messages with
     * multiple <code>MessageGroupId</code> values. For each
     * <code>MessageGroupId</code>, the messages are sorted by time sent.</p> </li>
     * <li> <p> <b>Standard queues:</b>Use <code>MessageGroupId</code> in standard
     * queues to enable fair queues. The <code>MessageGroupId</code> identifies the
     * tenant a message belongs to. A tenant can be any entity that shares a queue with
     * others, such as your customer, a client application, or a request type. When one
     * tenant sends a disproportionately large volume of messages or has messages that
     * require longer processing time, fair queues ensure other tenants' messages
     * maintain low dwell time. This preserves quality of service for all tenants while
     * maintaining the scalability and throughput of standard queues. We recommend that
     * you include a <code>MessageGroupId</code> in all messages when using fair
     * queues.</p> </li> </ul> <p>The length of <code>MessageGroupId</code> is 128
     * characters. Valid values: alphanumeric characters and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p> <p>For best
     * practices of using <code>MessageGroupId</code>, see <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/using-messagegroupid-property.html">Using
     * the MessageGroupId Property</a> in the <i>Amazon SQS Developer Guide</i>.</p>
     */
    inline const Aws::String& GetMessageGroupId() const { return m_messageGroupId; }
    inline bool MessageGroupIdHasBeenSet() const { return m_messageGroupIdHasBeenSet; }
    template<typename MessageGroupIdT = Aws::String>
    void SetMessageGroupId(MessageGroupIdT&& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = std::forward<MessageGroupIdT>(value); }
    template<typename MessageGroupIdT = Aws::String>
    SendMessageRequest& WithMessageGroupId(MessageGroupIdT&& value) { SetMessageGroupId(std::forward<MessageGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet = false;

    Aws::String m_messageBody;
    bool m_messageBodyHasBeenSet = false;

    int m_delaySeconds{0};
    bool m_delaySecondsHasBeenSet = false;

    Aws::Map<Aws::String, MessageAttributeValue> m_messageAttributes;
    bool m_messageAttributesHasBeenSet = false;

    Aws::Map<MessageSystemAttributeNameForSends, MessageSystemAttributeValue> m_messageSystemAttributes;
    bool m_messageSystemAttributesHasBeenSet = false;

    Aws::String m_messageDeduplicationId;
    bool m_messageDeduplicationIdHasBeenSet = false;

    Aws::String m_messageGroupId;
    bool m_messageGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
