/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso/model/GetRoleCredentialsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSO::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetRoleCredentialsRequest::GetRoleCredentialsRequest() : 
    m_roleNameHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_accessTokenHasBeenSet(false)
{
}

Aws::String GetRoleCredentialsRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetRoleCredentialsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_accessTokenHasBeenSet)
  {
    ss << m_accessToken;
    headers.emplace("x-amz-sso_bearer_token",  ss.str());
    ss.str("");
  }

  return headers;

}

void GetRoleCredentialsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_roleNameHasBeenSet)
    {
      ss << m_roleName;
      uri.AddQueryStringParameter("role_name", ss.str());
      ss.str("");
    }

    if(m_accountIdHasBeenSet)
    {
      ss << m_accountId;
      uri.AddQueryStringParameter("account_id", ss.str());
      ss.str("");
    }

}



