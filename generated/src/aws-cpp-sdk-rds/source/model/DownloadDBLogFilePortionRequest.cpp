/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DownloadDBLogFilePortionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String DownloadDBLogFilePortionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DownloadDBLogFilePortion&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_logFileNameHasBeenSet)
  {
    ss << "LogFileName=" << StringUtils::URLEncode(m_logFileName.c_str()) << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_numberOfLinesHasBeenSet)
  {
    ss << "NumberOfLines=" << m_numberOfLines << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DownloadDBLogFilePortionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
