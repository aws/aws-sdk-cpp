/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/DescribeRuleGroupMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRuleGroupMetadataResult::DescribeRuleGroupMetadataResult() : 
    m_type(RuleGroupType::NOT_SET),
    m_capacity(0)
{
}

DescribeRuleGroupMetadataResult::DescribeRuleGroupMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_type(RuleGroupType::NOT_SET),
    m_capacity(0)
{
  *this = result;
}

DescribeRuleGroupMetadataResult& DescribeRuleGroupMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RuleGroupArn"))
  {
    m_ruleGroupArn = jsonValue.GetString("RuleGroupArn");

  }

  if(jsonValue.ValueExists("RuleGroupName"))
  {
    m_ruleGroupName = jsonValue.GetString("RuleGroupName");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = RuleGroupTypeMapper::GetRuleGroupTypeForName(jsonValue.GetString("Type"));

  }

  if(jsonValue.ValueExists("Capacity"))
  {
    m_capacity = jsonValue.GetInteger("Capacity");

  }

  if(jsonValue.ValueExists("StatefulRuleOptions"))
  {
    m_statefulRuleOptions = jsonValue.GetObject("StatefulRuleOptions");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
