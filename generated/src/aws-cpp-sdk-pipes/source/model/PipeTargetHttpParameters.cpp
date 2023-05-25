/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeTargetHttpParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeTargetHttpParameters::PipeTargetHttpParameters() : 
    m_headerParametersHasBeenSet(false),
    m_pathParameterValuesHasBeenSet(false),
    m_queryStringParametersHasBeenSet(false)
{
}

PipeTargetHttpParameters::PipeTargetHttpParameters(JsonView jsonValue) : 
    m_headerParametersHasBeenSet(false),
    m_pathParameterValuesHasBeenSet(false),
    m_queryStringParametersHasBeenSet(false)
{
  *this = jsonValue;
}

PipeTargetHttpParameters& PipeTargetHttpParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HeaderParameters"))
  {
    Aws::Map<Aws::String, JsonView> headerParametersJsonMap = jsonValue.GetObject("HeaderParameters").GetAllObjects();
    for(auto& headerParametersItem : headerParametersJsonMap)
    {
      m_headerParameters[headerParametersItem.first] = headerParametersItem.second.AsString();
    }
    m_headerParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PathParameterValues"))
  {
    Aws::Utils::Array<JsonView> pathParameterValuesJsonList = jsonValue.GetArray("PathParameterValues");
    for(unsigned pathParameterValuesIndex = 0; pathParameterValuesIndex < pathParameterValuesJsonList.GetLength(); ++pathParameterValuesIndex)
    {
      m_pathParameterValues.push_back(pathParameterValuesJsonList[pathParameterValuesIndex].AsString());
    }
    m_pathParameterValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryStringParameters"))
  {
    Aws::Map<Aws::String, JsonView> queryStringParametersJsonMap = jsonValue.GetObject("QueryStringParameters").GetAllObjects();
    for(auto& queryStringParametersItem : queryStringParametersJsonMap)
    {
      m_queryStringParameters[queryStringParametersItem.first] = queryStringParametersItem.second.AsString();
    }
    m_queryStringParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeTargetHttpParameters::Jsonize() const
{
  JsonValue payload;

  if(m_headerParametersHasBeenSet)
  {
   JsonValue headerParametersJsonMap;
   for(auto& headerParametersItem : m_headerParameters)
   {
     headerParametersJsonMap.WithString(headerParametersItem.first, headerParametersItem.second);
   }
   payload.WithObject("HeaderParameters", std::move(headerParametersJsonMap));

  }

  if(m_pathParameterValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pathParameterValuesJsonList(m_pathParameterValues.size());
   for(unsigned pathParameterValuesIndex = 0; pathParameterValuesIndex < pathParameterValuesJsonList.GetLength(); ++pathParameterValuesIndex)
   {
     pathParameterValuesJsonList[pathParameterValuesIndex].AsString(m_pathParameterValues[pathParameterValuesIndex]);
   }
   payload.WithArray("PathParameterValues", std::move(pathParameterValuesJsonList));

  }

  if(m_queryStringParametersHasBeenSet)
  {
   JsonValue queryStringParametersJsonMap;
   for(auto& queryStringParametersItem : m_queryStringParameters)
   {
     queryStringParametersJsonMap.WithString(queryStringParametersItem.first, queryStringParametersItem.second);
   }
   payload.WithObject("QueryStringParameters", std::move(queryStringParametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
