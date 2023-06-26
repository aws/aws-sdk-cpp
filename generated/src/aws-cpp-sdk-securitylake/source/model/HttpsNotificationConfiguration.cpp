/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/HttpsNotificationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

HttpsNotificationConfiguration::HttpsNotificationConfiguration() : 
    m_authorizationApiKeyNameHasBeenSet(false),
    m_authorizationApiKeyValueHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_httpMethod(HttpMethod::NOT_SET),
    m_httpMethodHasBeenSet(false),
    m_targetRoleArnHasBeenSet(false)
{
}

HttpsNotificationConfiguration::HttpsNotificationConfiguration(JsonView jsonValue) : 
    m_authorizationApiKeyNameHasBeenSet(false),
    m_authorizationApiKeyValueHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_httpMethod(HttpMethod::NOT_SET),
    m_httpMethodHasBeenSet(false),
    m_targetRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

HttpsNotificationConfiguration& HttpsNotificationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authorizationApiKeyName"))
  {
    m_authorizationApiKeyName = jsonValue.GetString("authorizationApiKeyName");

    m_authorizationApiKeyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizationApiKeyValue"))
  {
    m_authorizationApiKeyValue = jsonValue.GetString("authorizationApiKeyValue");

    m_authorizationApiKeyValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("httpMethod"))
  {
    m_httpMethod = HttpMethodMapper::GetHttpMethodForName(jsonValue.GetString("httpMethod"));

    m_httpMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetRoleArn"))
  {
    m_targetRoleArn = jsonValue.GetString("targetRoleArn");

    m_targetRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpsNotificationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationApiKeyNameHasBeenSet)
  {
   payload.WithString("authorizationApiKeyName", m_authorizationApiKeyName);

  }

  if(m_authorizationApiKeyValueHasBeenSet)
  {
   payload.WithString("authorizationApiKeyValue", m_authorizationApiKeyValue);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_httpMethodHasBeenSet)
  {
   payload.WithString("httpMethod", HttpMethodMapper::GetNameForHttpMethod(m_httpMethod));
  }

  if(m_targetRoleArnHasBeenSet)
  {
   payload.WithString("targetRoleArn", m_targetRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
