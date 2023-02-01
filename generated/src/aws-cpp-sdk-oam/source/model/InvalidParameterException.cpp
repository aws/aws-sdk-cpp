/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/oam/model/InvalidParameterException.h>
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

InvalidParameterException::InvalidParameterException() : 
    m_messageHasBeenSet(false),
    m_amznErrorTypeHasBeenSet(false)
{
}

InvalidParameterException::InvalidParameterException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_amznErrorTypeHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidParameterException& InvalidParameterException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidParameterException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace OAM
} // namespace Aws
