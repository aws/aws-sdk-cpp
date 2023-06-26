/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/QueueInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

QueueInfo::QueueInfo() : 
    m_waitingOnIngestionHasBeenSet(false),
    m_queuedIngestionHasBeenSet(false)
{
}

QueueInfo::QueueInfo(JsonView jsonValue) : 
    m_waitingOnIngestionHasBeenSet(false),
    m_queuedIngestionHasBeenSet(false)
{
  *this = jsonValue;
}

QueueInfo& QueueInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WaitingOnIngestion"))
  {
    m_waitingOnIngestion = jsonValue.GetString("WaitingOnIngestion");

    m_waitingOnIngestionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueuedIngestion"))
  {
    m_queuedIngestion = jsonValue.GetString("QueuedIngestion");

    m_queuedIngestionHasBeenSet = true;
  }

  return *this;
}

JsonValue QueueInfo::Jsonize() const
{
  JsonValue payload;

  if(m_waitingOnIngestionHasBeenSet)
  {
   payload.WithString("WaitingOnIngestion", m_waitingOnIngestion);

  }

  if(m_queuedIngestionHasBeenSet)
  {
   payload.WithString("QueuedIngestion", m_queuedIngestion);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
