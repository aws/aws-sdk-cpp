/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/GetFederationTokenRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

Aws::String GetFederationTokenRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetFederationToken&";
  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_policyHasBeenSet)
  {
    ss << "Policy=" << StringUtils::URLEncode(m_policy.c_str()) << "&";
  }

  if(m_policyArnsHasBeenSet)
  {
    if (m_policyArns.empty())
    {
      ss << "PolicyArns=&";
    }
    else
    {
      unsigned policyArnsCount = 1;
      for(auto& item : m_policyArns)
      {
        item.OutputToStream(ss, "PolicyArns.member.", policyArnsCount, "");
        policyArnsCount++;
      }
    }
  }

  if(m_durationSecondsHasBeenSet)
  {
    ss << "DurationSeconds=" << m_durationSeconds << "&";
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.member.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  ss << "Version=2011-06-15";
  return ss.str();
}


void  GetFederationTokenRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
