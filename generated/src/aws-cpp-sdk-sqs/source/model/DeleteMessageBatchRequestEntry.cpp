/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/DeleteMessageBatchRequestEntry.h>
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

DeleteMessageBatchRequestEntry::DeleteMessageBatchRequestEntry() : 
    m_idHasBeenSet(false),
    m_receiptHandleHasBeenSet(false)
{
}

DeleteMessageBatchRequestEntry::DeleteMessageBatchRequestEntry(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_receiptHandleHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteMessageBatchRequestEntry& DeleteMessageBatchRequestEntry::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue DeleteMessageBatchRequestEntry::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace SQS
} // namespace Aws
