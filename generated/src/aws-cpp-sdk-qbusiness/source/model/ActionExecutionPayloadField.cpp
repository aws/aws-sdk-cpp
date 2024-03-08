/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ActionExecutionPayloadField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

ActionExecutionPayloadField::ActionExecutionPayloadField() : 
    m_valueHasBeenSet(false)
{
}

ActionExecutionPayloadField::ActionExecutionPayloadField(JsonView jsonValue) : 
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ActionExecutionPayloadField& ActionExecutionPayloadField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionExecutionPayloadField::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
    if(!m_value.View().IsNull())
    {
       payload.WithObject("value", JsonValue(m_value.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
