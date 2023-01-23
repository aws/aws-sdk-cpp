/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/PurchaseReservedNodeOfferingRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

PurchaseReservedNodeOfferingRequest::PurchaseReservedNodeOfferingRequest() : 
    m_reservedNodeOfferingIdHasBeenSet(false),
    m_nodeCount(0),
    m_nodeCountHasBeenSet(false)
{
}

Aws::String PurchaseReservedNodeOfferingRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PurchaseReservedNodeOffering&";
  if(m_reservedNodeOfferingIdHasBeenSet)
  {
    ss << "ReservedNodeOfferingId=" << StringUtils::URLEncode(m_reservedNodeOfferingId.c_str()) << "&";
  }

  if(m_nodeCountHasBeenSet)
  {
    ss << "NodeCount=" << m_nodeCount << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  PurchaseReservedNodeOfferingRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
