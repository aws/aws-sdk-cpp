/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Encloses data related to a successful message in a batch request for
   * topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/PublishBatchResultEntry">AWS
   * API Reference</a></p>
   */
  class PublishBatchResultEntry
  {
  public:
    AWS_SNS_API PublishBatchResultEntry();
    AWS_SNS_API PublishBatchResultEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SNS_API PublishBatchResultEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SNS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SNS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline PublishBatchResultEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline PublishBatchResultEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The <code>Id</code> of an entry in a batch request.</p>
     */
    inline PublishBatchResultEntry& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>An identifier for the message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>An identifier for the message.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>An identifier for the message.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>An identifier for the message.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>An identifier for the message.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>An identifier for the message.</p>
     */
    inline PublishBatchResultEntry& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>An identifier for the message.</p>
     */
    inline PublishBatchResultEntry& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>An identifier for the message.</p>
     */
    inline PublishBatchResultEntry& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * large, non-consecutive number that Amazon SNS assigns to each message.</p>
     * <p>The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for a particular
     * <code>MessageGroupId</code>.</p>
     */
    inline const Aws::String& GetSequenceNumber() const{ return m_sequenceNumber; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * large, non-consecutive number that Amazon SNS assigns to each message.</p>
     * <p>The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for a particular
     * <code>MessageGroupId</code>.</p>
     */
    inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * large, non-consecutive number that Amazon SNS assigns to each message.</p>
     * <p>The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for a particular
     * <code>MessageGroupId</code>.</p>
     */
    inline void SetSequenceNumber(const Aws::String& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = value; }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * large, non-consecutive number that Amazon SNS assigns to each message.</p>
     * <p>The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for a particular
     * <code>MessageGroupId</code>.</p>
     */
    inline void SetSequenceNumber(Aws::String&& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = std::move(value); }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * large, non-consecutive number that Amazon SNS assigns to each message.</p>
     * <p>The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for a particular
     * <code>MessageGroupId</code>.</p>
     */
    inline void SetSequenceNumber(const char* value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber.assign(value); }

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * large, non-consecutive number that Amazon SNS assigns to each message.</p>
     * <p>The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for a particular
     * <code>MessageGroupId</code>.</p>
     */
    inline PublishBatchResultEntry& WithSequenceNumber(const Aws::String& value) { SetSequenceNumber(value); return *this;}

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * large, non-consecutive number that Amazon SNS assigns to each message.</p>
     * <p>The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for a particular
     * <code>MessageGroupId</code>.</p>
     */
    inline PublishBatchResultEntry& WithSequenceNumber(Aws::String&& value) { SetSequenceNumber(std::move(value)); return *this;}

    /**
     * <p>This parameter applies only to FIFO (first-in-first-out) topics.</p> <p>The
     * large, non-consecutive number that Amazon SNS assigns to each message.</p>
     * <p>The length of <code>SequenceNumber</code> is 128 bits.
     * <code>SequenceNumber</code> continues to increase for a particular
     * <code>MessageGroupId</code>.</p>
     */
    inline PublishBatchResultEntry& WithSequenceNumber(const char* value) { SetSequenceNumber(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_sequenceNumber;
    bool m_sequenceNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
