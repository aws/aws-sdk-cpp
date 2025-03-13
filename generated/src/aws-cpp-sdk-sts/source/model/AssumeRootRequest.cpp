/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/AssumeRootRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

Aws::String AssumeRootRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssumeRoot&";
  if(m_targetPrincipalHasBeenSet)
  {
    ss << "TargetPrincipal=" << StringUtils::URLEncode(m_targetPrincipal.c_str()) << "&";
  }

  if(m_taskPolicyArnHasBeenSet)
  {
    m_taskPolicyArn.OutputToStream(ss, "TaskPolicyArn");
  }

  if(m_durationSecondsHasBeenSet)
  {
    ss << "DurationSeconds=" << m_durationSeconds << "&";
  }

  ss << "Version=2011-06-15";
  return ss.str();
}


void  AssumeRootRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
