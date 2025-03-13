/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ContactListDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

ContactListDestination::ContactListDestination(JsonView jsonValue)
{
  *this = jsonValue;
}

ContactListDestination& ContactListDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContactListName"))
  {
    m_contactListName = jsonValue.GetString("ContactListName");
    m_contactListNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContactListImportAction"))
  {
    m_contactListImportAction = ContactListImportActionMapper::GetContactListImportActionForName(jsonValue.GetString("ContactListImportAction"));
    m_contactListImportActionHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactListDestination::Jsonize() const
{
  JsonValue payload;

  if(m_contactListNameHasBeenSet)
  {
   payload.WithString("ContactListName", m_contactListName);

  }

  if(m_contactListImportActionHasBeenSet)
  {
   payload.WithString("ContactListImportAction", ContactListImportActionMapper::GetNameForContactListImportAction(m_contactListImportAction));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
