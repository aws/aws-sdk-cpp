/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mobile/model/LimitExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Mobile
{
namespace Model
{

LimitExceededException::LimitExceededException() : 
    m_retryAfterSecondsHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

LimitExceededException::LimitExceededException(JsonView jsonValue) : 
    m_retryAfterSecondsHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

LimitExceededException& LimitExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue LimitExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Mobile
} // namespace Aws
