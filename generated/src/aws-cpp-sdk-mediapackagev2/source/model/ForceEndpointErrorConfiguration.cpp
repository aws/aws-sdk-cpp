/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/ForceEndpointErrorConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

ForceEndpointErrorConfiguration::ForceEndpointErrorConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ForceEndpointErrorConfiguration& ForceEndpointErrorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointErrorConditions"))
  {
    Aws::Utils::Array<JsonView> endpointErrorConditionsJsonList = jsonValue.GetArray("EndpointErrorConditions");
    for(unsigned endpointErrorConditionsIndex = 0; endpointErrorConditionsIndex < endpointErrorConditionsJsonList.GetLength(); ++endpointErrorConditionsIndex)
    {
      m_endpointErrorConditions.push_back(EndpointErrorConditionMapper::GetEndpointErrorConditionForName(endpointErrorConditionsJsonList[endpointErrorConditionsIndex].AsString()));
    }
    m_endpointErrorConditionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ForceEndpointErrorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_endpointErrorConditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointErrorConditionsJsonList(m_endpointErrorConditions.size());
   for(unsigned endpointErrorConditionsIndex = 0; endpointErrorConditionsIndex < endpointErrorConditionsJsonList.GetLength(); ++endpointErrorConditionsIndex)
   {
     endpointErrorConditionsJsonList[endpointErrorConditionsIndex].AsString(EndpointErrorConditionMapper::GetNameForEndpointErrorCondition(m_endpointErrorConditions[endpointErrorConditionsIndex]));
   }
   payload.WithArray("EndpointErrorConditions", std::move(endpointErrorConditionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
