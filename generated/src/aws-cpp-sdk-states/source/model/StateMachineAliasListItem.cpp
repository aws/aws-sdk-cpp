/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/StateMachineAliasListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

StateMachineAliasListItem::StateMachineAliasListItem() : 
    m_stateMachineAliasArnHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

StateMachineAliasListItem::StateMachineAliasListItem(JsonView jsonValue) : 
    m_stateMachineAliasArnHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

StateMachineAliasListItem& StateMachineAliasListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stateMachineAliasArn"))
  {
    m_stateMachineAliasArn = jsonValue.GetString("stateMachineAliasArn");

    m_stateMachineAliasArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue StateMachineAliasListItem::Jsonize() const
{
  JsonValue payload;

  if(m_stateMachineAliasArnHasBeenSet)
  {
   payload.WithString("stateMachineAliasArn", m_stateMachineAliasArn);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
