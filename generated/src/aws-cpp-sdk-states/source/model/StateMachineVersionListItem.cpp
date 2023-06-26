/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/StateMachineVersionListItem.h>
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

StateMachineVersionListItem::StateMachineVersionListItem() : 
    m_stateMachineVersionArnHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

StateMachineVersionListItem::StateMachineVersionListItem(JsonView jsonValue) : 
    m_stateMachineVersionArnHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

StateMachineVersionListItem& StateMachineVersionListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stateMachineVersionArn"))
  {
    m_stateMachineVersionArn = jsonValue.GetString("stateMachineVersionArn");

    m_stateMachineVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue StateMachineVersionListItem::Jsonize() const
{
  JsonValue payload;

  if(m_stateMachineVersionArnHasBeenSet)
  {
   payload.WithString("stateMachineVersionArn", m_stateMachineVersionArn);

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
