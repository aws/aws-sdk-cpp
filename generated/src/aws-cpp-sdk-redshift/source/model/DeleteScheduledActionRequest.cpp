/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteScheduledActionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DeleteScheduledActionRequest::DeleteScheduledActionRequest() : 
    m_scheduledActionNameHasBeenSet(false)
{
}

Aws::String DeleteScheduledActionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteScheduledAction&";
  if(m_scheduledActionNameHasBeenSet)
  {
    ss << "ScheduledActionName=" << StringUtils::URLEncode(m_scheduledActionName.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DeleteScheduledActionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
