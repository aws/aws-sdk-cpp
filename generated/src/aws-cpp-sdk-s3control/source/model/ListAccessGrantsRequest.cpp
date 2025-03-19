/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ListAccessGrantsRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;


Aws::String ListAccessGrantsRequest::SerializePayload() const
{
  return {};
}

void ListAccessGrantsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_granteeTypeHasBeenSet)
    {
      ss << GranteeTypeMapper::GetNameForGranteeType(m_granteeType);
      uri.AddQueryStringParameter("granteetype", ss.str());
      ss.str("");
    }

    if(m_granteeIdentifierHasBeenSet)
    {
      ss << m_granteeIdentifier;
      uri.AddQueryStringParameter("granteeidentifier", ss.str());
      ss.str("");
    }

    if(m_permissionHasBeenSet)
    {
      ss << PermissionMapper::GetNameForPermission(m_permission);
      uri.AddQueryStringParameter("permission", ss.str());
      ss.str("");
    }

    if(m_grantScopeHasBeenSet)
    {
      ss << m_grantScope;
      uri.AddQueryStringParameter("grantscope", ss.str());
      ss.str("");
    }

    if(m_applicationArnHasBeenSet)
    {
      ss << m_applicationArn;
      uri.AddQueryStringParameter("application_arn", ss.str());
      ss.str("");
    }

}

Aws::Http::HeaderValueCollection ListAccessGrantsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_accountIdHasBeenSet)
  {
    ss << m_accountId;
    headers.emplace("x-amz-account-id",  ss.str());
    ss.str("");
  }

  return headers;
}

ListAccessGrantsRequest::EndpointParameters ListAccessGrantsRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("RequiresAccountId"), true, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    // Operation context parameters
    if (AccountIdHasBeenSet()) {
        parameters.emplace_back(Aws::String("AccountId"), this->GetAccountId(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}
