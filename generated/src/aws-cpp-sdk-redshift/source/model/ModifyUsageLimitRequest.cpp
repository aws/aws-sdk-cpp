/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyUsageLimitRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String ModifyUsageLimitRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyUsageLimit&";
  if(m_usageLimitIdHasBeenSet)
  {
    ss << "UsageLimitId=" << StringUtils::URLEncode(m_usageLimitId.c_str()) << "&";
  }

  if(m_amountHasBeenSet)
  {
    ss << "Amount=" << m_amount << "&";
  }

  if(m_breachActionHasBeenSet)
  {
    ss << "BreachAction=" << StringUtils::URLEncode(UsageLimitBreachActionMapper::GetNameForUsageLimitBreachAction(m_breachAction)) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyUsageLimitRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
