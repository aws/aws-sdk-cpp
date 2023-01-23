/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Timing.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Timing::Timing() : 
    m_finishTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_submitTimeHasBeenSet(false)
{
}

Timing::Timing(JsonView jsonValue) : 
    m_finishTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_submitTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Timing& Timing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("finishTime"))
  {
    m_finishTime = jsonValue.GetDouble("finishTime");

    m_finishTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("submitTime"))
  {
    m_submitTime = jsonValue.GetDouble("submitTime");

    m_submitTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Timing::Jsonize() const
{
  JsonValue payload;

  if(m_finishTimeHasBeenSet)
  {
   payload.WithDouble("finishTime", m_finishTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_submitTimeHasBeenSet)
  {
   payload.WithDouble("submitTime", m_submitTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
