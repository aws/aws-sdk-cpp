/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/LinkedWhatsAppBusinessAccount.h>
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

LinkedWhatsAppBusinessAccount::LinkedWhatsAppBusinessAccount(JsonView jsonValue)
{
  *this = jsonValue;
}

LinkedWhatsAppBusinessAccount& LinkedWhatsAppBusinessAccount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("wabaId"))
  {
    m_wabaId = jsonValue.GetString("wabaId");
    m_wabaIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("registrationStatus"))
  {
    m_registrationStatus = RegistrationStatusMapper::GetRegistrationStatusForName(jsonValue.GetString("registrationStatus"));
    m_registrationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("linkDate"))
  {
    m_linkDate = jsonValue.GetDouble("linkDate");
    m_linkDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("wabaName"))
  {
    m_wabaName = jsonValue.GetString("wabaName");
    m_wabaNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventDestinations"))
  {
    Aws::Utils::Array<JsonView> eventDestinationsJsonList = jsonValue.GetArray("eventDestinations");
    for(unsigned eventDestinationsIndex = 0; eventDestinationsIndex < eventDestinationsJsonList.GetLength(); ++eventDestinationsIndex)
    {
      m_eventDestinations.push_back(eventDestinationsJsonList[eventDestinationsIndex].AsObject());
    }
    m_eventDestinationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("phoneNumbers"))
  {
    Aws::Utils::Array<JsonView> phoneNumbersJsonList = jsonValue.GetArray("phoneNumbers");
    for(unsigned phoneNumbersIndex = 0; phoneNumbersIndex < phoneNumbersJsonList.GetLength(); ++phoneNumbersIndex)
    {
      m_phoneNumbers.push_back(phoneNumbersJsonList[phoneNumbersIndex].AsObject());
    }
    m_phoneNumbersHasBeenSet = true;
  }
  return *this;
}

JsonValue LinkedWhatsAppBusinessAccount::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_wabaIdHasBeenSet)
  {
   payload.WithString("wabaId", m_wabaId);

  }

  if(m_registrationStatusHasBeenSet)
  {
   payload.WithString("registrationStatus", RegistrationStatusMapper::GetNameForRegistrationStatus(m_registrationStatus));
  }

  if(m_linkDateHasBeenSet)
  {
   payload.WithDouble("linkDate", m_linkDate.SecondsWithMSPrecision());
  }

  if(m_wabaNameHasBeenSet)
  {
   payload.WithString("wabaName", m_wabaName);

  }

  if(m_eventDestinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventDestinationsJsonList(m_eventDestinations.size());
   for(unsigned eventDestinationsIndex = 0; eventDestinationsIndex < eventDestinationsJsonList.GetLength(); ++eventDestinationsIndex)
   {
     eventDestinationsJsonList[eventDestinationsIndex].AsObject(m_eventDestinations[eventDestinationsIndex].Jsonize());
   }
   payload.WithArray("eventDestinations", std::move(eventDestinationsJsonList));

  }

  if(m_phoneNumbersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> phoneNumbersJsonList(m_phoneNumbers.size());
   for(unsigned phoneNumbersIndex = 0; phoneNumbersIndex < phoneNumbersJsonList.GetLength(); ++phoneNumbersIndex)
   {
     phoneNumbersJsonList[phoneNumbersIndex].AsObject(m_phoneNumbers[phoneNumbersIndex].Jsonize());
   }
   payload.WithArray("phoneNumbers", std::move(phoneNumbersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
