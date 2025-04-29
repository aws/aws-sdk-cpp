/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/Credentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

Credentials::Credentials(JsonView jsonValue)
{
  *this = jsonValue;
}

Credentials& Credentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("AccessKeyId");
    m_accessKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretAccessKey"))
  {
    m_secretAccessKey = jsonValue.GetString("SecretAccessKey");
    m_secretAccessKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SessionToken"))
  {
    m_sessionToken = jsonValue.GetString("SessionToken");
    m_sessionTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpirationTime"))
  {
    m_expirationTime = jsonValue.GetDouble("ExpirationTime");
    m_expirationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue Credentials::Jsonize() const
{
  JsonValue payload;

  if(m_accessKeyIdHasBeenSet)
  {
   payload.WithString("AccessKeyId", m_accessKeyId);

  }

  if(m_secretAccessKeyHasBeenSet)
  {
   payload.WithString("SecretAccessKey", m_secretAccessKey);

  }

  if(m_sessionTokenHasBeenSet)
  {
   payload.WithString("SessionToken", m_sessionToken);

  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithDouble("ExpirationTime", m_expirationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
