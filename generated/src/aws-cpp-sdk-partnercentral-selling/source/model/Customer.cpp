/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/Customer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

Customer::Customer(JsonView jsonValue)
{
  *this = jsonValue;
}

Customer& Customer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Account"))
  {
    m_account = jsonValue.GetObject("Account");
    m_accountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Contacts"))
  {
    Aws::Utils::Array<JsonView> contactsJsonList = jsonValue.GetArray("Contacts");
    for(unsigned contactsIndex = 0; contactsIndex < contactsJsonList.GetLength(); ++contactsIndex)
    {
      m_contacts.push_back(contactsJsonList[contactsIndex].AsObject());
    }
    m_contactsHasBeenSet = true;
  }
  return *this;
}

JsonValue Customer::Jsonize() const
{
  JsonValue payload;

  if(m_accountHasBeenSet)
  {
   payload.WithObject("Account", m_account.Jsonize());

  }

  if(m_contactsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contactsJsonList(m_contacts.size());
   for(unsigned contactsIndex = 0; contactsIndex < contactsJsonList.GetLength(); ++contactsIndex)
   {
     contactsJsonList[contactsIndex].AsObject(m_contacts[contactsIndex].Jsonize());
   }
   payload.WithArray("Contacts", std::move(contactsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
