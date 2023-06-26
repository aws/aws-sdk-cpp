/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/ActionRequired.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

ActionRequired::ActionRequired() : 
    m_actionRequiredCodeHasBeenSet(false),
    m_actionRequiredInfoHasBeenSet(false)
{
}

ActionRequired::ActionRequired(JsonView jsonValue) : 
    m_actionRequiredCodeHasBeenSet(false),
    m_actionRequiredInfoHasBeenSet(false)
{
  *this = jsonValue;
}

ActionRequired& ActionRequired::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionRequiredCode"))
  {
    m_actionRequiredCode = jsonValue.GetString("actionRequiredCode");

    m_actionRequiredCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionRequiredInfo"))
  {
    m_actionRequiredInfo = jsonValue.GetString("actionRequiredInfo");

    m_actionRequiredInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionRequired::Jsonize() const
{
  JsonValue payload;

  if(m_actionRequiredCodeHasBeenSet)
  {
   payload.WithString("actionRequiredCode", m_actionRequiredCode);

  }

  if(m_actionRequiredInfoHasBeenSet)
  {
   payload.WithString("actionRequiredInfo", m_actionRequiredInfo);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
