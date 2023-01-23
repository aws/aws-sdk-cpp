/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/UserMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

UserMetadata::UserMetadata() : 
    m_idHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_surnameHasBeenSet(false),
    m_emailAddressHasBeenSet(false)
{
}

UserMetadata::UserMetadata(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_surnameHasBeenSet(false),
    m_emailAddressHasBeenSet(false)
{
  *this = jsonValue;
}

UserMetadata& UserMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GivenName"))
  {
    m_givenName = jsonValue.GetString("GivenName");

    m_givenNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Surname"))
  {
    m_surname = jsonValue.GetString("Surname");

    m_surnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");

    m_emailAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue UserMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_givenNameHasBeenSet)
  {
   payload.WithString("GivenName", m_givenName);

  }

  if(m_surnameHasBeenSet)
  {
   payload.WithString("Surname", m_surname);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
