/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ResourceNotFoundException.h>
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

ResourceNotFoundException::ResourceNotFoundException() : 
    m_messageHasBeenSet(false),
    m_codeHasBeenSet(false)
{
}

ResourceNotFoundException::ResourceNotFoundException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_codeHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceNotFoundException& ResourceNotFoundException::operator =(JsonView jsonValue)
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

JsonValue ResourceNotFoundException::Jsonize() const
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
