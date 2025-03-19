/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBLogFilesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String DescribeDBLogFilesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeDBLogFiles&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_filenameContainsHasBeenSet)
  {
    ss << "FilenameContains=" << StringUtils::URLEncode(m_filenameContains.c_str()) << "&";
  }

  if(m_fileLastWrittenHasBeenSet)
  {
    ss << "FileLastWritten=" << m_fileLastWritten << "&";
  }

  if(m_fileSizeHasBeenSet)
  {
    ss << "FileSize=" << m_fileSize << "&";
  }

  if(m_filtersHasBeenSet)
  {
    if (m_filters.empty())
    {
      ss << "Filters=&";
    }
    else
    {
      unsigned filtersCount = 1;
      for(auto& item : m_filters)
      {
        item.OutputToStream(ss, "Filters.Filter.", filtersCount, "");
        filtersCount++;
      }
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


void  DescribeDBLogFilesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
