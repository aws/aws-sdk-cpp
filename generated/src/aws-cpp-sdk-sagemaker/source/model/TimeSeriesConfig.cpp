/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TimeSeriesConfig.h>
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

TimeSeriesConfig::TimeSeriesConfig() : 
    m_targetAttributeNameHasBeenSet(false),
    m_timestampAttributeNameHasBeenSet(false),
    m_itemIdentifierAttributeNameHasBeenSet(false),
    m_groupingAttributeNamesHasBeenSet(false)
{
}

TimeSeriesConfig::TimeSeriesConfig(JsonView jsonValue) : 
    m_targetAttributeNameHasBeenSet(false),
    m_timestampAttributeNameHasBeenSet(false),
    m_itemIdentifierAttributeNameHasBeenSet(false),
    m_groupingAttributeNamesHasBeenSet(false)
{
  *this = jsonValue;
}

TimeSeriesConfig& TimeSeriesConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetAttributeName"))
  {
    m_targetAttributeName = jsonValue.GetString("TargetAttributeName");

    m_targetAttributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimestampAttributeName"))
  {
    m_timestampAttributeName = jsonValue.GetString("TimestampAttributeName");

    m_timestampAttributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ItemIdentifierAttributeName"))
  {
    m_itemIdentifierAttributeName = jsonValue.GetString("ItemIdentifierAttributeName");

    m_itemIdentifierAttributeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupingAttributeNames"))
  {
    Aws::Utils::Array<JsonView> groupingAttributeNamesJsonList = jsonValue.GetArray("GroupingAttributeNames");
    for(unsigned groupingAttributeNamesIndex = 0; groupingAttributeNamesIndex < groupingAttributeNamesJsonList.GetLength(); ++groupingAttributeNamesIndex)
    {
      m_groupingAttributeNames.push_back(groupingAttributeNamesJsonList[groupingAttributeNamesIndex].AsString());
    }
    m_groupingAttributeNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeSeriesConfig::Jsonize() const
{
  JsonValue payload;

  if(m_targetAttributeNameHasBeenSet)
  {
   payload.WithString("TargetAttributeName", m_targetAttributeName);

  }

  if(m_timestampAttributeNameHasBeenSet)
  {
   payload.WithString("TimestampAttributeName", m_timestampAttributeName);

  }

  if(m_itemIdentifierAttributeNameHasBeenSet)
  {
   payload.WithString("ItemIdentifierAttributeName", m_itemIdentifierAttributeName);

  }

  if(m_groupingAttributeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupingAttributeNamesJsonList(m_groupingAttributeNames.size());
   for(unsigned groupingAttributeNamesIndex = 0; groupingAttributeNamesIndex < groupingAttributeNamesJsonList.GetLength(); ++groupingAttributeNamesIndex)
   {
     groupingAttributeNamesJsonList[groupingAttributeNamesIndex].AsString(m_groupingAttributeNames[groupingAttributeNamesIndex]);
   }
   payload.WithArray("GroupingAttributeNames", std::move(groupingAttributeNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
