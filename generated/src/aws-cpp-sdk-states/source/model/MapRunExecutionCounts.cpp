/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/MapRunExecutionCounts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

MapRunExecutionCounts::MapRunExecutionCounts() : 
    m_pending(0),
    m_pendingHasBeenSet(false),
    m_running(0),
    m_runningHasBeenSet(false),
    m_succeeded(0),
    m_succeededHasBeenSet(false),
    m_failed(0),
    m_failedHasBeenSet(false),
    m_timedOut(0),
    m_timedOutHasBeenSet(false),
    m_aborted(0),
    m_abortedHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false),
    m_resultsWritten(0),
    m_resultsWrittenHasBeenSet(false)
{
}

MapRunExecutionCounts::MapRunExecutionCounts(JsonView jsonValue) : 
    m_pending(0),
    m_pendingHasBeenSet(false),
    m_running(0),
    m_runningHasBeenSet(false),
    m_succeeded(0),
    m_succeededHasBeenSet(false),
    m_failed(0),
    m_failedHasBeenSet(false),
    m_timedOut(0),
    m_timedOutHasBeenSet(false),
    m_aborted(0),
    m_abortedHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false),
    m_resultsWritten(0),
    m_resultsWrittenHasBeenSet(false)
{
  *this = jsonValue;
}

MapRunExecutionCounts& MapRunExecutionCounts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pending"))
  {
    m_pending = jsonValue.GetInt64("pending");

    m_pendingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("running"))
  {
    m_running = jsonValue.GetInt64("running");

    m_runningHasBeenSet = true;
  }

  if(jsonValue.ValueExists("succeeded"))
  {
    m_succeeded = jsonValue.GetInt64("succeeded");

    m_succeededHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failed"))
  {
    m_failed = jsonValue.GetInt64("failed");

    m_failedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedOut"))
  {
    m_timedOut = jsonValue.GetInt64("timedOut");

    m_timedOutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aborted"))
  {
    m_aborted = jsonValue.GetInt64("aborted");

    m_abortedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetInt64("total");

    m_totalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resultsWritten"))
  {
    m_resultsWritten = jsonValue.GetInt64("resultsWritten");

    m_resultsWrittenHasBeenSet = true;
  }

  return *this;
}

JsonValue MapRunExecutionCounts::Jsonize() const
{
  JsonValue payload;

  if(m_pendingHasBeenSet)
  {
   payload.WithInt64("pending", m_pending);

  }

  if(m_runningHasBeenSet)
  {
   payload.WithInt64("running", m_running);

  }

  if(m_succeededHasBeenSet)
  {
   payload.WithInt64("succeeded", m_succeeded);

  }

  if(m_failedHasBeenSet)
  {
   payload.WithInt64("failed", m_failed);

  }

  if(m_timedOutHasBeenSet)
  {
   payload.WithInt64("timedOut", m_timedOut);

  }

  if(m_abortedHasBeenSet)
  {
   payload.WithInt64("aborted", m_aborted);

  }

  if(m_totalHasBeenSet)
  {
   payload.WithInt64("total", m_total);

  }

  if(m_resultsWrittenHasBeenSet)
  {
   payload.WithInt64("resultsWritten", m_resultsWritten);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
