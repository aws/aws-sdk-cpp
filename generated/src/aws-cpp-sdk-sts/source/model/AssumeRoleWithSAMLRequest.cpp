/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/AssumeRoleWithSAMLRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

AssumeRoleWithSAMLRequest::AssumeRoleWithSAMLRequest() : 
    m_roleArnHasBeenSet(false),
    m_principalArnHasBeenSet(false),
    m_sAMLAssertionHasBeenSet(false),
    m_policyArnsHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false)
{
}

Aws::String AssumeRoleWithSAMLRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssumeRoleWithSAML&";
  if(m_roleArnHasBeenSet)
  {
    ss << "RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }

  if(m_principalArnHasBeenSet)
  {
    ss << "PrincipalArn=" << StringUtils::URLEncode(m_principalArn.c_str()) << "&";
  }

  if(m_sAMLAssertionHasBeenSet)
  {
    ss << "SAMLAssertion=" << StringUtils::URLEncode(m_sAMLAssertion.c_str()) << "&";
  }

  if(m_policyArnsHasBeenSet)
  {
    unsigned policyArnsCount = 1;
    for(auto& item : m_policyArns)
    {
      item.OutputToStream(ss, "PolicyArns.member.", policyArnsCount, "");
      policyArnsCount++;
    }
  }

  if(m_policyHasBeenSet)
  {
    ss << "Policy=" << StringUtils::URLEncode(m_policy.c_str()) << "&";
  }

  if(m_durationSecondsHasBeenSet)
  {
    ss << "DurationSeconds=" << m_durationSeconds << "&";
  }

  ss << "Version=2011-06-15";
  return ss.str();
}


void  AssumeRoleWithSAMLRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
