/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/SenderContact.h>
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

SenderContact::SenderContact(JsonView jsonValue)
{
  *this = jsonValue;
}

SenderContact& SenderContact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");
    m_emailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FirstName"))
  {
    m_firstName = jsonValue.GetString("FirstName");
    m_firstNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastName"))
  {
    m_lastName = jsonValue.GetString("LastName");
    m_lastNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BusinessTitle"))
  {
    m_businessTitle = jsonValue.GetString("BusinessTitle");
    m_businessTitleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Phone"))
  {
    m_phone = jsonValue.GetString("Phone");
    m_phoneHasBeenSet = true;
  }
  return *this;
}

JsonValue SenderContact::Jsonize() const
{
  JsonValue payload;

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("FirstName", m_firstName);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("LastName", m_lastName);

  }

  if(m_businessTitleHasBeenSet)
  {
   payload.WithString("BusinessTitle", m_businessTitle);

  }

  if(m_phoneHasBeenSet)
  {
   payload.WithString("Phone", m_phone);

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
