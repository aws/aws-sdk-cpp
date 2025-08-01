/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sns/model/MessageAttributeValue.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{

  /**
   * <p>Contains the details of a single Amazon SNS message along with an
   * <code>Id</code> that identifies a message within the batch. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/PublishBatchRequestEntry">AWS
   * API Reference</a></p>
   */
  class PublishBatchRequestEntry
  {
  public:
    AWS_SNS_API PublishBatchRequestEntry() = default;
    AWS_SNS_API PublishBatchRequestEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SNS_API PublishBatchRequestEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SNS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SNS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>An identifier for the message in this batch.</p>  <p>The
     * <code>Ids</code> of a batch request must be unique within a request. </p>
     * <p>This identifier can have up to 80 characters. The following characters are
     * accepted: alphanumeric characters, hyphens(-), and underscores (_). </p> 
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PublishBatchRequestEntry& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of the message.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    PublishBatchRequestEntry& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject of the batch message.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    PublishBatchRequestEntry& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (for example, http). </p>
     */
    inline const Aws::String& GetMessageStructure() const { return m_messageStructure; }
    inline bool MessageStructureHasBeenSet() const { return m_messageStructureHasBeenSet; }
    template<typename MessageStructureT = Aws::String>
    void SetMessageStructure(MessageStructureT&& value) { m_messageStructureHasBeenSet = true; m_messageStructure = std::forward<MessageStructureT>(value); }
    template<typename MessageStructureT = Aws::String>
    PublishBatchRequestEntry& WithMessageStructure(MessageStructureT&& value) { SetMessageStructure(std::forward<MessageStructureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-message-attributes.html">Amazon
     * SNS message attributes</a> in the Amazon SNS Developer Guide.</p>
     */
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const { return m_messageAttributes; }
    inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }
    template<typename MessageAttributesT = Aws::Map<Aws::String, MessageAttributeValue>>
    void SetMessageAttributes(MessageAttributesT&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = std::forward<MessageAttributesT>(value); }
    template<typename MessageAttributesT = Aws::Map<Aws::String, MessageAttributeValue>>
    PublishBatchRequestEntry& WithMessageAttributes(MessageAttributesT&& value) { SetMessageAttributes(std::forward<MessageAttributesT>(value)); return *this;}
    template<typename MessageAttributesKeyT = Aws::String, typename MessageAttributesValueT = MessageAttributeValue>
    PublishBatchRequestEntry& AddMessageAttributes(MessageAttributesKeyT&& key, MessageAttributesValueT&& value) {
      m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::forward<MessageAttributesKeyT>(key), std::forward<MessageAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <ul>
     * <li> <p>This parameter applies only to FIFO (first-in-first-out) topics. The
     * <code>MessageDeduplicationId</code> can contain up to 128 alphanumeric
     * characters <code>(a-z, A-Z, 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p> </li> <li>
     * <p>Every message must have a unique <code>MessageDeduplicationId</code>, which
     * is a token used for deduplication of sent messages within the 5 minute minimum
     * deduplication interval.</p> </li> <li> <p>The scope of deduplication depends on
     * the <code>FifoThroughputScope</code> attribute, when set to <code>Topic</code>
     * the message deduplication scope is across the entire topic, when set to
     * <code>MessageGroup</code> the message deduplication scope is within each
     * individual message group. </p> </li> <li> <p>If a message with a particular
     * <code>MessageDeduplicationId</code> is sent successfully, subsequent messages
     * within the deduplication scope and interval, with the same
     * <code>MessageDeduplicationId</code>, are accepted successfully but aren't
     * delivered.</p> </li> <li> <p>Every message must have a unique
     * <code>MessageDeduplicationId</code>.</p> <ul> <li> <p>You may provide a
     * <code>MessageDeduplicationId</code> explicitly.</p> </li> <li> <p>If you aren't
     * able to provide a <code>MessageDeduplicationId</code> and you enable
     * <code>ContentBasedDeduplication</code> for your topic, Amazon SNS uses a SHA-256
     * hash to generate the <code>MessageDeduplicationId</code> using the body of the
     * message (but not the attributes of the message).</p> </li> <li> <p>If you don't
     * provide a <code>MessageDeduplicationId</code> and the topic doesn't have
     * <code>ContentBasedDeduplication</code> set, the action fails with an error.</p>
     * </li> <li> <p>If the topic has a <code>ContentBasedDeduplication</code> set,
     * your <code>MessageDeduplicationId</code> overrides the generated one. </p> </li>
     * </ul> </li> <li> <p>When <code>ContentBasedDeduplication</code> is in effect,
     * messages with identical content sent within the deduplication scope and interval
     * are treated as duplicates and only one copy of the message is delivered.</p>
     * </li> <li> <p>If you send one message with
     * <code>ContentBasedDeduplication</code> enabled, and then another message with a
     * <code>MessageDeduplicationId</code> that is the same as the one generated for
     * the first <code>MessageDeduplicationId</code>, the two messages are treated as
     * duplicates, within the deduplication scope and interval, and only one copy of
     * the message is delivered. </p> </li> </ul>  <p>The
     * <code>MessageDeduplicationId</code> is available to the consumer of the message
     * (this can be useful for troubleshooting delivery issues).</p> <p>If a message is
     * sent successfully but the acknowledgement is lost and the message is resent with
     * the same <code>MessageDeduplicationId</code> after the deduplication interval,
     * Amazon SNS can't detect duplicate messages. </p> <p>Amazon SNS continues to keep
     * track of the message deduplication ID even after the message is received and
     * deleted. </p> 
     */
    inline const Aws::String& GetMessageDeduplicationId() const { return m_messageDeduplicationId; }
    inline bool MessageDeduplicationIdHasBeenSet() const { return m_messageDeduplicationIdHasBeenSet; }
    template<typename MessageDeduplicationIdT = Aws::String>
    void SetMessageDeduplicationId(MessageDeduplicationIdT&& value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId = std::forward<MessageDeduplicationIdT>(value); }
    template<typename MessageDeduplicationIdT = Aws::String>
    PublishBatchRequestEntry& WithMessageDeduplicationId(MessageDeduplicationIdT&& value) { SetMessageDeduplicationId(std::forward<MessageDeduplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>FIFO topics: The tag that specifies that a message belongs to a specific
     * message group. Messages that belong to the same message group are processed in a
     * FIFO manner (however, messages in different message groups might be processed
     * out of order). To interleave multiple ordered streams within a single topic, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple consumers can process the topic, but the
     * session data of each user is processed in a FIFO fashion. You must associate a
     * non-empty <code>MessageGroupId</code> with a message. If you do not provide a
     * <code>MessageGroupId</code>, the action fails. </p> <p>Standard topics: The
     * <code>MessageGroupId</code> is optional and is forwarded only to Amazon SQS
     * standard subscriptions to activate <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-fair-queues.html">fair
     * queues</a>. The <code>MessageGroupId</code> is not used for, or sent to, any
     * other endpoint types.</p> <p>The length of <code>MessageGroupId</code> is 128
     * characters.</p> <p> <code>MessageGroupId</code> can contain alphanumeric
     * characters <code>(a-z, A-Z, 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>
     */
    inline const Aws::String& GetMessageGroupId() const { return m_messageGroupId; }
    inline bool MessageGroupIdHasBeenSet() const { return m_messageGroupIdHasBeenSet; }
    template<typename MessageGroupIdT = Aws::String>
    void SetMessageGroupId(MessageGroupIdT&& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = std::forward<MessageGroupIdT>(value); }
    template<typename MessageGroupIdT = Aws::String>
    PublishBatchRequestEntry& WithMessageGroupId(MessageGroupIdT&& value) { SetMessageGroupId(std::forward<MessageGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_messageStructure;
    bool m_messageStructureHasBeenSet = false;

    Aws::Map<Aws::String, MessageAttributeValue> m_messageAttributes;
    bool m_messageAttributesHasBeenSet = false;

    Aws::String m_messageDeduplicationId;
    bool m_messageDeduplicationIdHasBeenSet = false;

    Aws::String m_messageGroupId;
    bool m_messageGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
