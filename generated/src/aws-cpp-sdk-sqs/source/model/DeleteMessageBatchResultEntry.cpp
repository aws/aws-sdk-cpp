/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/DeleteMessageBatchResultEntry.h>
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

DeleteMessageBatchResultEntry::DeleteMessageBatchResultEntry() : 
    m_idHasBeenSet(false)
{
}

DeleteMessageBatchResultEntry::DeleteMessageBatchResultEntry(JsonView jsonValue) : 
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteMessageBatchResultEntry& DeleteMessageBatchResultEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteMessageBatchResultEntry::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace SQS
} // namespace Aws
