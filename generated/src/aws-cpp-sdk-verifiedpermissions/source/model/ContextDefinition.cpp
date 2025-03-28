﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/ContextDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

ContextDefinition::ContextDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

ContextDefinition& ContextDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("contextMap"))
  {
    Aws::Map<Aws::String, JsonView> contextMapJsonMap = jsonValue.GetObject("contextMap").GetAllObjects();
    for(auto& contextMapItem : contextMapJsonMap)
    {
      m_contextMap[contextMapItem.first] = contextMapItem.second.AsObject();
    }
    m_contextMapHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cedarJson"))
  {
    m_cedarJson = jsonValue.GetString("cedarJson");
    m_cedarJsonHasBeenSet = true;
  }
  return *this;
}

JsonValue ContextDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_contextMapHasBeenSet)
  {
   JsonValue contextMapJsonMap;
   for(auto& contextMapItem : m_contextMap)
   {
     contextMapJsonMap.WithObject(contextMapItem.first, contextMapItem.second.Jsonize());
   }
   payload.WithObject("contextMap", std::move(contextMapJsonMap));

  }

  if(m_cedarJsonHasBeenSet)
  {
   payload.WithString("cedarJson", m_cedarJson);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
