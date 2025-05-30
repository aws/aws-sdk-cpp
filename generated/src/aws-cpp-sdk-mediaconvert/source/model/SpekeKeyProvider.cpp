﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/SpekeKeyProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

SpekeKeyProvider::SpekeKeyProvider(JsonView jsonValue)
{
  *this = jsonValue;
}

SpekeKeyProvider& SpekeKeyProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");
    m_certificateArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionContractConfiguration"))
  {
    m_encryptionContractConfiguration = jsonValue.GetObject("encryptionContractConfiguration");
    m_encryptionContractConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("systemIds"))
  {
    Aws::Utils::Array<JsonView> systemIdsJsonList = jsonValue.GetArray("systemIds");
    for(unsigned systemIdsIndex = 0; systemIdsIndex < systemIdsJsonList.GetLength(); ++systemIdsIndex)
    {
      m_systemIds.push_back(systemIdsJsonList[systemIdsIndex].AsString());
    }
    m_systemIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  return *this;
}

JsonValue SpekeKeyProvider::Jsonize() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  if(m_encryptionContractConfigurationHasBeenSet)
  {
   payload.WithObject("encryptionContractConfiguration", m_encryptionContractConfiguration.Jsonize());

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_systemIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> systemIdsJsonList(m_systemIds.size());
   for(unsigned systemIdsIndex = 0; systemIdsIndex < systemIdsJsonList.GetLength(); ++systemIdsIndex)
   {
     systemIdsJsonList[systemIdsIndex].AsString(m_systemIds[systemIdsIndex]);
   }
   payload.WithArray("systemIds", std::move(systemIdsJsonList));

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
