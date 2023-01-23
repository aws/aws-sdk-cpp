/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/PutInsightRuleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

PutInsightRuleRequest::PutInsightRuleRequest() : 
    m_ruleNameHasBeenSet(false),
    m_ruleStateHasBeenSet(false),
    m_ruleDefinitionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String PutInsightRuleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutInsightRule&";
  if(m_ruleNameHasBeenSet)
  {
    ss << "RuleName=" << StringUtils::URLEncode(m_ruleName.c_str()) << "&";
  }

  if(m_ruleStateHasBeenSet)
  {
    ss << "RuleState=" << StringUtils::URLEncode(m_ruleState.c_str()) << "&";
  }

  if(m_ruleDefinitionHasBeenSet)
  {
    ss << "RuleDefinition=" << StringUtils::URLEncode(m_ruleDefinition.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  PutInsightRuleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
