/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso/model/ListAccountRolesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSO::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListAccountRolesRequest::ListAccountRolesRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_accessTokenHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

Aws::String ListAccountRolesRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection ListAccountRolesRequest::GetRequestSpecificHeaders() const
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

void ListAccountRolesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("next_token", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("max_result", ss.str());
      ss.str("");
    }

    if(m_accountIdHasBeenSet)
    {
      ss << m_accountId;
      uri.AddQueryStringParameter("account_id", ss.str());
      ss.str("");
    }

}



