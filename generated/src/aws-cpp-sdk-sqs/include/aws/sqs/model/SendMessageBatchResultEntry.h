/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Encloses a <code>MessageId</code> for a successfully-enqueued message in a
   * <code> <a>SendMessageBatch</a>.</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/SendMessageBatchResultEntry">AWS
   * API Reference</a></p>
   */
  class SendMessageBatchResultEntry
  {
  public:
    AWS_SQS_API SendMessageBatchResultEntry() = default;
    AWS_SQS_API SendMessageBatchResultEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SQS_API SendMessageBatchResultEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SQS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier for the message in this batch.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SendMessageBatchResultEntry& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for the message.</p>
     */
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    SendMessageBatchResultEntry& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An MD5 digest of the non-URL-encoded message body string. You can use this
     * attribute to verify that Amazon SQS received the message correctly. Amazon SQS
     * URL-decodes the message before creating the MD5 digest. For information about
     * MD5, see <a href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>.</p>
     */
    inline const Aws::String& GetMD5OfMessageBody() const { return m_mD5OfMessageBody; }
    inline bool MD5OfMessageBodyHasBeenSet() const { return m_mD5OfMessageBodyHasBeenSet; }
    template<typename MD5OfMessageBodyT = Aws::String>
    void SetMD5OfMessageBody(MD5OfMessageBodyT&& value) { m_mD5OfMessageBodyHasBeenSet = true; m_mD5OfMessageBody = std::forward<MD5OfMessageBodyT>(value); }
    template<typename MD5OfMessageBodyT = Aws::String>
    SendMessageBatchResultEntry& WithMD5OfMessageBody(MD5OfMessageBodyT&& value) { SetMD5OfMessageBody(std::forward<MD5OfMessageBodyT>(value)); return *this;}
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
    SendMessageBatchResultEntry& WithMD5OfMessageAttributes(MD5OfMessageAttributesT&& value) { SetMD5OfMessageAttributes(std::forward<MD5OfMessageAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An MD5 digest of the non-URL-encoded message system attribute string. You can
     * use this attribute to verify that Amazon SQS received the message correctly.
     * Amazon SQS URL-decodes the message before creating the MD5 digest. For
     * information about MD5, see <a
     * href="https://www.ietf.org/rfc/rfc1321.txt">RFC1321</a>.</p>
     */
    inline const Aws::String& GetMD5OfMessageSystemAttributes() const { return m_mD5OfMessageSystemAttributes; }
    inline bool MD5OfMessageSystemAttributesHasBeenSet() const { return m_mD5OfMessageSystemAttributesHasBeenSet; }
    template<typename MD5OfMessageSystemAttributesT = Aws::String>
    void SetMD5OfMessageSystemAttributes(MD5OfMessageSystemAttributesT&& value) { m_mD5OfMessageSystemAttributesHasBeenSet = true; m_mD5OfMessageSystemAttributes = std::forward<MD5OfMessageSystemAttributesT>(value); }
    template<typename MD5OfMessageSystemAttributesT = Aws::String>
    SendMessageBatchResultEntry& WithMD5OfMessageSystemAttributes(MD5OfMessageSystemAttributesT&& value) { SetMD5OfMessageSystemAttributes(std::forward<MD5OfMessageSystemAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) queues.</p> <p>The
     * large, non-consecutive number that Amazon SQS assigns to each message.</p>
     * <p>The length of <code>SequenceNumber</code> is 128 bits. As
     * <code>SequenceNumber</code> continues to increase for a particular
     * <code>MessageGroupId</code>.</p>
     */
    inline const Aws::String& GetSequenceNumber() const { return m_sequenceNumber; }
    inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }
    template<typename SequenceNumberT = Aws::String>
    void SetSequenceNumber(SequenceNumberT&& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = std::forward<SequenceNumberT>(value); }
    template<typename SequenceNumberT = Aws::String>
    SendMessageBatchResultEntry& WithSequenceNumber(SequenceNumberT&& value) { SetSequenceNumber(std::forward<SequenceNumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_mD5OfMessageBody;
    bool m_mD5OfMessageBodyHasBeenSet = false;

    Aws::String m_mD5OfMessageAttributes;
    bool m_mD5OfMessageAttributesHasBeenSet = false;

    Aws::String m_mD5OfMessageSystemAttributes;
    bool m_mD5OfMessageSystemAttributesHasBeenSet = false;

    Aws::String m_sequenceNumber;
    bool m_sequenceNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
