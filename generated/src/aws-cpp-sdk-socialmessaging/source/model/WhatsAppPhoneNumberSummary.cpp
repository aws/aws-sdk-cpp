/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/WhatsAppPhoneNumberSummary.h>
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

WhatsAppPhoneNumberSummary::WhatsAppPhoneNumberSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

WhatsAppPhoneNumberSummary& WhatsAppPhoneNumberSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("phoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("phoneNumber");
    m_phoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("phoneNumberId"))
  {
    m_phoneNumberId = jsonValue.GetString("phoneNumberId");
    m_phoneNumberIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metaPhoneNumberId"))
  {
    m_metaPhoneNumberId = jsonValue.GetString("metaPhoneNumberId");
    m_metaPhoneNumberIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayPhoneNumberName"))
  {
    m_displayPhoneNumberName = jsonValue.GetString("displayPhoneNumberName");
    m_displayPhoneNumberNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayPhoneNumber"))
  {
    m_displayPhoneNumber = jsonValue.GetString("displayPhoneNumber");
    m_displayPhoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("qualityRating"))
  {
    m_qualityRating = jsonValue.GetString("qualityRating");
    m_qualityRatingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataLocalizationRegion"))
  {
    m_dataLocalizationRegion = jsonValue.GetString("dataLocalizationRegion");
    m_dataLocalizationRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue WhatsAppPhoneNumberSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("phoneNumber", m_phoneNumber);

  }

  if(m_phoneNumberIdHasBeenSet)
  {
   payload.WithString("phoneNumberId", m_phoneNumberId);

  }

  if(m_metaPhoneNumberIdHasBeenSet)
  {
   payload.WithString("metaPhoneNumberId", m_metaPhoneNumberId);

  }

  if(m_displayPhoneNumberNameHasBeenSet)
  {
   payload.WithString("displayPhoneNumberName", m_displayPhoneNumberName);

  }

  if(m_displayPhoneNumberHasBeenSet)
  {
   payload.WithString("displayPhoneNumber", m_displayPhoneNumber);

  }

  if(m_qualityRatingHasBeenSet)
  {
   payload.WithString("qualityRating", m_qualityRating);

  }

  if(m_dataLocalizationRegionHasBeenSet)
  {
   payload.WithString("dataLocalizationRegion", m_dataLocalizationRegion);

  }

  return payload;
}

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
