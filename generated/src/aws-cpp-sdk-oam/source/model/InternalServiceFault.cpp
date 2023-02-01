/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/oam/model/InternalServiceFault.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OAM
{
namespace Model
{

InternalServiceFault::InternalServiceFault() : 
    m_messageHasBeenSet(false),
    m_amznErrorTypeHasBeenSet(false)
{
}

InternalServiceFault::InternalServiceFault(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_amznErrorTypeHasBeenSet(false)
{
  *this = jsonValue;
}

InternalServiceFault& InternalServiceFault::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue InternalServiceFault::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace OAM
} // namespace Aws
