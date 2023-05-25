/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/GetMetricStreamRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

GetMetricStreamRequest::GetMetricStreamRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String GetMetricStreamRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetMetricStream&";
  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  GetMetricStreamRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
