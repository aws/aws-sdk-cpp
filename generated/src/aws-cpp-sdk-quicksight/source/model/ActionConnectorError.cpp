/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ActionConnectorError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ActionConnectorError::ActionConnectorError(JsonView jsonValue)
{
  *this = jsonValue;
}

ActionConnectorError& ActionConnectorError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ActionConnectorErrorTypeMapper::GetActionConnectorErrorTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionConnectorError::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ActionConnectorErrorTypeMapper::GetNameForActionConnectorErrorType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
