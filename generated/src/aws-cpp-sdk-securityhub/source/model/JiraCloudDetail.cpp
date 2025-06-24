/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/JiraCloudDetail.h>
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

JiraCloudDetail::JiraCloudDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

JiraCloudDetail& JiraCloudDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudId"))
  {
    m_cloudId = jsonValue.GetString("CloudId");
    m_cloudIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProjectKey"))
  {
    m_projectKey = jsonValue.GetString("ProjectKey");
    m_projectKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");
    m_domainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthUrl"))
  {
    m_authUrl = jsonValue.GetString("AuthUrl");
    m_authUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthStatus"))
  {
    m_authStatus = ConnectorAuthStatusMapper::GetConnectorAuthStatusForName(jsonValue.GetString("AuthStatus"));
    m_authStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue JiraCloudDetail::Jsonize() const
{
  JsonValue payload;

  if(m_cloudIdHasBeenSet)
  {
   payload.WithString("CloudId", m_cloudId);

  }

  if(m_projectKeyHasBeenSet)
  {
   payload.WithString("ProjectKey", m_projectKey);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_authUrlHasBeenSet)
  {
   payload.WithString("AuthUrl", m_authUrl);

  }

  if(m_authStatusHasBeenSet)
  {
   payload.WithString("AuthStatus", ConnectorAuthStatusMapper::GetNameForConnectorAuthStatus(m_authStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
