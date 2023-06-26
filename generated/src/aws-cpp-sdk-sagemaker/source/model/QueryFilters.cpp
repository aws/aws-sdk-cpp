/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/QueryFilters.h>
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

QueryFilters::QueryFilters() : 
    m_typesHasBeenSet(false),
    m_lineageTypesHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_createdAfterHasBeenSet(false),
    m_modifiedBeforeHasBeenSet(false),
    m_modifiedAfterHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

QueryFilters::QueryFilters(JsonView jsonValue) : 
    m_typesHasBeenSet(false),
    m_lineageTypesHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_createdAfterHasBeenSet(false),
    m_modifiedBeforeHasBeenSet(false),
    m_modifiedAfterHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
  *this = jsonValue;
}

QueryFilters& QueryFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Types"))
  {
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("Types");
    for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
    {
      m_types.push_back(typesJsonList[typesIndex].AsString());
    }
    m_typesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineageTypes"))
  {
    Aws::Utils::Array<JsonView> lineageTypesJsonList = jsonValue.GetArray("LineageTypes");
    for(unsigned lineageTypesIndex = 0; lineageTypesIndex < lineageTypesJsonList.GetLength(); ++lineageTypesIndex)
    {
      m_lineageTypes.push_back(LineageTypeMapper::GetLineageTypeForName(lineageTypesJsonList[lineageTypesIndex].AsString()));
    }
    m_lineageTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBefore"))
  {
    m_createdBefore = jsonValue.GetDouble("CreatedBefore");

    m_createdBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAfter"))
  {
    m_createdAfter = jsonValue.GetDouble("CreatedAfter");

    m_createdAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModifiedBefore"))
  {
    m_modifiedBefore = jsonValue.GetDouble("ModifiedBefore");

    m_modifiedBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModifiedAfter"))
  {
    m_modifiedAfter = jsonValue.GetDouble("ModifiedAfter");

    m_modifiedAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Properties"))
  {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("Properties").GetAllObjects();
    for(auto& propertiesItem : propertiesJsonMap)
    {
      m_properties[propertiesItem.first] = propertiesItem.second.AsString();
    }
    m_propertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryFilters::Jsonize() const
{
  JsonValue payload;

  if(m_typesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
   for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
   {
     typesJsonList[typesIndex].AsString(m_types[typesIndex]);
   }
   payload.WithArray("Types", std::move(typesJsonList));

  }

  if(m_lineageTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lineageTypesJsonList(m_lineageTypes.size());
   for(unsigned lineageTypesIndex = 0; lineageTypesIndex < lineageTypesJsonList.GetLength(); ++lineageTypesIndex)
   {
     lineageTypesJsonList[lineageTypesIndex].AsString(LineageTypeMapper::GetNameForLineageType(m_lineageTypes[lineageTypesIndex]));
   }
   payload.WithArray("LineageTypes", std::move(lineageTypesJsonList));

  }

  if(m_createdBeforeHasBeenSet)
  {
   payload.WithDouble("CreatedBefore", m_createdBefore.SecondsWithMSPrecision());
  }

  if(m_createdAfterHasBeenSet)
  {
   payload.WithDouble("CreatedAfter", m_createdAfter.SecondsWithMSPrecision());
  }

  if(m_modifiedBeforeHasBeenSet)
  {
   payload.WithDouble("ModifiedBefore", m_modifiedBefore.SecondsWithMSPrecision());
  }

  if(m_modifiedAfterHasBeenSet)
  {
   payload.WithDouble("ModifiedAfter", m_modifiedAfter.SecondsWithMSPrecision());
  }

  if(m_propertiesHasBeenSet)
  {
   JsonValue propertiesJsonMap;
   for(auto& propertiesItem : m_properties)
   {
     propertiesJsonMap.WithString(propertiesItem.first, propertiesItem.second);
   }
   payload.WithObject("Properties", std::move(propertiesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
