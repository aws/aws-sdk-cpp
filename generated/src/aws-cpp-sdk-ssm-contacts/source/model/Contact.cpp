/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/Contact.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

Contact::Contact() : 
    m_contactArnHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_type(ContactType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Contact::Contact(JsonView jsonValue) : 
    m_contactArnHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_type(ContactType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Contact& Contact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContactArn"))
  {
    m_contactArn = jsonValue.GetString("ContactArn");

    m_contactArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Alias"))
  {
    m_alias = jsonValue.GetString("Alias");

    m_aliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ContactTypeMapper::GetContactTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Contact::Jsonize() const
{
  JsonValue payload;

  if(m_contactArnHasBeenSet)
  {
   payload.WithString("ContactArn", m_contactArn);

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("Alias", m_alias);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ContactTypeMapper::GetNameForContactType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
