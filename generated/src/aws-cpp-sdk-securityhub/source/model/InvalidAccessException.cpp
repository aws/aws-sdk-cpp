/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/InvalidAccessException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

InvalidAccessException::InvalidAccessException() : 
    m_messageHasBeenSet(false),
    m_codeHasBeenSet(false)
{
}

InvalidAccessException::InvalidAccessException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_codeHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidAccessException& InvalidAccessException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetString("Code");

    m_codeHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidAccessException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", m_code);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
