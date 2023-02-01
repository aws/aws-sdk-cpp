/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ListServiceInstancesFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

ListServiceInstancesFilter::ListServiceInstancesFilter() : 
    m_key(ListServiceInstancesFilterBy::NOT_SET),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

ListServiceInstancesFilter::ListServiceInstancesFilter(JsonView jsonValue) : 
    m_key(ListServiceInstancesFilterBy::NOT_SET),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ListServiceInstancesFilter& ListServiceInstancesFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = ListServiceInstancesFilterByMapper::GetListServiceInstancesFilterByForName(jsonValue.GetString("key"));

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ListServiceInstancesFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", ListServiceInstancesFilterByMapper::GetNameForListServiceInstancesFilterBy(m_key));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
