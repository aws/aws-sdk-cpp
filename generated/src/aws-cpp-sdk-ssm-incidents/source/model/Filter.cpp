/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/Filter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

Filter::Filter() : 
    m_conditionHasBeenSet(false),
    m_keyHasBeenSet(false)
{
}

Filter::Filter(JsonView jsonValue) : 
    m_conditionHasBeenSet(false),
    m_keyHasBeenSet(false)
{
  *this = jsonValue;
}

Filter& Filter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("condition"))
  {
    m_condition = jsonValue.GetObject("condition");

    m_conditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  return *this;
}

JsonValue Filter::Jsonize() const
{
  JsonValue payload;

  if(m_conditionHasBeenSet)
  {
   payload.WithObject("condition", m_condition.Jsonize());

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
