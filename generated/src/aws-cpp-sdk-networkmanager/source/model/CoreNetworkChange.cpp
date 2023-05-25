/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/CoreNetworkChange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

CoreNetworkChange::CoreNetworkChange() : 
    m_type(ChangeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_previousValuesHasBeenSet(false),
    m_newValuesHasBeenSet(false),
    m_identifierPathHasBeenSet(false)
{
}

CoreNetworkChange::CoreNetworkChange(JsonView jsonValue) : 
    m_type(ChangeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_action(ChangeAction::NOT_SET),
    m_actionHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_previousValuesHasBeenSet(false),
    m_newValuesHasBeenSet(false),
    m_identifierPathHasBeenSet(false)
{
  *this = jsonValue;
}

CoreNetworkChange& CoreNetworkChange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ChangeTypeMapper::GetChangeTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = ChangeActionMapper::GetChangeActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreviousValues"))
  {
    m_previousValues = jsonValue.GetObject("PreviousValues");

    m_previousValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NewValues"))
  {
    m_newValues = jsonValue.GetObject("NewValues");

    m_newValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentifierPath"))
  {
    m_identifierPath = jsonValue.GetString("IdentifierPath");

    m_identifierPathHasBeenSet = true;
  }

  return *this;
}

JsonValue CoreNetworkChange::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ChangeTypeMapper::GetNameForChangeType(m_type));
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ChangeActionMapper::GetNameForChangeAction(m_action));
  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_previousValuesHasBeenSet)
  {
   payload.WithObject("PreviousValues", m_previousValues.Jsonize());

  }

  if(m_newValuesHasBeenSet)
  {
   payload.WithObject("NewValues", m_newValues.Jsonize());

  }

  if(m_identifierPathHasBeenSet)
  {
   payload.WithString("IdentifierPath", m_identifierPath);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
