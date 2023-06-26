/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/CancelMessageMoveTaskRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SQS::Model;
using namespace Aws::Utils;

CancelMessageMoveTaskRequest::CancelMessageMoveTaskRequest() : 
    m_taskHandleHasBeenSet(false)
{
}

Aws::String CancelMessageMoveTaskRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CancelMessageMoveTask&";
  if(m_taskHandleHasBeenSet)
  {
    ss << "TaskHandle=" << StringUtils::URLEncode(m_taskHandle.c_str()) << "&";
  }

  ss << "Version=2012-11-05";
  return ss.str();
}


void  CancelMessageMoveTaskRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
