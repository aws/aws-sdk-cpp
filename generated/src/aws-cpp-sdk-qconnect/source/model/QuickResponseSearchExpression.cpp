/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/QuickResponseSearchExpression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

QuickResponseSearchExpression::QuickResponseSearchExpression() : 
    m_filtersHasBeenSet(false),
    m_orderOnFieldHasBeenSet(false),
    m_queriesHasBeenSet(false)
{
}

QuickResponseSearchExpression::QuickResponseSearchExpression(JsonView jsonValue) : 
    m_filtersHasBeenSet(false),
    m_orderOnFieldHasBeenSet(false),
    m_queriesHasBeenSet(false)
{
  *this = jsonValue;
}

QuickResponseSearchExpression& QuickResponseSearchExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filters"))
  {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("orderOnField"))
  {
    m_orderOnField = jsonValue.GetObject("orderOnField");

    m_orderOnFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queries"))
  {
    Aws::Utils::Array<JsonView> queriesJsonList = jsonValue.GetArray("queries");
    for(unsigned queriesIndex = 0; queriesIndex < queriesJsonList.GetLength(); ++queriesIndex)
    {
      m_queries.push_back(queriesJsonList[queriesIndex].AsObject());
    }
    m_queriesHasBeenSet = true;
  }

  return *this;
}

JsonValue QuickResponseSearchExpression::Jsonize() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  if(m_orderOnFieldHasBeenSet)
  {
   payload.WithObject("orderOnField", m_orderOnField.Jsonize());

  }

  if(m_queriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queriesJsonList(m_queries.size());
   for(unsigned queriesIndex = 0; queriesIndex < queriesJsonList.GetLength(); ++queriesIndex)
   {
     queriesJsonList[queriesIndex].AsObject(m_queries[queriesIndex].Jsonize());
   }
   payload.WithArray("queries", std::move(queriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
