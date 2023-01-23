/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/GetReservedNodeExchangeOfferingsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

GetReservedNodeExchangeOfferingsRequest::GetReservedNodeExchangeOfferingsRequest() : 
    m_reservedNodeIdHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String GetReservedNodeExchangeOfferingsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetReservedNodeExchangeOfferings&";
  if(m_reservedNodeIdHasBeenSet)
  {
    ss << "ReservedNodeId=" << StringUtils::URLEncode(m_reservedNodeId.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  GetReservedNodeExchangeOfferingsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
