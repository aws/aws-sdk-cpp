/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/RequestError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

RequestError::RequestError() : 
    m_messageHasBeenSet(false),
    m_turkErrorCodeHasBeenSet(false)
{
}

RequestError::RequestError(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_turkErrorCodeHasBeenSet(false)
{
  *this = jsonValue;
}

RequestError& RequestError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TurkErrorCode"))
  {
    m_turkErrorCode = jsonValue.GetString("TurkErrorCode");

    m_turkErrorCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue RequestError::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_turkErrorCodeHasBeenSet)
  {
   payload.WithString("TurkErrorCode", m_turkErrorCode);

  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws
