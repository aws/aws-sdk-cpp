/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InstanceInformationFilter.h>
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

InstanceInformationFilter::InstanceInformationFilter() : 
    m_key(InstanceInformationFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valueSetHasBeenSet(false)
{
}

InstanceInformationFilter::InstanceInformationFilter(JsonView jsonValue) : 
    m_key(InstanceInformationFilterKey::NOT_SET),
    m_keyHasBeenSet(false),
    m_valueSetHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceInformationFilter& InstanceInformationFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = InstanceInformationFilterKeyMapper::GetInstanceInformationFilterKeyForName(jsonValue.GetString("key"));

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

JsonValue InstanceInformationFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", InstanceInformationFilterKeyMapper::GetNameForInstanceInformationFilterKey(m_key));
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
