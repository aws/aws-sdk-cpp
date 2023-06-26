/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/RoutingConfigurationListItem.h>
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

RoutingConfigurationListItem::RoutingConfigurationListItem() : 
    m_stateMachineVersionArnHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false)
{
}

RoutingConfigurationListItem::RoutingConfigurationListItem(JsonView jsonValue) : 
    m_stateMachineVersionArnHasBeenSet(false),
    m_weight(0),
    m_weightHasBeenSet(false)
{
  *this = jsonValue;
}

RoutingConfigurationListItem& RoutingConfigurationListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stateMachineVersionArn"))
  {
    m_stateMachineVersionArn = jsonValue.GetString("stateMachineVersionArn");

    m_stateMachineVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("weight"))
  {
    m_weight = jsonValue.GetInteger("weight");

    m_weightHasBeenSet = true;
  }

  return *this;
}

JsonValue RoutingConfigurationListItem::Jsonize() const
{
  JsonValue payload;

  if(m_stateMachineVersionArnHasBeenSet)
  {
   payload.WithString("stateMachineVersionArn", m_stateMachineVersionArn);

  }

  if(m_weightHasBeenSet)
  {
   payload.WithInteger("weight", m_weight);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
