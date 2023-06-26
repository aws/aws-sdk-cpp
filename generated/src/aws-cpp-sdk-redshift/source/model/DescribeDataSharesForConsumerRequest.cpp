/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeDataSharesForConsumerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DescribeDataSharesForConsumerRequest::DescribeDataSharesForConsumerRequest() : 
    m_consumerArnHasBeenSet(false),
    m_status(DataShareStatusForConsumer::NOT_SET),
    m_statusHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeDataSharesForConsumerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeDataSharesForConsumer&";
  if(m_consumerArnHasBeenSet)
  {
    ss << "ConsumerArn=" << StringUtils::URLEncode(m_consumerArn.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
    ss << "Status=" << DataShareStatusForConsumerMapper::GetNameForDataShareStatusForConsumer(m_status) << "&";
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


void  DescribeDataSharesForConsumerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
