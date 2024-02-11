/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/APIErrorType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

APIErrorType::APIErrorType() : 
    m_secretIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

APIErrorType::APIErrorType(JsonView jsonValue) : 
    m_secretIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

APIErrorType& APIErrorType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecretId"))
  {
    m_secretId = jsonValue.GetString("SecretId");

    m_secretIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue APIErrorType::Jsonize() const
{
  JsonValue payload;

  if(m_secretIdHasBeenSet)
  {
   payload.WithString("SecretId", m_secretId);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
