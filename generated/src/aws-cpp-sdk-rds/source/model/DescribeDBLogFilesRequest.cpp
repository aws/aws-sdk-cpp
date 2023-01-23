﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBLogFilesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DescribeDBLogFilesRequest::DescribeDBLogFilesRequest() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_filenameContainsHasBeenSet(false),
    m_fileLastWritten(0),
    m_fileLastWrittenHasBeenSet(false),
    m_fileSize(0),
    m_fileSizeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

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


void  DescribeDBLogFilesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
