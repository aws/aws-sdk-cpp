/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/WorkloadInsightsTopContributorsDataPoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFlowMonitor
{
namespace Model
{

WorkloadInsightsTopContributorsDataPoint::WorkloadInsightsTopContributorsDataPoint(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkloadInsightsTopContributorsDataPoint& WorkloadInsightsTopContributorsDataPoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timestamps"))
  {
    Aws::Utils::Array<JsonView> timestampsJsonList = jsonValue.GetArray("timestamps");
    for(unsigned timestampsIndex = 0; timestampsIndex < timestampsJsonList.GetLength(); ++timestampsIndex)
    {
      m_timestamps.push_back(Aws::Utils::DateTime{timestampsJsonList[timestampsIndex].AsString(), Aws::Utils::DateFormat::ISO_8601});
    }
    m_timestampsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsDouble());
    }
    m_valuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("label"))
  {
    m_label = jsonValue.GetString("label");
    m_labelHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkloadInsightsTopContributorsDataPoint::Jsonize() const
{
  JsonValue payload;

  if(m_timestampsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> timestampsJsonList(m_timestamps.size());
   for(unsigned timestampsIndex = 0; timestampsIndex < timestampsJsonList.GetLength(); ++timestampsIndex)
   {
     timestampsJsonList[timestampsIndex].AsString(m_timestamps[timestampsIndex].ToGmtString(Aws::Utils::DateFormat::ISO_8601));
   }
   payload.WithArray("timestamps", std::move(timestampsJsonList));

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsDouble(m_values[valuesIndex]);
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("label", m_label);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
