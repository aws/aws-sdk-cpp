/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/SummarizationDimensionOverview.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Notifications
{
namespace Model
{

SummarizationDimensionOverview::SummarizationDimensionOverview(JsonView jsonValue)
{
  *this = jsonValue;
}

SummarizationDimensionOverview& SummarizationDimensionOverview::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");
    m_countHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sampleValues"))
  {
    Aws::Utils::Array<JsonView> sampleValuesJsonList = jsonValue.GetArray("sampleValues");
    for(unsigned sampleValuesIndex = 0; sampleValuesIndex < sampleValuesJsonList.GetLength(); ++sampleValuesIndex)
    {
      m_sampleValues.push_back(sampleValuesJsonList[sampleValuesIndex].AsString());
    }
    m_sampleValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue SummarizationDimensionOverview::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  if(m_sampleValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sampleValuesJsonList(m_sampleValues.size());
   for(unsigned sampleValuesIndex = 0; sampleValuesIndex < sampleValuesJsonList.GetLength(); ++sampleValuesIndex)
   {
     sampleValuesJsonList[sampleValuesIndex].AsString(m_sampleValues[sampleValuesIndex]);
   }
   payload.WithArray("sampleValues", std::move(sampleValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
