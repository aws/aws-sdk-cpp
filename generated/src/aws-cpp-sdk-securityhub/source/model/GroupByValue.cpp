/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GroupByValue.h>
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

GroupByValue::GroupByValue(JsonView jsonValue)
{
  *this = jsonValue;
}

GroupByValue& GroupByValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldValue"))
  {
    m_fieldValue = jsonValue.GetString("FieldValue");
    m_fieldValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");
    m_countHasBeenSet = true;
  }
  return *this;
}

JsonValue GroupByValue::Jsonize() const
{
  JsonValue payload;

  if(m_fieldValueHasBeenSet)
  {
   payload.WithString("FieldValue", m_fieldValue);

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
