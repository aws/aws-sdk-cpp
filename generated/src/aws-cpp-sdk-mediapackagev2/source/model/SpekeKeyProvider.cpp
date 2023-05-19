/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/SpekeKeyProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

SpekeKeyProvider::SpekeKeyProvider() : 
    m_encryptionContractConfigurationHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_drmSystemsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

SpekeKeyProvider::SpekeKeyProvider(JsonView jsonValue) : 
    m_encryptionContractConfigurationHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_drmSystemsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

SpekeKeyProvider& SpekeKeyProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EncryptionContractConfiguration"))
  {
    m_encryptionContractConfiguration = jsonValue.GetObject("EncryptionContractConfiguration");

    m_encryptionContractConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DrmSystems"))
  {
    Aws::Utils::Array<JsonView> drmSystemsJsonList = jsonValue.GetArray("DrmSystems");
    for(unsigned drmSystemsIndex = 0; drmSystemsIndex < drmSystemsJsonList.GetLength(); ++drmSystemsIndex)
    {
      m_drmSystems.push_back(DrmSystemMapper::GetDrmSystemForName(drmSystemsJsonList[drmSystemsIndex].AsString()));
    }
    m_drmSystemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue SpekeKeyProvider::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionContractConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionContractConfiguration", m_encryptionContractConfiguration.Jsonize());

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_drmSystemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> drmSystemsJsonList(m_drmSystems.size());
   for(unsigned drmSystemsIndex = 0; drmSystemsIndex < drmSystemsJsonList.GetLength(); ++drmSystemsIndex)
   {
     drmSystemsJsonList[drmSystemsIndex].AsString(DrmSystemMapper::GetNameForDrmSystem(m_drmSystems[drmSystemsIndex]));
   }
   payload.WithArray("DrmSystems", std::move(drmSystemsJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
