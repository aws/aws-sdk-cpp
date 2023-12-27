/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/ChangeMessageVisibilityBatchRequestEntry.h>
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

ChangeMessageVisibilityBatchRequestEntry::ChangeMessageVisibilityBatchRequestEntry() : 
    m_idHasBeenSet(false),
    m_receiptHandleHasBeenSet(false),
    m_visibilityTimeout(0),
    m_visibilityTimeoutHasBeenSet(false)
{
}

ChangeMessageVisibilityBatchRequestEntry::ChangeMessageVisibilityBatchRequestEntry(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_receiptHandleHasBeenSet(false),
    m_visibilityTimeout(0),
    m_visibilityTimeoutHasBeenSet(false)
{
  *this = jsonValue;
}

ChangeMessageVisibilityBatchRequestEntry& ChangeMessageVisibilityBatchRequestEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReceiptHandle"))
  {
    m_receiptHandle = jsonValue.GetString("ReceiptHandle");

    m_receiptHandleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisibilityTimeout"))
  {
    m_visibilityTimeout = jsonValue.GetInteger("VisibilityTimeout");

    m_visibilityTimeoutHasBeenSet = true;
  }

  return *this;
}

JsonValue ChangeMessageVisibilityBatchRequestEntry::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_receiptHandleHasBeenSet)
  {
   payload.WithString("ReceiptHandle", m_receiptHandle);

  }

  if(m_visibilityTimeoutHasBeenSet)
  {
   payload.WithInteger("VisibilityTimeout", m_visibilityTimeout);

  }

  return payload;
}

} // namespace Model
} // namespace SQS
} // namespace Aws
