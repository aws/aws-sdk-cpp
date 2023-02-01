/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeExportTasksRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DescribeExportTasksRequest::DescribeExportTasksRequest() : 
    m_exportTaskIdentifierHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_sourceType(ExportSourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false)
{
}

Aws::String DescribeExportTasksRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeExportTasks&";
  if(m_exportTaskIdentifierHasBeenSet)
  {
    ss << "ExportTaskIdentifier=" << StringUtils::URLEncode(m_exportTaskIdentifier.c_str()) << "&";
  }

  if(m_sourceArnHasBeenSet)
  {
    ss << "SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
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

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_sourceTypeHasBeenSet)
  {
    ss << "SourceType=" << ExportSourceTypeMapper::GetNameForExportSourceType(m_sourceType) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DescribeExportTasksRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
