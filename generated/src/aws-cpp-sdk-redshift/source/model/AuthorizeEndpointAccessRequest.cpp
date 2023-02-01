/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AuthorizeEndpointAccessRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

AuthorizeEndpointAccessRequest::AuthorizeEndpointAccessRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_vpcIdsHasBeenSet(false)
{
}

Aws::String AuthorizeEndpointAccessRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AuthorizeEndpointAccess&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_accountHasBeenSet)
  {
    ss << "Account=" << StringUtils::URLEncode(m_account.c_str()) << "&";
  }

  if(m_vpcIdsHasBeenSet)
  {
    unsigned vpcIdsCount = 1;
    for(auto& item : m_vpcIds)
    {
      ss << "VpcIds.member." << vpcIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      vpcIdsCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  AuthorizeEndpointAccessRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
