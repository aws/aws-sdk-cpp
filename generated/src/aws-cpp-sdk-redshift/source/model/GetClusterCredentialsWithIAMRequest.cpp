/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/GetClusterCredentialsWithIAMRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

GetClusterCredentialsWithIAMRequest::GetClusterCredentialsWithIAMRequest() : 
    m_dbNameHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false),
    m_customDomainNameHasBeenSet(false)
{
}

Aws::String GetClusterCredentialsWithIAMRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetClusterCredentialsWithIAM&";
  if(m_dbNameHasBeenSet)
  {
    ss << "DbName=" << StringUtils::URLEncode(m_dbName.c_str()) << "&";
  }

  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_durationSecondsHasBeenSet)
  {
    ss << "DurationSeconds=" << m_durationSeconds << "&";
  }

  if(m_customDomainNameHasBeenSet)
  {
    ss << "CustomDomainName=" << StringUtils::URLEncode(m_customDomainName.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  GetClusterCredentialsWithIAMRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
