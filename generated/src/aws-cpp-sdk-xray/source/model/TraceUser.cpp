/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/TraceUser.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

TraceUser::TraceUser() : 
    m_userNameHasBeenSet(false),
    m_serviceIdsHasBeenSet(false)
{
}

TraceUser::TraceUser(JsonView jsonValue) : 
    m_userNameHasBeenSet(false),
    m_serviceIdsHasBeenSet(false)
{
  *this = jsonValue;
}

TraceUser& TraceUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceIds"))
  {
    Aws::Utils::Array<JsonView> serviceIdsJsonList = jsonValue.GetArray("ServiceIds");
    for(unsigned serviceIdsIndex = 0; serviceIdsIndex < serviceIdsJsonList.GetLength(); ++serviceIdsIndex)
    {
      m_serviceIds.push_back(serviceIdsJsonList[serviceIdsIndex].AsObject());
    }
    m_serviceIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue TraceUser::Jsonize() const
{
  JsonValue payload;

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_serviceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceIdsJsonList(m_serviceIds.size());
   for(unsigned serviceIdsIndex = 0; serviceIdsIndex < serviceIdsJsonList.GetLength(); ++serviceIdsIndex)
   {
     serviceIdsJsonList[serviceIdsIndex].AsObject(m_serviceIds[serviceIdsIndex].Jsonize());
   }
   payload.WithArray("ServiceIds", std::move(serviceIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
