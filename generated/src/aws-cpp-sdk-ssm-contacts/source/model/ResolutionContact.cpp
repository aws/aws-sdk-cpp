/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ResolutionContact.h>
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

ResolutionContact::ResolutionContact() : 
    m_contactArnHasBeenSet(false),
    m_type(ContactType::NOT_SET),
    m_typeHasBeenSet(false),
    m_stageIndex(0),
    m_stageIndexHasBeenSet(false)
{
}

ResolutionContact::ResolutionContact(JsonView jsonValue) : 
    m_contactArnHasBeenSet(false),
    m_type(ContactType::NOT_SET),
    m_typeHasBeenSet(false),
    m_stageIndex(0),
    m_stageIndexHasBeenSet(false)
{
  *this = jsonValue;
}

ResolutionContact& ResolutionContact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContactArn"))
  {
    m_contactArn = jsonValue.GetString("ContactArn");

    m_contactArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ContactTypeMapper::GetContactTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StageIndex"))
  {
    m_stageIndex = jsonValue.GetInteger("StageIndex");

    m_stageIndexHasBeenSet = true;
  }

  return *this;
}

JsonValue ResolutionContact::Jsonize() const
{
  JsonValue payload;

  if(m_contactArnHasBeenSet)
  {
   payload.WithString("ContactArn", m_contactArn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ContactTypeMapper::GetNameForContactType(m_type));
  }

  if(m_stageIndexHasBeenSet)
  {
   payload.WithInteger("StageIndex", m_stageIndex);

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
