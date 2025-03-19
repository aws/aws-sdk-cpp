/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/LinkedWhatsAppBusinessAccountIdMetaData.h>
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

LinkedWhatsAppBusinessAccountIdMetaData::LinkedWhatsAppBusinessAccountIdMetaData(JsonView jsonValue)
{
  *this = jsonValue;
}

LinkedWhatsAppBusinessAccountIdMetaData& LinkedWhatsAppBusinessAccountIdMetaData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountName"))
  {
    m_accountName = jsonValue.GetString("accountName");
    m_accountNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("registrationStatus"))
  {
    m_registrationStatus = RegistrationStatusMapper::GetRegistrationStatusForName(jsonValue.GetString("registrationStatus"));
    m_registrationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unregisteredWhatsAppPhoneNumbers"))
  {
    Aws::Utils::Array<JsonView> unregisteredWhatsAppPhoneNumbersJsonList = jsonValue.GetArray("unregisteredWhatsAppPhoneNumbers");
    for(unsigned unregisteredWhatsAppPhoneNumbersIndex = 0; unregisteredWhatsAppPhoneNumbersIndex < unregisteredWhatsAppPhoneNumbersJsonList.GetLength(); ++unregisteredWhatsAppPhoneNumbersIndex)
    {
      m_unregisteredWhatsAppPhoneNumbers.push_back(unregisteredWhatsAppPhoneNumbersJsonList[unregisteredWhatsAppPhoneNumbersIndex].AsObject());
    }
    m_unregisteredWhatsAppPhoneNumbersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("wabaId"))
  {
    m_wabaId = jsonValue.GetString("wabaId");
    m_wabaIdHasBeenSet = true;
  }
  return *this;
}

JsonValue LinkedWhatsAppBusinessAccountIdMetaData::Jsonize() const
{
  JsonValue payload;

  if(m_accountNameHasBeenSet)
  {
   payload.WithString("accountName", m_accountName);

  }

  if(m_registrationStatusHasBeenSet)
  {
   payload.WithString("registrationStatus", RegistrationStatusMapper::GetNameForRegistrationStatus(m_registrationStatus));
  }

  if(m_unregisteredWhatsAppPhoneNumbersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> unregisteredWhatsAppPhoneNumbersJsonList(m_unregisteredWhatsAppPhoneNumbers.size());
   for(unsigned unregisteredWhatsAppPhoneNumbersIndex = 0; unregisteredWhatsAppPhoneNumbersIndex < unregisteredWhatsAppPhoneNumbersJsonList.GetLength(); ++unregisteredWhatsAppPhoneNumbersIndex)
   {
     unregisteredWhatsAppPhoneNumbersJsonList[unregisteredWhatsAppPhoneNumbersIndex].AsObject(m_unregisteredWhatsAppPhoneNumbers[unregisteredWhatsAppPhoneNumbersIndex].Jsonize());
   }
   payload.WithArray("unregisteredWhatsAppPhoneNumbers", std::move(unregisteredWhatsAppPhoneNumbersJsonList));

  }

  if(m_wabaIdHasBeenSet)
  {
   payload.WithString("wabaId", m_wabaId);

  }

  return payload;
}

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
