/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CancelExportTaskRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CancelExportTaskRequest::CancelExportTaskRequest() : 
    m_exportTaskIdentifierHasBeenSet(false)
{
}

Aws::String CancelExportTaskRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CancelExportTask&";
  if(m_exportTaskIdentifierHasBeenSet)
  {
    ss << "ExportTaskIdentifier=" << StringUtils::URLEncode(m_exportTaskIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CancelExportTaskRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
