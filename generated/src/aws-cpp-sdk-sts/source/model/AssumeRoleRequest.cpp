﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/AssumeRoleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

Aws::String AssumeRoleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssumeRole&";
  if(m_roleArnHasBeenSet)
  {
    ss << "RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }

  if(m_roleSessionNameHasBeenSet)
  {
    ss << "RoleSessionName=" << StringUtils::URLEncode(m_roleSessionName.c_str()) << "&";
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

  if(m_policyHasBeenSet)
  {
    ss << "Policy=" << StringUtils::URLEncode(m_policy.c_str()) << "&";
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

  if(m_transitiveTagKeysHasBeenSet)
  {
    if (m_transitiveTagKeys.empty())
    {
      ss << "TransitiveTagKeys=&";
    }
    else
    {
      unsigned transitiveTagKeysCount = 1;
      for(auto& item : m_transitiveTagKeys)
      {
        ss << "TransitiveTagKeys.member." << transitiveTagKeysCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        transitiveTagKeysCount++;
      }
    }
  }

  if(m_externalIdHasBeenSet)
  {
    ss << "ExternalId=" << StringUtils::URLEncode(m_externalId.c_str()) << "&";
  }

  if(m_serialNumberHasBeenSet)
  {
    ss << "SerialNumber=" << StringUtils::URLEncode(m_serialNumber.c_str()) << "&";
  }

  if(m_tokenCodeHasBeenSet)
  {
    ss << "TokenCode=" << StringUtils::URLEncode(m_tokenCode.c_str()) << "&";
  }

  if(m_sourceIdentityHasBeenSet)
  {
    ss << "SourceIdentity=" << StringUtils::URLEncode(m_sourceIdentity.c_str()) << "&";
  }

  if(m_providedContextsHasBeenSet)
  {
    if (m_providedContexts.empty())
    {
      ss << "ProvidedContexts=&";
    }
    else
    {
      unsigned providedContextsCount = 1;
      for(auto& item : m_providedContexts)
      {
        item.OutputToStream(ss, "ProvidedContexts.member.", providedContextsCount, "");
        providedContextsCount++;
      }
    }
  }

  ss << "Version=2011-06-15";
  return ss.str();
}


void  AssumeRoleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
