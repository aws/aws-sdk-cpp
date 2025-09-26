/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/CreateRedshiftIdcApplicationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String CreateRedshiftIdcApplicationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateRedshiftIdcApplication&";
  if(m_idcInstanceArnHasBeenSet)
  {
    ss << "IdcInstanceArn=" << StringUtils::URLEncode(m_idcInstanceArn.c_str()) << "&";
  }

  if(m_redshiftIdcApplicationNameHasBeenSet)
  {
    ss << "RedshiftIdcApplicationName=" << StringUtils::URLEncode(m_redshiftIdcApplicationName.c_str()) << "&";
  }

  if(m_identityNamespaceHasBeenSet)
  {
    ss << "IdentityNamespace=" << StringUtils::URLEncode(m_identityNamespace.c_str()) << "&";
  }

  if(m_idcDisplayNameHasBeenSet)
  {
    ss << "IdcDisplayName=" << StringUtils::URLEncode(m_idcDisplayName.c_str()) << "&";
  }

  if(m_iamRoleArnHasBeenSet)
  {
    ss << "IamRoleArn=" << StringUtils::URLEncode(m_iamRoleArn.c_str()) << "&";
  }

  if(m_authorizedTokenIssuerListHasBeenSet)
  {
    if (m_authorizedTokenIssuerList.empty())
    {
      ss << "AuthorizedTokenIssuerList=&";
    }
    else
    {
      unsigned authorizedTokenIssuerListCount = 1;
      for(auto& item : m_authorizedTokenIssuerList)
      {
        item.OutputToStream(ss, "AuthorizedTokenIssuerList.member.", authorizedTokenIssuerListCount, "");
        authorizedTokenIssuerListCount++;
      }
    }
  }

  if(m_serviceIntegrationsHasBeenSet)
  {
    if (m_serviceIntegrations.empty())
    {
      ss << "ServiceIntegrations=&";
    }
    else
    {
      unsigned serviceIntegrationsCount = 1;
      for(auto& item : m_serviceIntegrations)
      {
        item.OutputToStream(ss, "ServiceIntegrations.member.", serviceIntegrationsCount, "");
        serviceIntegrationsCount++;
      }
    }
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.Tag.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  if(m_ssoTagKeysHasBeenSet)
  {
    if (m_ssoTagKeys.empty())
    {
      ss << "SsoTagKeys=&";
    }
    else
    {
      unsigned ssoTagKeysCount = 1;
      for(auto& item : m_ssoTagKeys)
      {
        ss << "SsoTagKeys.TagKey." << ssoTagKeysCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        ssoTagKeysCount++;
      }
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  CreateRedshiftIdcApplicationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
