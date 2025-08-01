/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sns/model/MessageAttributeValue.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for Publish action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/PublishInput">AWS
   * API Reference</a></p>
   */
  class PublishRequest : public SNSRequest
  {
  public:
    AWS_SNS_API PublishRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Publish"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The topic you want to publish to.</p> <p>If you don't specify a value for the
     * <code>TopicArn</code> parameter, you must specify a value for the
     * <code>PhoneNumber</code> or <code>TargetArn</code> parameters.</p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    PublishRequest& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you don't specify a value for the <code>TargetArn</code> parameter, you
     * must specify a value for the <code>PhoneNumber</code> or <code>TopicArn</code>
     * parameters.</p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    PublishRequest& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number to which you want to deliver an SMS message. Use E.164
     * format.</p> <p>If you don't specify a value for the <code>PhoneNumber</code>
     * parameter, you must specify a value for the <code>TargetArn</code> or
     * <code>TopicArn</code> parameters.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    PublishRequest& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message you want to send.</p> <p>If you are publishing to a topic and you
     * want to send the same message to all transport protocols, include the text of
     * the message as a String value. If you want to send different messages for each
     * transport protocol, set the value of the <code>MessageStructure</code> parameter
     * to <code>json</code> and use a JSON object for the <code>Message</code>
     * parameter. </p> <p/> <p>Constraints:</p> <ul> <li> <p>With the exception of SMS,
     * messages must be UTF-8 encoded strings and at most 256 KB in size (262,144
     * bytes, not 262,144 characters).</p> </li> <li> <p>For SMS, each message can
     * contain up to 140 characters. This character limit depends on the encoding
     * schema. For example, an SMS message can contain 160 GSM characters, 140 ASCII
     * characters, or 70 UCS-2 characters.</p> <p>If you publish a message that exceeds
     * this size limit, Amazon SNS sends the message as multiple messages, each fitting
     * within the size limit. Messages aren't truncated mid-word but are cut off at
     * whole-word boundaries.</p> <p>The total size limit for a single SMS
     * <code>Publish</code> action is 1,600 characters.</p> </li> </ul>
     * <p>JSON-specific constraints:</p> <ul> <li> <p>Keys in the JSON object that
     * correspond to supported transport protocols must have simple JSON string
     * values.</p> </li> <li> <p>The values will be parsed (unescaped) before they are
     * used in outgoing messages.</p> </li> <li> <p>Outbound notifications are JSON
     * encoded (meaning that the characters will be reescaped for sending).</p> </li>
     * <li> <p>Values have a minimum length of 0 (the empty string, "", is
     * allowed).</p> </li> <li> <p>Values have a maximum length bounded by the overall
     * message size (so, including multiple protocols may limit message sizes).</p>
     * </li> <li> <p>Non-string values will cause the key to be ignored.</p> </li> <li>
     * <p>Keys that do not correspond to supported transport protocols are ignored.</p>
     * </li> <li> <p>Duplicate keys are not allowed.</p> </li> <li> <p>Failure to parse
     * or validate any key or value in the message will cause the <code>Publish</code>
     * call to return an error (no partial delivery).</p> </li> </ul>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    PublishRequest& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional parameter to be used as the "Subject" line when the message is
     * delivered to email endpoints. This field will also be included, if present, in
     * the standard JSON messages delivered to other endpoints.</p> <p>Constraints:
     * Subjects must be UTF-8 text with no line breaks or control characters, and less
     * than 100 characters long.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    PublishRequest& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
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
     * want to send to a specific transport protocol (e.g., "http").</p> <p>Valid
     * value: <code>json</code> </p>
     */
    inline const Aws::String& GetMessageStructure() const { return m_messageStructure; }
    inline bool MessageStructureHasBeenSet() const { return m_messageStructureHasBeenSet; }
    template<typename MessageStructureT = Aws::String>
    void SetMessageStructure(MessageStructureT&& value) { m_messageStructureHasBeenSet = true; m_messageStructure = std::forward<MessageStructureT>(value); }
    template<typename MessageStructureT = Aws::String>
    PublishRequest& WithMessageStructure(MessageStructureT&& value) { SetMessageStructure(std::forward<MessageStructureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message attributes for Publish action.</p>
     */
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const { return m_messageAttributes; }
    inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }
    template<typename MessageAttributesT = Aws::Map<Aws::String, MessageAttributeValue>>
    void SetMessageAttributes(MessageAttributesT&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = std::forward<MessageAttributesT>(value); }
    template<typename MessageAttributesT = Aws::Map<Aws::String, MessageAttributeValue>>
    PublishRequest& WithMessageAttributes(MessageAttributesT&& value) { SetMessageAttributes(std::forward<MessageAttributesT>(value)); return *this;}
    template<typename MessageAttributesKeyT = Aws::String, typename MessageAttributesValueT = MessageAttributeValue>
    PublishRequest& AddMessageAttributes(MessageAttributesKeyT&& key, MessageAttributesValueT&& value) {
      m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::forward<MessageAttributesKeyT>(key), std::forward<MessageAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <ul> <li> <p>This parameter applies only to FIFO (first-in-first-out) topics.
     * The <code>MessageDeduplicationId</code> can contain up to 128 alphanumeric
     * characters <code>(a-z, A-Z, 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p> </li> <li>
     * <p>Every message must have a unique <code>MessageDeduplicationId</code>, which
     * is a token used for deduplication of sent messages within the 5 minute minimum
     * deduplication interval.</p> </li> <li> <p>The scope of deduplication depends on
     * the <code>FifoThroughputScope</code> attribute, when set to <code>Topic</code>
     * the message deduplication scope is across the entire topic, when set to
     * <code>MessageGroup</code> the message deduplication scope is within each
     * individual message group.</p> </li> <li> <p>If a message with a particular
     * <code>MessageDeduplicationId</code> is sent successfully, subsequent messages
     * within the deduplication scope and interval, with the same
     * <code>MessageDeduplicationId</code>, are accepted successfully but aren't
     * delivered.</p> </li> <li> <p>Every message must have a unique
     * <code>MessageDeduplicationId</code>:</p> <ul> <li> <p>You may provide a
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
     * the message is delivered.</p> </li> </ul>
     */
    inline const Aws::String& GetMessageDeduplicationId() const { return m_messageDeduplicationId; }
    inline bool MessageDeduplicationIdHasBeenSet() const { return m_messageDeduplicationIdHasBeenSet; }
    template<typename MessageDeduplicationIdT = Aws::String>
    void SetMessageDeduplicationId(MessageDeduplicationIdT&& value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId = std::forward<MessageDeduplicationIdT>(value); }
    template<typename MessageDeduplicationIdT = Aws::String>
    PublishRequest& WithMessageDeduplicationId(MessageDeduplicationIdT&& value) { SetMessageDeduplicationId(std::forward<MessageDeduplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>MessageGroupId</code> can contain up to 128 alphanumeric characters
     * <code>(a-z, A-Z, 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p> <p> For FIFO
     * topics: The <code>MessageGroupId</code> is a tag that specifies that a message
     * belongs to a specific message group. Messages that belong to the same message
     * group are processed in a FIFO manner (however, messages in different message
     * groups might be processed out of order). Every message must include a
     * <code>MessageGroupId</code>. </p> <p> For standard topics: The
     * <code>MessageGroupId</code> is optional and is forwarded only to Amazon SQS
     * standard subscriptions to activate <a
     * href="https://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/sqs-fair-queues.html">fair
     * queues</a>. The <code>MessageGroupId</code> is not used for, or sent to, any
     * other endpoint types. When provided, the same validation rules apply as for FIFO
     * topics. </p>
     */
    inline const Aws::String& GetMessageGroupId() const { return m_messageGroupId; }
    inline bool MessageGroupIdHasBeenSet() const { return m_messageGroupIdHasBeenSet; }
    template<typename MessageGroupIdT = Aws::String>
    void SetMessageGroupId(MessageGroupIdT&& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = std::forward<MessageGroupIdT>(value); }
    template<typename MessageGroupIdT = Aws::String>
    PublishRequest& WithMessageGroupId(MessageGroupIdT&& value) { SetMessageGroupId(std::forward<MessageGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

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
