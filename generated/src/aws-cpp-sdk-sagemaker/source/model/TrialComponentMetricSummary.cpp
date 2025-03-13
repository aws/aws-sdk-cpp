/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrialComponentMetricSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

TrialComponentMetricSummary::TrialComponentMetricSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

TrialComponentMetricSummary& TrialComponentMetricSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");
    m_metricNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");
    m_sourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeStamp"))
  {
    m_timeStamp = jsonValue.GetDouble("TimeStamp");
    m_timeStampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetDouble("Max");
    m_maxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Min"))
  {
    m_min = jsonValue.GetDouble("Min");
    m_minHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Last"))
  {
    m_last = jsonValue.GetDouble("Last");
    m_lastHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");
    m_countHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Avg"))
  {
    m_avg = jsonValue.GetDouble("Avg");
    m_avgHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StdDev"))
  {
    m_stdDev = jsonValue.GetDouble("StdDev");
    m_stdDevHasBeenSet = true;
  }
  return *this;
}

JsonValue TrialComponentMetricSummary::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_timeStampHasBeenSet)
  {
   payload.WithDouble("TimeStamp", m_timeStamp.SecondsWithMSPrecision());
  }

  if(m_maxHasBeenSet)
  {
   payload.WithDouble("Max", m_max);

  }

  if(m_minHasBeenSet)
  {
   payload.WithDouble("Min", m_min);

  }

  if(m_lastHasBeenSet)
  {
   payload.WithDouble("Last", m_last);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  if(m_avgHasBeenSet)
  {
   payload.WithDouble("Avg", m_avg);

  }

  if(m_stdDevHasBeenSet)
  {
   payload.WithDouble("StdDev", m_stdDev);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
