/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/EmergencyContact.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

EmergencyContact::EmergencyContact() : 
    m_emailAddressHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_contactNotesHasBeenSet(false)
{
}

EmergencyContact::EmergencyContact(JsonView jsonValue) : 
    m_emailAddressHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_contactNotesHasBeenSet(false)
{
  *this = jsonValue;
}

EmergencyContact& EmergencyContact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");

    m_emailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactNotes"))
  {
    m_contactNotes = jsonValue.GetString("ContactNotes");

    m_contactNotesHasBeenSet = true;
  }

  return *this;
}

JsonValue EmergencyContact::Jsonize() const
{
  JsonValue payload;

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_contactNotesHasBeenSet)
  {
   payload.WithString("ContactNotes", m_contactNotes);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
