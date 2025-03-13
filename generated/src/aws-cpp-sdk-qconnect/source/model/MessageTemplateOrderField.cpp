/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/MessageTemplateOrderField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

MessageTemplateOrderField::MessageTemplateOrderField(JsonView jsonValue)
{
  *this = jsonValue;
}

MessageTemplateOrderField& MessageTemplateOrderField::operator =(JsonView jsonValue)
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

JsonValue MessageTemplateOrderField::Jsonize() const
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
} // namespace QConnect
} // namespace Aws
