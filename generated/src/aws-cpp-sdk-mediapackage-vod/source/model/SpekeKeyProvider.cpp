/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/SpekeKeyProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

SpekeKeyProvider::SpekeKeyProvider() : 
    m_encryptionContractConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_systemIdsHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

SpekeKeyProvider::SpekeKeyProvider(JsonView jsonValue) : 
    m_encryptionContractConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_systemIdsHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

SpekeKeyProvider& SpekeKeyProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryptionContractConfiguration"))
  {
    m_encryptionContractConfiguration = jsonValue.GetObject("encryptionContractConfiguration");

    m_encryptionContractConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
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

  if(m_encryptionContractConfigurationHasBeenSet)
  {
   payload.WithObject("encryptionContractConfiguration", m_encryptionContractConfiguration.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

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
} // namespace MediaPackageVod
} // namespace Aws
