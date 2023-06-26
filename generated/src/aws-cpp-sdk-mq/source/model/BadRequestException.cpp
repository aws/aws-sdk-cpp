/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/BadRequestException.h>
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

BadRequestException::BadRequestException() : 
    m_errorAttributeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

BadRequestException::BadRequestException(JsonView jsonValue) : 
    m_errorAttributeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

BadRequestException& BadRequestException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorAttribute"))
  {
    m_errorAttribute = jsonValue.GetString("errorAttribute");

    m_errorAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue BadRequestException::Jsonize() const
{
  JsonValue payload;

  if(m_errorAttributeHasBeenSet)
  {
   payload.WithString("errorAttribute", m_errorAttribute);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
