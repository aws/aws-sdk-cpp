﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InstancePropertyFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InstancePropertyFilter::InstancePropertyFilter() : 
    m_key(InstancePropertyFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valueSetHasBeenSet(false)
{
}

InstancePropertyFilter::InstancePropertyFilter(JsonView jsonValue)
  : InstancePropertyFilter()
{
  *this = jsonValue;
}

InstancePropertyFilter& InstancePropertyFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = InstancePropertyFilterKeyMapper::GetInstancePropertyFilterKeyForName(jsonValue.GetString("key"));

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("valueSet"))
  {
    Aws::Utils::Array<JsonView> valueSetJsonList = jsonValue.GetArray("valueSet");
    for(unsigned valueSetIndex = 0; valueSetIndex < valueSetJsonList.GetLength(); ++valueSetIndex)
    {
      m_valueSet.push_back(valueSetJsonList[valueSetIndex].AsString());
    }
    m_valueSetHasBeenSet = true;
  }

  return *this;
}

JsonValue InstancePropertyFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", InstancePropertyFilterKeyMapper::GetNameForInstancePropertyFilterKey(m_key));
  }

  if(m_valueSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valueSetJsonList(m_valueSet.size());
   for(unsigned valueSetIndex = 0; valueSetIndex < valueSetJsonList.GetLength(); ++valueSetIndex)
   {
     valueSetJsonList[valueSetIndex].AsString(m_valueSet[valueSetIndex]);
   }
   payload.WithArray("valueSet", std::move(valueSetJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
