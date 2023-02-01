/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/InsightResults.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

InsightResults::InsightResults() : 
    m_insightArnHasBeenSet(false),
    m_groupByAttributeHasBeenSet(false),
    m_resultValuesHasBeenSet(false)
{
}

InsightResults::InsightResults(JsonView jsonValue) : 
    m_insightArnHasBeenSet(false),
    m_groupByAttributeHasBeenSet(false),
    m_resultValuesHasBeenSet(false)
{
  *this = jsonValue;
}

InsightResults& InsightResults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InsightArn"))
  {
    m_insightArn = jsonValue.GetString("InsightArn");

    m_insightArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupByAttribute"))
  {
    m_groupByAttribute = jsonValue.GetString("GroupByAttribute");

    m_groupByAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultValues"))
  {
    Aws::Utils::Array<JsonView> resultValuesJsonList = jsonValue.GetArray("ResultValues");
    for(unsigned resultValuesIndex = 0; resultValuesIndex < resultValuesJsonList.GetLength(); ++resultValuesIndex)
    {
      m_resultValues.push_back(resultValuesJsonList[resultValuesIndex].AsObject());
    }
    m_resultValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightResults::Jsonize() const
{
  JsonValue payload;

  if(m_insightArnHasBeenSet)
  {
   payload.WithString("InsightArn", m_insightArn);

  }

  if(m_groupByAttributeHasBeenSet)
  {
   payload.WithString("GroupByAttribute", m_groupByAttribute);

  }

  if(m_resultValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resultValuesJsonList(m_resultValues.size());
   for(unsigned resultValuesIndex = 0; resultValuesIndex < resultValuesJsonList.GetLength(); ++resultValuesIndex)
   {
     resultValuesJsonList[resultValuesIndex].AsObject(m_resultValues[resultValuesIndex].Jsonize());
   }
   payload.WithArray("ResultValues", std::move(resultValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
