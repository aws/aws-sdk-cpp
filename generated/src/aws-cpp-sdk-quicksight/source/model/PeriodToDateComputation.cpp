/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PeriodToDateComputation.h>
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

PeriodToDateComputation::PeriodToDateComputation() : 
    m_computationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_periodTimeGranularity(TimeGranularity::NOT_SET),
    m_periodTimeGranularityHasBeenSet(false)
{
}

PeriodToDateComputation::PeriodToDateComputation(JsonView jsonValue) : 
    m_computationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_periodTimeGranularity(TimeGranularity::NOT_SET),
    m_periodTimeGranularityHasBeenSet(false)
{
  *this = jsonValue;
}

PeriodToDateComputation& PeriodToDateComputation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComputationId"))
  {
    m_computationId = jsonValue.GetString("ComputationId");

    m_computationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetObject("Time");

    m_timeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeriodTimeGranularity"))
  {
    m_periodTimeGranularity = TimeGranularityMapper::GetTimeGranularityForName(jsonValue.GetString("PeriodTimeGranularity"));

    m_periodTimeGranularityHasBeenSet = true;
  }

  return *this;
}

JsonValue PeriodToDateComputation::Jsonize() const
{
  JsonValue payload;

  if(m_computationIdHasBeenSet)
  {
   payload.WithString("ComputationId", m_computationId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_timeHasBeenSet)
  {
   payload.WithObject("Time", m_time.Jsonize());

  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  if(m_periodTimeGranularityHasBeenSet)
  {
   payload.WithString("PeriodTimeGranularity", TimeGranularityMapper::GetNameForTimeGranularity(m_periodTimeGranularity));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
