/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/WabaPhoneNumberSetupFinalization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SocialMessaging
{
namespace Model
{

WabaPhoneNumberSetupFinalization::WabaPhoneNumberSetupFinalization(JsonView jsonValue)
{
  *this = jsonValue;
}

WabaPhoneNumberSetupFinalization& WabaPhoneNumberSetupFinalization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("twoFactorPin"))
  {
    m_twoFactorPin = jsonValue.GetString("twoFactorPin");
    m_twoFactorPinHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataLocalizationRegion"))
  {
    m_dataLocalizationRegion = jsonValue.GetString("dataLocalizationRegion");
    m_dataLocalizationRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue WabaPhoneNumberSetupFinalization::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_twoFactorPinHasBeenSet)
  {
   payload.WithString("twoFactorPin", m_twoFactorPin);

  }

  if(m_dataLocalizationRegionHasBeenSet)
  {
   payload.WithString("dataLocalizationRegion", m_dataLocalizationRegion);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
