/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyCustomDomainAssociationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifyCustomDomainAssociationRequest::ModifyCustomDomainAssociationRequest() : 
    m_customDomainNameHasBeenSet(false),
    m_customDomainCertificateArnHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false)
{
}

Aws::String ModifyCustomDomainAssociationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyCustomDomainAssociation&";
  if(m_customDomainNameHasBeenSet)
  {
    ss << "CustomDomainName=" << StringUtils::URLEncode(m_customDomainName.c_str()) << "&";
  }

  if(m_customDomainCertificateArnHasBeenSet)
  {
    ss << "CustomDomainCertificateArn=" << StringUtils::URLEncode(m_customDomainCertificateArn.c_str()) << "&";
  }

  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyCustomDomainAssociationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
