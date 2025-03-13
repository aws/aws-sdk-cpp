/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/RevokeEndpointAccessRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String RevokeEndpointAccessRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RevokeEndpointAccess&";
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
    if (m_vpcIds.empty())
    {
      ss << "VpcIds=&";
    }
    else
    {
      unsigned vpcIdsCount = 1;
      for(auto& item : m_vpcIds)
      {
        ss << "VpcIds.VpcIdentifier." << vpcIdsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        vpcIdsCount++;
      }
    }
  }

  if(m_forceHasBeenSet)
  {
    ss << "Force=" << std::boolalpha << m_force << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  RevokeEndpointAccessRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
