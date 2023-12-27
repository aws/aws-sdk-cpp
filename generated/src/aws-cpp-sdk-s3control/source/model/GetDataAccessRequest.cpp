/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/GetDataAccessRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

GetDataAccessRequest::GetDataAccessRequest() : 
    m_accountIdHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false),
    m_privilege(Privilege::NOT_SET),
    m_privilegeHasBeenSet(false),
    m_targetType(S3PrefixType::NOT_SET),
    m_targetTypeHasBeenSet(false)
{
}

Aws::String GetDataAccessRequest::SerializePayload() const
{
  return {};
}

void GetDataAccessRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_targetHasBeenSet)
    {
      ss << m_target;
      uri.AddQueryStringParameter("target", ss.str());
      ss.str("");
    }

    if(m_permissionHasBeenSet)
    {
      ss << PermissionMapper::GetNameForPermission(m_permission);
      uri.AddQueryStringParameter("permission", ss.str());
      ss.str("");
    }

    if(m_durationSecondsHasBeenSet)
    {
      ss << m_durationSeconds;
      uri.AddQueryStringParameter("durationSeconds", ss.str());
      ss.str("");
    }

    if(m_privilegeHasBeenSet)
    {
      ss << PrivilegeMapper::GetNameForPrivilege(m_privilege);
      uri.AddQueryStringParameter("privilege", ss.str());
      ss.str("");
    }

    if(m_targetTypeHasBeenSet)
    {
      ss << S3PrefixTypeMapper::GetNameForS3PrefixType(m_targetType);
      uri.AddQueryStringParameter("targetType", ss.str());
      ss.str("");
    }

}

Aws::Http::HeaderValueCollection GetDataAccessRequest::GetRequestSpecificHeaders() const
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

GetDataAccessRequest::EndpointParameters GetDataAccessRequest::GetEndpointContextParams() const
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
