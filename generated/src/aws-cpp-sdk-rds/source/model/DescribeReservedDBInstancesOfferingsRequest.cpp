/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeReservedDBInstancesOfferingsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DescribeReservedDBInstancesOfferingsRequest::DescribeReservedDBInstancesOfferingsRequest() : 
    m_reservedDBInstancesOfferingIdHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_productDescriptionHasBeenSet(false),
    m_offeringTypeHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeReservedDBInstancesOfferingsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeReservedDBInstancesOfferings&";
  if(m_reservedDBInstancesOfferingIdHasBeenSet)
  {
    ss << "ReservedDBInstancesOfferingId=" << StringUtils::URLEncode(m_reservedDBInstancesOfferingId.c_str()) << "&";
  }

  if(m_dBInstanceClassHasBeenSet)
  {
    ss << "DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }

  if(m_durationHasBeenSet)
  {
    ss << "Duration=" << StringUtils::URLEncode(m_duration.c_str()) << "&";
  }

  if(m_productDescriptionHasBeenSet)
  {
    ss << "ProductDescription=" << StringUtils::URLEncode(m_productDescription.c_str()) << "&";
  }

  if(m_offeringTypeHasBeenSet)
  {
    ss << "OfferingType=" << StringUtils::URLEncode(m_offeringType.c_str()) << "&";
  }

  if(m_multiAZHasBeenSet)
  {
    ss << "MultiAZ=" << std::boolalpha << m_multiAZ << "&";
  }

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filters.member.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DescribeReservedDBInstancesOfferingsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
