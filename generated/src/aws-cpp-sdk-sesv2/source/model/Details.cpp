/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/Details.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

Details::Details(JsonView jsonValue)
{
  *this = jsonValue;
}

Details& Details::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoutesDetails"))
  {
    Aws::Utils::Array<JsonView> routesDetailsJsonList = jsonValue.GetArray("RoutesDetails");
    for(unsigned routesDetailsIndex = 0; routesDetailsIndex < routesDetailsJsonList.GetLength(); ++routesDetailsIndex)
    {
      m_routesDetails.push_back(routesDetailsJsonList[routesDetailsIndex].AsObject());
    }
    m_routesDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue Details::Jsonize() const
{
  JsonValue payload;

  if(m_routesDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routesDetailsJsonList(m_routesDetails.size());
   for(unsigned routesDetailsIndex = 0; routesDetailsIndex < routesDetailsJsonList.GetLength(); ++routesDetailsIndex)
   {
     routesDetailsJsonList[routesDetailsIndex].AsObject(m_routesDetails[routesDetailsIndex].Jsonize());
   }
   payload.WithArray("RoutesDetails", std::move(routesDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
