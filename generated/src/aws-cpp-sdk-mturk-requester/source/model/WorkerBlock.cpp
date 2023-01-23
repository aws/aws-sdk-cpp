/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/WorkerBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

WorkerBlock::WorkerBlock() : 
    m_workerIdHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

WorkerBlock::WorkerBlock(JsonView jsonValue) : 
    m_workerIdHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

WorkerBlock& WorkerBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkerId"))
  {
    m_workerId = jsonValue.GetString("WorkerId");

    m_workerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkerBlock::Jsonize() const
{
  JsonValue payload;

  if(m_workerIdHasBeenSet)
  {
   payload.WithString("WorkerId", m_workerId);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws
