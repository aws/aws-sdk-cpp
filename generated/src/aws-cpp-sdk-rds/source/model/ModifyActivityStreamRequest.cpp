/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyActivityStreamRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyActivityStreamRequest::ModifyActivityStreamRequest() : 
    m_resourceArnHasBeenSet(false),
    m_auditPolicyState(AuditPolicyState::NOT_SET),
    m_auditPolicyStateHasBeenSet(false)
{
}

Aws::String ModifyActivityStreamRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyActivityStream&";
  if(m_resourceArnHasBeenSet)
  {
    ss << "ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }

  if(m_auditPolicyStateHasBeenSet)
  {
    ss << "AuditPolicyState=" << AuditPolicyStateMapper::GetNameForAuditPolicyState(m_auditPolicyState) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyActivityStreamRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
