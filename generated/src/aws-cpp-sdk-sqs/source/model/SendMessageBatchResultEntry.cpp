/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/SendMessageBatchResultEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SQS
{
namespace Model
{

SendMessageBatchResultEntry::SendMessageBatchResultEntry() : 
    m_idHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_mD5OfMessageBodyHasBeenSet(false),
    m_mD5OfMessageAttributesHasBeenSet(false),
    m_mD5OfMessageSystemAttributesHasBeenSet(false),
    m_sequenceNumberHasBeenSet(false)
{
}

SendMessageBatchResultEntry::SendMessageBatchResultEntry(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_mD5OfMessageBodyHasBeenSet(false),
    m_mD5OfMessageAttributesHasBeenSet(false),
    m_mD5OfMessageSystemAttributesHasBeenSet(false),
    m_sequenceNumberHasBeenSet(false)
{
  *this = jsonValue;
}

SendMessageBatchResultEntry& SendMessageBatchResultEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageId"))
  {
    m_messageId = jsonValue.GetString("MessageId");

    m_messageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MD5OfMessageBody"))
  {
    m_mD5OfMessageBody = jsonValue.GetString("MD5OfMessageBody");

    m_mD5OfMessageBodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MD5OfMessageAttributes"))
  {
    m_mD5OfMessageAttributes = jsonValue.GetString("MD5OfMessageAttributes");

    m_mD5OfMessageAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MD5OfMessageSystemAttributes"))
  {
    m_mD5OfMessageSystemAttributes = jsonValue.GetString("MD5OfMessageSystemAttributes");

    m_mD5OfMessageSystemAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SequenceNumber"))
  {
    m_sequenceNumber = jsonValue.GetString("SequenceNumber");

    m_sequenceNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue SendMessageBatchResultEntry::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("MessageId", m_messageId);

  }

  if(m_mD5OfMessageBodyHasBeenSet)
  {
   payload.WithString("MD5OfMessageBody", m_mD5OfMessageBody);

  }

  if(m_mD5OfMessageAttributesHasBeenSet)
  {
   payload.WithString("MD5OfMessageAttributes", m_mD5OfMessageAttributes);

  }

  if(m_mD5OfMessageSystemAttributesHasBeenSet)
  {
   payload.WithString("MD5OfMessageSystemAttributes", m_mD5OfMessageSystemAttributes);

  }

  if(m_sequenceNumberHasBeenSet)
  {
   payload.WithString("SequenceNumber", m_sequenceNumber);

  }

  return payload;
}

} // namespace Model
} // namespace SQS
} // namespace Aws
