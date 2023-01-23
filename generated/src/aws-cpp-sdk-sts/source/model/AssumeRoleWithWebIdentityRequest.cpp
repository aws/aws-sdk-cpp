/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/AssumeRoleWithWebIdentityRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

AssumeRoleWithWebIdentityRequest::AssumeRoleWithWebIdentityRequest() : 
    m_roleArnHasBeenSet(false),
    m_roleSessionNameHasBeenSet(false),
    m_webIdentityTokenHasBeenSet(false),
    m_providerIdHasBeenSet(false),
    m_policyArnsHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false)
{
}

Aws::String AssumeRoleWithWebIdentityRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssumeRoleWithWebIdentity&";
  if(m_roleArnHasBeenSet)
  {
    ss << "RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }

  if(m_roleSessionNameHasBeenSet)
  {
    ss << "RoleSessionName=" << StringUtils::URLEncode(m_roleSessionName.c_str()) << "&";
  }

  if(m_webIdentityTokenHasBeenSet)
  {
    ss << "WebIdentityToken=" << StringUtils::URLEncode(m_webIdentityToken.c_str()) << "&";
  }

  if(m_providerIdHasBeenSet)
  {
    ss << "ProviderId=" << StringUtils::URLEncode(m_providerId.c_str()) << "&";
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


void  AssumeRoleWithWebIdentityRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
