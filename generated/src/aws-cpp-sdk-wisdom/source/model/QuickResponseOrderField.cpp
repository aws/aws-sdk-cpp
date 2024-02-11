/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/QuickResponseOrderField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

QuickResponseOrderField::QuickResponseOrderField() : 
    m_nameHasBeenSet(false),
    m_order(Order::NOT_SET),
    m_orderHasBeenSet(false)
{
}

QuickResponseOrderField::QuickResponseOrderField(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_order(Order::NOT_SET),
    m_orderHasBeenSet(false)
{
  *this = jsonValue;
}

QuickResponseOrderField& QuickResponseOrderField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("order"))
  {
    m_order = OrderMapper::GetOrderForName(jsonValue.GetString("order"));

    m_orderHasBeenSet = true;
  }

  return *this;
}

JsonValue QuickResponseOrderField::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_orderHasBeenSet)
  {
   payload.WithString("order", OrderMapper::GetNameForOrder(m_order));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
