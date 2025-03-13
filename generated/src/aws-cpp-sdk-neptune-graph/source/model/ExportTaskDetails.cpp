/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ExportTaskDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

ExportTaskDetails::ExportTaskDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ExportTaskDetails& ExportTaskDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeElapsedSeconds"))
  {
    m_timeElapsedSeconds = jsonValue.GetInt64("timeElapsedSeconds");
    m_timeElapsedSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("progressPercentage"))
  {
    m_progressPercentage = jsonValue.GetInteger("progressPercentage");
    m_progressPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numVerticesWritten"))
  {
    m_numVerticesWritten = jsonValue.GetInt64("numVerticesWritten");
    m_numVerticesWrittenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numEdgesWritten"))
  {
    m_numEdgesWritten = jsonValue.GetInt64("numEdgesWritten");
    m_numEdgesWrittenHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportTaskDetails::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_timeElapsedSecondsHasBeenSet)
  {
   payload.WithInt64("timeElapsedSeconds", m_timeElapsedSeconds);

  }

  if(m_progressPercentageHasBeenSet)
  {
   payload.WithInteger("progressPercentage", m_progressPercentage);

  }

  if(m_numVerticesWrittenHasBeenSet)
  {
   payload.WithInt64("numVerticesWritten", m_numVerticesWritten);

  }

  if(m_numEdgesWrittenHasBeenSet)
  {
   payload.WithInt64("numEdgesWritten", m_numEdgesWritten);

  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
