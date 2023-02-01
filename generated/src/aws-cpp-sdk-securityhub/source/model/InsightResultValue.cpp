/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/InsightResultValue.h>
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

InsightResultValue::InsightResultValue() : 
    m_groupByAttributeValueHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

InsightResultValue::InsightResultValue(JsonView jsonValue) : 
    m_groupByAttributeValueHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
  *this = jsonValue;
}

InsightResultValue& InsightResultValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupByAttributeValue"))
  {
    m_groupByAttributeValue = jsonValue.GetString("GroupByAttributeValue");

    m_groupByAttributeValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

    m_countHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightResultValue::Jsonize() const
{
  JsonValue payload;

  if(m_groupByAttributeValueHasBeenSet)
  {
   payload.WithString("GroupByAttributeValue", m_groupByAttributeValue);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("Count", m_count);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
