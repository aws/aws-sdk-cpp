/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ImportTaskDetails.h>
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

ImportTaskDetails::ImportTaskDetails() : 
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_timeElapsedSeconds(0),
    m_timeElapsedSecondsHasBeenSet(false),
    m_progressPercentage(0),
    m_progressPercentageHasBeenSet(false),
    m_errorCount(0),
    m_errorCountHasBeenSet(false),
    m_errorDetailsHasBeenSet(false),
    m_statementCount(0),
    m_statementCountHasBeenSet(false),
    m_dictionaryEntryCount(0),
    m_dictionaryEntryCountHasBeenSet(false)
{
}

ImportTaskDetails::ImportTaskDetails(JsonView jsonValue) : 
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_timeElapsedSeconds(0),
    m_timeElapsedSecondsHasBeenSet(false),
    m_progressPercentage(0),
    m_progressPercentageHasBeenSet(false),
    m_errorCount(0),
    m_errorCountHasBeenSet(false),
    m_errorDetailsHasBeenSet(false),
    m_statementCount(0),
    m_statementCountHasBeenSet(false),
    m_dictionaryEntryCount(0),
    m_dictionaryEntryCountHasBeenSet(false)
{
  *this = jsonValue;
}

ImportTaskDetails& ImportTaskDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("errorCount"))
  {
    m_errorCount = jsonValue.GetInteger("errorCount");

    m_errorCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorDetails"))
  {
    m_errorDetails = jsonValue.GetString("errorDetails");

    m_errorDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statementCount"))
  {
    m_statementCount = jsonValue.GetInt64("statementCount");

    m_statementCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dictionaryEntryCount"))
  {
    m_dictionaryEntryCount = jsonValue.GetInt64("dictionaryEntryCount");

    m_dictionaryEntryCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportTaskDetails::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

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

  if(m_errorCountHasBeenSet)
  {
   payload.WithInteger("errorCount", m_errorCount);

  }

  if(m_errorDetailsHasBeenSet)
  {
   payload.WithString("errorDetails", m_errorDetails);

  }

  if(m_statementCountHasBeenSet)
  {
   payload.WithInt64("statementCount", m_statementCount);

  }

  if(m_dictionaryEntryCountHasBeenSet)
  {
   payload.WithInt64("dictionaryEntryCount", m_dictionaryEntryCount);

  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
