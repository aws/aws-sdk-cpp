/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/TooManyTagsException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

TooManyTagsException::TooManyTagsException() : 
    m_messageHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

TooManyTagsException::TooManyTagsException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

TooManyTagsException& TooManyTagsException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue TooManyTagsException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
