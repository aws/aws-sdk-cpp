﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/BrokerEngineType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

BrokerEngineType::BrokerEngineType(JsonView jsonValue)
{
  *this = jsonValue;
}

BrokerEngineType& BrokerEngineType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("engineType"))
  {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));
    m_engineTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("engineVersions"))
  {
    Aws::Utils::Array<JsonView> engineVersionsJsonList = jsonValue.GetArray("engineVersions");
    for(unsigned engineVersionsIndex = 0; engineVersionsIndex < engineVersionsJsonList.GetLength(); ++engineVersionsIndex)
    {
      m_engineVersions.push_back(engineVersionsJsonList[engineVersionsIndex].AsObject());
    }
    m_engineVersionsHasBeenSet = true;
  }
  return *this;
}

JsonValue BrokerEngineType::Jsonize() const
{
  JsonValue payload;

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("engineType", EngineTypeMapper::GetNameForEngineType(m_engineType));
  }

  if(m_engineVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> engineVersionsJsonList(m_engineVersions.size());
   for(unsigned engineVersionsIndex = 0; engineVersionsIndex < engineVersionsJsonList.GetLength(); ++engineVersionsIndex)
   {
     engineVersionsJsonList[engineVersionsIndex].AsObject(m_engineVersions[engineVersionsIndex].Jsonize());
   }
   payload.WithArray("engineVersions", std::move(engineVersionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
