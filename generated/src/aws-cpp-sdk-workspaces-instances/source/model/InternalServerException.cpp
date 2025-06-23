/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/InternalServerException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

InternalServerException::InternalServerException(JsonView jsonValue)
{
  *this = jsonValue;
}

InternalServerException& InternalServerException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetryAfterSeconds"))
  {
    m_retryAfterSeconds = jsonValue.GetInteger("RetryAfterSeconds");
    m_retryAfterSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue InternalServerException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_retryAfterSecondsHasBeenSet)
  {
   payload.WithInteger("RetryAfterSeconds", m_retryAfterSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
