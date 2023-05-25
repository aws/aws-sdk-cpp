/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribePartnersRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DescribePartnersRequest::DescribePartnersRequest() : 
    m_accountIdHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_partnerNameHasBeenSet(false)
{
}

Aws::String DescribePartnersRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribePartners&";
  if(m_accountIdHasBeenSet)
  {
    ss << "AccountId=" << StringUtils::URLEncode(m_accountId.c_str()) << "&";
  }

  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_databaseNameHasBeenSet)
  {
    ss << "DatabaseName=" << StringUtils::URLEncode(m_databaseName.c_str()) << "&";
  }

  if(m_partnerNameHasBeenSet)
  {
    ss << "PartnerName=" << StringUtils::URLEncode(m_partnerName.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DescribePartnersRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
