/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBRecommendationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DescribeDBRecommendationsRequest::DescribeDBRecommendationsRequest() : 
    m_lastUpdatedAfterHasBeenSet(false),
    m_lastUpdatedBeforeHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeDBRecommendationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeDBRecommendations&";
  if(m_lastUpdatedAfterHasBeenSet)
  {
    ss << "LastUpdatedAfter=" << StringUtils::URLEncode(m_lastUpdatedAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_lastUpdatedBeforeHasBeenSet)
  {
    ss << "LastUpdatedBefore=" << StringUtils::URLEncode(m_lastUpdatedBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_localeHasBeenSet)
  {
    ss << "Locale=" << StringUtils::URLEncode(m_locale.c_str()) << "&";
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


void  DescribeDBRecommendationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
