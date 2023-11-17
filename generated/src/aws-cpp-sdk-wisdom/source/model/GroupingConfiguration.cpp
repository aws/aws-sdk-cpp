/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/GroupingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

GroupingConfiguration::GroupingConfiguration() : 
    m_criteriaHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

GroupingConfiguration::GroupingConfiguration(JsonView jsonValue) : 
    m_criteriaHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

GroupingConfiguration& GroupingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("criteria"))
  {
    m_criteria = jsonValue.GetString("criteria");

    m_criteriaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_criteriaHasBeenSet)
  {
   payload.WithString("criteria", m_criteria);

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
