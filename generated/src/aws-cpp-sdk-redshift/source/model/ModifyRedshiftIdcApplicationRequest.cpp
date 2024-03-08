/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyRedshiftIdcApplicationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifyRedshiftIdcApplicationRequest::ModifyRedshiftIdcApplicationRequest() : 
    m_redshiftIdcApplicationArnHasBeenSet(false),
    m_identityNamespaceHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_idcDisplayNameHasBeenSet(false),
    m_authorizedTokenIssuerListHasBeenSet(false),
    m_serviceIntegrationsHasBeenSet(false)
{
}

Aws::String ModifyRedshiftIdcApplicationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyRedshiftIdcApplication&";
  if(m_redshiftIdcApplicationArnHasBeenSet)
  {
    ss << "RedshiftIdcApplicationArn=" << StringUtils::URLEncode(m_redshiftIdcApplicationArn.c_str()) << "&";
  }

  if(m_identityNamespaceHasBeenSet)
  {
    ss << "IdentityNamespace=" << StringUtils::URLEncode(m_identityNamespace.c_str()) << "&";
  }

  if(m_iamRoleArnHasBeenSet)
  {
    ss << "IamRoleArn=" << StringUtils::URLEncode(m_iamRoleArn.c_str()) << "&";
  }

  if(m_idcDisplayNameHasBeenSet)
  {
    ss << "IdcDisplayName=" << StringUtils::URLEncode(m_idcDisplayName.c_str()) << "&";
  }

  if(m_authorizedTokenIssuerListHasBeenSet)
  {
    unsigned authorizedTokenIssuerListCount = 1;
    for(auto& item : m_authorizedTokenIssuerList)
    {
      item.OutputToStream(ss, "AuthorizedTokenIssuerList.member.", authorizedTokenIssuerListCount, "");
      authorizedTokenIssuerListCount++;
    }
  }

  if(m_serviceIntegrationsHasBeenSet)
  {
    unsigned serviceIntegrationsCount = 1;
    for(auto& item : m_serviceIntegrations)
    {
      item.OutputToStream(ss, "ServiceIntegrations.member.", serviceIntegrationsCount, "");
      serviceIntegrationsCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyRedshiftIdcApplicationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
