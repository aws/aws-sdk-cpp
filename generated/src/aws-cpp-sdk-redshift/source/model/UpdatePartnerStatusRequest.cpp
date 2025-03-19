/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/UpdatePartnerStatusRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String UpdatePartnerStatusRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdatePartnerStatus&";
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

  if(m_statusHasBeenSet)
  {
    ss << "Status=" << StringUtils::URLEncode(PartnerIntegrationStatusMapper::GetNameForPartnerIntegrationStatus(m_status)) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
    ss << "StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  UpdatePartnerStatusRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
