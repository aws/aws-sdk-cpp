/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeTargetSqsQueueParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeTargetSqsQueueParameters::PipeTargetSqsQueueParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

PipeTargetSqsQueueParameters& PipeTargetSqsQueueParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageGroupId"))
  {
    m_messageGroupId = jsonValue.GetString("MessageGroupId");
    m_messageGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MessageDeduplicationId"))
  {
    m_messageDeduplicationId = jsonValue.GetString("MessageDeduplicationId");
    m_messageDeduplicationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue PipeTargetSqsQueueParameters::Jsonize() const
{
  JsonValue payload;

  if(m_messageGroupIdHasBeenSet)
  {
   payload.WithString("MessageGroupId", m_messageGroupId);

  }

  if(m_messageDeduplicationIdHasBeenSet)
  {
   payload.WithString("MessageDeduplicationId", m_messageDeduplicationId);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
