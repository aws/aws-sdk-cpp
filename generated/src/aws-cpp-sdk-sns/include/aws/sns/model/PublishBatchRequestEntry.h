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
    AWS_SNS_API PublishBatchRequestEntry();
    AWS_SNS_API PublishBatchRequestEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SNS_API PublishBatchRequestEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SNS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SNS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>An identifier for the message in this batch.</p>  <p>The
     * <code>Ids</code> of a batch request must be unique within a request. </p>
     * <p>This identifier can have up to 80 characters. The following characters are
     * accepted: alphanumeric characters, hyphens(-), and underscores (_). </p> 
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>An identifier for the message in this batch.</p>  <p>The
     * <code>Ids</code> of a batch request must be unique within a request. </p>
     * <p>This identifier can have up to 80 characters. The following characters are
     * accepted: alphanumeric characters, hyphens(-), and underscores (_). </p> 
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>An identifier for the message in this batch.</p>  <p>The
     * <code>Ids</code> of a batch request must be unique within a request. </p>
     * <p>This identifier can have up to 80 characters. The following characters are
     * accepted: alphanumeric characters, hyphens(-), and underscores (_). </p> 
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>An identifier for the message in this batch.</p>  <p>The
     * <code>Ids</code> of a batch request must be unique within a request. </p>
     * <p>This identifier can have up to 80 characters. The following characters are
     * accepted: alphanumeric characters, hyphens(-), and underscores (_). </p> 
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>An identifier for the message in this batch.</p>  <p>The
     * <code>Ids</code> of a batch request must be unique within a request. </p>
     * <p>This identifier can have up to 80 characters. The following characters are
     * accepted: alphanumeric characters, hyphens(-), and underscores (_). </p> 
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>An identifier for the message in this batch.</p>  <p>The
     * <code>Ids</code> of a batch request must be unique within a request. </p>
     * <p>This identifier can have up to 80 characters. The following characters are
     * accepted: alphanumeric characters, hyphens(-), and underscores (_). </p> 
     */
    inline PublishBatchRequestEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>An identifier for the message in this batch.</p>  <p>The
     * <code>Ids</code> of a batch request must be unique within a request. </p>
     * <p>This identifier can have up to 80 characters. The following characters are
     * accepted: alphanumeric characters, hyphens(-), and underscores (_). </p> 
     */
    inline PublishBatchRequestEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>An identifier for the message in this batch.</p>  <p>The
     * <code>Ids</code> of a batch request must be unique within a request. </p>
     * <p>This identifier can have up to 80 characters. The following characters are
     * accepted: alphanumeric characters, hyphens(-), and underscores (_). </p> 
     */
    inline PublishBatchRequestEntry& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The body of the message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The body of the message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The body of the message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The body of the message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The body of the message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The body of the message.</p>
     */
    inline PublishBatchRequestEntry& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The body of the message.</p>
     */
    inline PublishBatchRequestEntry& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The body of the message.</p>
     */
    inline PublishBatchRequestEntry& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The subject of the batch message.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject of the batch message.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject of the batch message.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject of the batch message.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject of the batch message.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The subject of the batch message.</p>
     */
    inline PublishBatchRequestEntry& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject of the batch message.</p>
     */
    inline PublishBatchRequestEntry& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The subject of the batch message.</p>
     */
    inline PublishBatchRequestEntry& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g. http). </p>
     */
    inline const Aws::String& GetMessageStructure() const{ return m_messageStructure; }

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g. http). </p>
     */
    inline bool MessageStructureHasBeenSet() const { return m_messageStructureHasBeenSet; }

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g. http). </p>
     */
    inline void SetMessageStructure(const Aws::String& value) { m_messageStructureHasBeenSet = true; m_messageStructure = value; }

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g. http). </p>
     */
    inline void SetMessageStructure(Aws::String&& value) { m_messageStructureHasBeenSet = true; m_messageStructure = std::move(value); }

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g. http). </p>
     */
    inline void SetMessageStructure(const char* value) { m_messageStructureHasBeenSet = true; m_messageStructure.assign(value); }

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g. http). </p>
     */
    inline PublishBatchRequestEntry& WithMessageStructure(const Aws::String& value) { SetMessageStructure(value); return *this;}

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g. http). </p>
     */
    inline PublishBatchRequestEntry& WithMessageStructure(Aws::String&& value) { SetMessageStructure(std::move(value)); return *this;}

    /**
     * <p>Set <code>MessageStructure</code> to <code>json</code> if you want to send a
     * different message for each protocol. For example, using one publish action, you
     * can send a short message to your SMS subscribers and a longer message to your
     * email subscribers. If you set <code>MessageStructure</code> to
     * <code>json</code>, the value of the <code>Message</code> parameter must: </p>
     * <ul> <li> <p>be a syntactically valid JSON object; and</p> </li> <li> <p>contain
     * at least a top-level JSON key of "default" with a value that is a string.</p>
     * </li> </ul> <p>You can define other top-level keys that define the message you
     * want to send to a specific transport protocol (e.g. http). </p>
     */
    inline PublishBatchRequestEntry& WithMessageStructure(const char* value) { SetMessageStructure(value); return *this;}


    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-message-attributes.html">Amazon
     * SNS message attributes</a> in the Amazon SNS Developer Guide.</p>
     */
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const{ return m_messageAttributes; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-message-attributes.html">Amazon
     * SNS message attributes</a> in the Amazon SNS Developer Guide.</p>
     */
    inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-message-attributes.html">Amazon
     * SNS message attributes</a> in the Amazon SNS Developer Guide.</p>
     */
    inline void SetMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-message-attributes.html">Amazon
     * SNS message attributes</a> in the Amazon SNS Developer Guide.</p>
     */
    inline void SetMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = std::move(value); }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-message-attributes.html">Amazon
     * SNS message attributes</a> in the Amazon SNS Developer Guide.</p>
     */
    inline PublishBatchRequestEntry& WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-message-attributes.html">Amazon
     * SNS message attributes</a> in the Amazon SNS Developer Guide.</p>
     */
    inline PublishBatchRequestEntry& WithMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { SetMessageAttributes(std::move(value)); return *this;}

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-message-attributes.html">Amazon
     * SNS message attributes</a> in the Amazon SNS Developer Guide.</p>
     */
    inline PublishBatchRequestEntry& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-message-attributes.html">Amazon
     * SNS message attributes</a> in the Amazon SNS Developer Guide.</p>
     */
    inline PublishBatchRequestEntry& AddMessageAttributes(Aws::String&& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-message-attributes.html">Amazon
     * SNS message attributes</a> in the Amazon SNS Developer Guide.</p>
     */
    inline PublishBatchRequestEntry& AddMessageAttributes(const Aws::String& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-message-attributes.html">Amazon
     * SNS message attributes</a> in the Amazon SNS Developer Guide.</p>
     */
    inline PublishBatchRequestEntry& AddMessageAttributes(Aws::String&& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-message-attributes.html">Amazon
     * SNS message attributes</a> in the Amazon SNS Developer Guide.</p>
     */
    inline PublishBatchRequestEntry& AddMessageAttributes(const char* key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each message attribute consists of a <code>Name</code>, <code>Type</code>,
     * and <code>Value</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-message-attributes.html">Amazon
     * SNS message attributes</a> in the Amazon SNS Developer Guide.</p>
     */
    inline PublishBatchRequestEntry& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }


    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * token used for deduplication of messages within a 5-minute minimum deduplication
     * interval. If a message with a particular <code>MessageDeduplicationId</code> is
     * sent successfully, subsequent messages with the same
     * <code>MessageDeduplicationId</code> are accepted successfully but aren't
     * delivered.</p> <ul> <li> <p>Every message must have a unique
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
     * messages with identical content sent within the deduplication interval are
     * treated as duplicates and only one copy of the message is delivered.</p> </li>
     * <li> <p>If you send one message with <code>ContentBasedDeduplication</code>
     * enabled, and then another message with a <code>MessageDeduplicationId</code>
     * that is the same as the one generated for the first
     * <code>MessageDeduplicationId</code>, the two messages are treated as duplicates
     * and only one copy of the message is delivered. </p> </li> </ul>  <p>The
     * <code>MessageDeduplicationId</code> is available to the consumer of the message
     * (this can be useful for troubleshooting delivery issues).</p> <p>If a message is
     * sent successfully but the acknowledgement is lost and the message is resent with
     * the same <code>MessageDeduplicationId</code> after the deduplication interval,
     * Amazon SNS can't detect duplicate messages. </p> <p>Amazon SNS continues to keep
     * track of the message deduplication ID even after the message is received and
     * deleted. </p>  <p>The length of <code>MessageDeduplicationId</code> is
     * 128 characters.</p> <p> <code>MessageDeduplicationId</code> can contain
     * alphanumeric characters <code>(a-z, A-Z, 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>
     */
    inline const Aws::String& GetMessageDeduplicationId() const{ return m_messageDeduplicationId; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * token used for deduplication of messages within a 5-minute minimum deduplication
     * interval. If a message with a particular <code>MessageDeduplicationId</code> is
     * sent successfully, subsequent messages with the same
     * <code>MessageDeduplicationId</code> are accepted successfully but aren't
     * delivered.</p> <ul> <li> <p>Every message must have a unique
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
     * messages with identical content sent within the deduplication interval are
     * treated as duplicates and only one copy of the message is delivered.</p> </li>
     * <li> <p>If you send one message with <code>ContentBasedDeduplication</code>
     * enabled, and then another message with a <code>MessageDeduplicationId</code>
     * that is the same as the one generated for the first
     * <code>MessageDeduplicationId</code>, the two messages are treated as duplicates
     * and only one copy of the message is delivered. </p> </li> </ul>  <p>The
     * <code>MessageDeduplicationId</code> is available to the consumer of the message
     * (this can be useful for troubleshooting delivery issues).</p> <p>If a message is
     * sent successfully but the acknowledgement is lost and the message is resent with
     * the same <code>MessageDeduplicationId</code> after the deduplication interval,
     * Amazon SNS can't detect duplicate messages. </p> <p>Amazon SNS continues to keep
     * track of the message deduplication ID even after the message is received and
     * deleted. </p>  <p>The length of <code>MessageDeduplicationId</code> is
     * 128 characters.</p> <p> <code>MessageDeduplicationId</code> can contain
     * alphanumeric characters <code>(a-z, A-Z, 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>
     */
    inline bool MessageDeduplicationIdHasBeenSet() const { return m_messageDeduplicationIdHasBeenSet; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * token used for deduplication of messages within a 5-minute minimum deduplication
     * interval. If a message with a particular <code>MessageDeduplicationId</code> is
     * sent successfully, subsequent messages with the same
     * <code>MessageDeduplicationId</code> are accepted successfully but aren't
     * delivered.</p> <ul> <li> <p>Every message must have a unique
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
     * messages with identical content sent within the deduplication interval are
     * treated as duplicates and only one copy of the message is delivered.</p> </li>
     * <li> <p>If you send one message with <code>ContentBasedDeduplication</code>
     * enabled, and then another message with a <code>MessageDeduplicationId</code>
     * that is the same as the one generated for the first
     * <code>MessageDeduplicationId</code>, the two messages are treated as duplicates
     * and only one copy of the message is delivered. </p> </li> </ul>  <p>The
     * <code>MessageDeduplicationId</code> is available to the consumer of the message
     * (this can be useful for troubleshooting delivery issues).</p> <p>If a message is
     * sent successfully but the acknowledgement is lost and the message is resent with
     * the same <code>MessageDeduplicationId</code> after the deduplication interval,
     * Amazon SNS can't detect duplicate messages. </p> <p>Amazon SNS continues to keep
     * track of the message deduplication ID even after the message is received and
     * deleted. </p>  <p>The length of <code>MessageDeduplicationId</code> is
     * 128 characters.</p> <p> <code>MessageDeduplicationId</code> can contain
     * alphanumeric characters <code>(a-z, A-Z, 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>
     */
    inline void SetMessageDeduplicationId(const Aws::String& value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId = value; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * token used for deduplication of messages within a 5-minute minimum deduplication
     * interval. If a message with a particular <code>MessageDeduplicationId</code> is
     * sent successfully, subsequent messages with the same
     * <code>MessageDeduplicationId</code> are accepted successfully but aren't
     * delivered.</p> <ul> <li> <p>Every message must have a unique
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
     * messages with identical content sent within the deduplication interval are
     * treated as duplicates and only one copy of the message is delivered.</p> </li>
     * <li> <p>If you send one message with <code>ContentBasedDeduplication</code>
     * enabled, and then another message with a <code>MessageDeduplicationId</code>
     * that is the same as the one generated for the first
     * <code>MessageDeduplicationId</code>, the two messages are treated as duplicates
     * and only one copy of the message is delivered. </p> </li> </ul>  <p>The
     * <code>MessageDeduplicationId</code> is available to the consumer of the message
     * (this can be useful for troubleshooting delivery issues).</p> <p>If a message is
     * sent successfully but the acknowledgement is lost and the message is resent with
     * the same <code>MessageDeduplicationId</code> after the deduplication interval,
     * Amazon SNS can't detect duplicate messages. </p> <p>Amazon SNS continues to keep
     * track of the message deduplication ID even after the message is received and
     * deleted. </p>  <p>The length of <code>MessageDeduplicationId</code> is
     * 128 characters.</p> <p> <code>MessageDeduplicationId</code> can contain
     * alphanumeric characters <code>(a-z, A-Z, 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>
     */
    inline void SetMessageDeduplicationId(Aws::String&& value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId = std::move(value); }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * token used for deduplication of messages within a 5-minute minimum deduplication
     * interval. If a message with a particular <code>MessageDeduplicationId</code> is
     * sent successfully, subsequent messages with the same
     * <code>MessageDeduplicationId</code> are accepted successfully but aren't
     * delivered.</p> <ul> <li> <p>Every message must have a unique
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
     * messages with identical content sent within the deduplication interval are
     * treated as duplicates and only one copy of the message is delivered.</p> </li>
     * <li> <p>If you send one message with <code>ContentBasedDeduplication</code>
     * enabled, and then another message with a <code>MessageDeduplicationId</code>
     * that is the same as the one generated for the first
     * <code>MessageDeduplicationId</code>, the two messages are treated as duplicates
     * and only one copy of the message is delivered. </p> </li> </ul>  <p>The
     * <code>MessageDeduplicationId</code> is available to the consumer of the message
     * (this can be useful for troubleshooting delivery issues).</p> <p>If a message is
     * sent successfully but the acknowledgement is lost and the message is resent with
     * the same <code>MessageDeduplicationId</code> after the deduplication interval,
     * Amazon SNS can't detect duplicate messages. </p> <p>Amazon SNS continues to keep
     * track of the message deduplication ID even after the message is received and
     * deleted. </p>  <p>The length of <code>MessageDeduplicationId</code> is
     * 128 characters.</p> <p> <code>MessageDeduplicationId</code> can contain
     * alphanumeric characters <code>(a-z, A-Z, 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>
     */
    inline void SetMessageDeduplicationId(const char* value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId.assign(value); }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * token used for deduplication of messages within a 5-minute minimum deduplication
     * interval. If a message with a particular <code>MessageDeduplicationId</code> is
     * sent successfully, subsequent messages with the same
     * <code>MessageDeduplicationId</code> are accepted successfully but aren't
     * delivered.</p> <ul> <li> <p>Every message must have a unique
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
     * messages with identical content sent within the deduplication interval are
     * treated as duplicates and only one copy of the message is delivered.</p> </li>
     * <li> <p>If you send one message with <code>ContentBasedDeduplication</code>
     * enabled, and then another message with a <code>MessageDeduplicationId</code>
     * that is the same as the one generated for the first
     * <code>MessageDeduplicationId</code>, the two messages are treated as duplicates
     * and only one copy of the message is delivered. </p> </li> </ul>  <p>The
     * <code>MessageDeduplicationId</code> is available to the consumer of the message
     * (this can be useful for troubleshooting delivery issues).</p> <p>If a message is
     * sent successfully but the acknowledgement is lost and the message is resent with
     * the same <code>MessageDeduplicationId</code> after the deduplication interval,
     * Amazon SNS can't detect duplicate messages. </p> <p>Amazon SNS continues to keep
     * track of the message deduplication ID even after the message is received and
     * deleted. </p>  <p>The length of <code>MessageDeduplicationId</code> is
     * 128 characters.</p> <p> <code>MessageDeduplicationId</code> can contain
     * alphanumeric characters <code>(a-z, A-Z, 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>
     */
    inline PublishBatchRequestEntry& WithMessageDeduplicationId(const Aws::String& value) { SetMessageDeduplicationId(value); return *this;}

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * token used for deduplication of messages within a 5-minute minimum deduplication
     * interval. If a message with a particular <code>MessageDeduplicationId</code> is
     * sent successfully, subsequent messages with the same
     * <code>MessageDeduplicationId</code> are accepted successfully but aren't
     * delivered.</p> <ul> <li> <p>Every message must have a unique
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
     * messages with identical content sent within the deduplication interval are
     * treated as duplicates and only one copy of the message is delivered.</p> </li>
     * <li> <p>If you send one message with <code>ContentBasedDeduplication</code>
     * enabled, and then another message with a <code>MessageDeduplicationId</code>
     * that is the same as the one generated for the first
     * <code>MessageDeduplicationId</code>, the two messages are treated as duplicates
     * and only one copy of the message is delivered. </p> </li> </ul>  <p>The
     * <code>MessageDeduplicationId</code> is available to the consumer of the message
     * (this can be useful for troubleshooting delivery issues).</p> <p>If a message is
     * sent successfully but the acknowledgement is lost and the message is resent with
     * the same <code>MessageDeduplicationId</code> after the deduplication interval,
     * Amazon SNS can't detect duplicate messages. </p> <p>Amazon SNS continues to keep
     * track of the message deduplication ID even after the message is received and
     * deleted. </p>  <p>The length of <code>MessageDeduplicationId</code> is
     * 128 characters.</p> <p> <code>MessageDeduplicationId</code> can contain
     * alphanumeric characters <code>(a-z, A-Z, 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>
     */
    inline PublishBatchRequestEntry& WithMessageDeduplicationId(Aws::String&& value) { SetMessageDeduplicationId(std::move(value)); return *this;}

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * token used for deduplication of messages within a 5-minute minimum deduplication
     * interval. If a message with a particular <code>MessageDeduplicationId</code> is
     * sent successfully, subsequent messages with the same
     * <code>MessageDeduplicationId</code> are accepted successfully but aren't
     * delivered.</p> <ul> <li> <p>Every message must have a unique
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
     * messages with identical content sent within the deduplication interval are
     * treated as duplicates and only one copy of the message is delivered.</p> </li>
     * <li> <p>If you send one message with <code>ContentBasedDeduplication</code>
     * enabled, and then another message with a <code>MessageDeduplicationId</code>
     * that is the same as the one generated for the first
     * <code>MessageDeduplicationId</code>, the two messages are treated as duplicates
     * and only one copy of the message is delivered. </p> </li> </ul>  <p>The
     * <code>MessageDeduplicationId</code> is available to the consumer of the message
     * (this can be useful for troubleshooting delivery issues).</p> <p>If a message is
     * sent successfully but the acknowledgement is lost and the message is resent with
     * the same <code>MessageDeduplicationId</code> after the deduplication interval,
     * Amazon SNS can't detect duplicate messages. </p> <p>Amazon SNS continues to keep
     * track of the message deduplication ID even after the message is received and
     * deleted. </p>  <p>The length of <code>MessageDeduplicationId</code> is
     * 128 characters.</p> <p> <code>MessageDeduplicationId</code> can contain
     * alphanumeric characters <code>(a-z, A-Z, 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>
     */
    inline PublishBatchRequestEntry& WithMessageDeduplicationId(const char* value) { SetMessageDeduplicationId(value); return *this;}


    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * tag that specifies that a message belongs to a specific message group. Messages
     * that belong to the same message group are processed in a FIFO manner (however,
     * messages in different message groups might be processed out of order). To
     * interleave multiple ordered streams within a single topic, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple consumers can process the topic, but the
     * session data of each user is processed in a FIFO fashion. </p> <p>You must
     * associate a non-empty <code>MessageGroupId</code> with a message. If you don't
     * provide a <code>MessageGroupId</code>, the action fails. </p> <p>The length of
     * <code>MessageGroupId</code> is 128 characters.</p> <p>
     * <code>MessageGroupId</code> can contain alphanumeric characters <code>(a-z, A-Z,
     * 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>  <p>
     * <code>MessageGroupId</code> is required for FIFO topics. You can't use it for
     * standard topics. </p> 
     */
    inline const Aws::String& GetMessageGroupId() const{ return m_messageGroupId; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * tag that specifies that a message belongs to a specific message group. Messages
     * that belong to the same message group are processed in a FIFO manner (however,
     * messages in different message groups might be processed out of order). To
     * interleave multiple ordered streams within a single topic, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple consumers can process the topic, but the
     * session data of each user is processed in a FIFO fashion. </p> <p>You must
     * associate a non-empty <code>MessageGroupId</code> with a message. If you don't
     * provide a <code>MessageGroupId</code>, the action fails. </p> <p>The length of
     * <code>MessageGroupId</code> is 128 characters.</p> <p>
     * <code>MessageGroupId</code> can contain alphanumeric characters <code>(a-z, A-Z,
     * 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>  <p>
     * <code>MessageGroupId</code> is required for FIFO topics. You can't use it for
     * standard topics. </p> 
     */
    inline bool MessageGroupIdHasBeenSet() const { return m_messageGroupIdHasBeenSet; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * tag that specifies that a message belongs to a specific message group. Messages
     * that belong to the same message group are processed in a FIFO manner (however,
     * messages in different message groups might be processed out of order). To
     * interleave multiple ordered streams within a single topic, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple consumers can process the topic, but the
     * session data of each user is processed in a FIFO fashion. </p> <p>You must
     * associate a non-empty <code>MessageGroupId</code> with a message. If you don't
     * provide a <code>MessageGroupId</code>, the action fails. </p> <p>The length of
     * <code>MessageGroupId</code> is 128 characters.</p> <p>
     * <code>MessageGroupId</code> can contain alphanumeric characters <code>(a-z, A-Z,
     * 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>  <p>
     * <code>MessageGroupId</code> is required for FIFO topics. You can't use it for
     * standard topics. </p> 
     */
    inline void SetMessageGroupId(const Aws::String& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = value; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * tag that specifies that a message belongs to a specific message group. Messages
     * that belong to the same message group are processed in a FIFO manner (however,
     * messages in different message groups might be processed out of order). To
     * interleave multiple ordered streams within a single topic, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple consumers can process the topic, but the
     * session data of each user is processed in a FIFO fashion. </p> <p>You must
     * associate a non-empty <code>MessageGroupId</code> with a message. If you don't
     * provide a <code>MessageGroupId</code>, the action fails. </p> <p>The length of
     * <code>MessageGroupId</code> is 128 characters.</p> <p>
     * <code>MessageGroupId</code> can contain alphanumeric characters <code>(a-z, A-Z,
     * 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>  <p>
     * <code>MessageGroupId</code> is required for FIFO topics. You can't use it for
     * standard topics. </p> 
     */
    inline void SetMessageGroupId(Aws::String&& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = std::move(value); }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * tag that specifies that a message belongs to a specific message group. Messages
     * that belong to the same message group are processed in a FIFO manner (however,
     * messages in different message groups might be processed out of order). To
     * interleave multiple ordered streams within a single topic, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple consumers can process the topic, but the
     * session data of each user is processed in a FIFO fashion. </p> <p>You must
     * associate a non-empty <code>MessageGroupId</code> with a message. If you don't
     * provide a <code>MessageGroupId</code>, the action fails. </p> <p>The length of
     * <code>MessageGroupId</code> is 128 characters.</p> <p>
     * <code>MessageGroupId</code> can contain alphanumeric characters <code>(a-z, A-Z,
     * 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>  <p>
     * <code>MessageGroupId</code> is required for FIFO topics. You can't use it for
     * standard topics. </p> 
     */
    inline void SetMessageGroupId(const char* value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId.assign(value); }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * tag that specifies that a message belongs to a specific message group. Messages
     * that belong to the same message group are processed in a FIFO manner (however,
     * messages in different message groups might be processed out of order). To
     * interleave multiple ordered streams within a single topic, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple consumers can process the topic, but the
     * session data of each user is processed in a FIFO fashion. </p> <p>You must
     * associate a non-empty <code>MessageGroupId</code> with a message. If you don't
     * provide a <code>MessageGroupId</code>, the action fails. </p> <p>The length of
     * <code>MessageGroupId</code> is 128 characters.</p> <p>
     * <code>MessageGroupId</code> can contain alphanumeric characters <code>(a-z, A-Z,
     * 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>  <p>
     * <code>MessageGroupId</code> is required for FIFO topics. You can't use it for
     * standard topics. </p> 
     */
    inline PublishBatchRequestEntry& WithMessageGroupId(const Aws::String& value) { SetMessageGroupId(value); return *this;}

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * tag that specifies that a message belongs to a specific message group. Messages
     * that belong to the same message group are processed in a FIFO manner (however,
     * messages in different message groups might be processed out of order). To
     * interleave multiple ordered streams within a single topic, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple consumers can process the topic, but the
     * session data of each user is processed in a FIFO fashion. </p> <p>You must
     * associate a non-empty <code>MessageGroupId</code> with a message. If you don't
     * provide a <code>MessageGroupId</code>, the action fails. </p> <p>The length of
     * <code>MessageGroupId</code> is 128 characters.</p> <p>
     * <code>MessageGroupId</code> can contain alphanumeric characters <code>(a-z, A-Z,
     * 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>  <p>
     * <code>MessageGroupId</code> is required for FIFO topics. You can't use it for
     * standard topics. </p> 
     */
    inline PublishBatchRequestEntry& WithMessageGroupId(Aws::String&& value) { SetMessageGroupId(std::move(value)); return *this;}

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * tag that specifies that a message belongs to a specific message group. Messages
     * that belong to the same message group are processed in a FIFO manner (however,
     * messages in different message groups might be processed out of order). To
     * interleave multiple ordered streams within a single topic, use
     * <code>MessageGroupId</code> values (for example, session data for multiple
     * users). In this scenario, multiple consumers can process the topic, but the
     * session data of each user is processed in a FIFO fashion. </p> <p>You must
     * associate a non-empty <code>MessageGroupId</code> with a message. If you don't
     * provide a <code>MessageGroupId</code>, the action fails. </p> <p>The length of
     * <code>MessageGroupId</code> is 128 characters.</p> <p>
     * <code>MessageGroupId</code> can contain alphanumeric characters <code>(a-z, A-Z,
     * 0-9)</code> and punctuation
     * <code>(!"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\]^_`{|}~)</code>.</p>  <p>
     * <code>MessageGroupId</code> is required for FIFO topics. You can't use it for
     * standard topics. </p> 
     */
    inline PublishBatchRequestEntry& WithMessageGroupId(const char* value) { SetMessageGroupId(value); return *this;}

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
