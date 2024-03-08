/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteCustomDomainAssociationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DeleteCustomDomainAssociationRequest::DeleteCustomDomainAssociationRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_customDomainNameHasBeenSet(false)
{
}

Aws::String DeleteCustomDomainAssociationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteCustomDomainAssociation&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_customDomainNameHasBeenSet)
  {
    ss << "CustomDomainName=" << StringUtils::URLEncode(m_customDomainName.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DeleteCustomDomainAssociationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
