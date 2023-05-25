/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeIpRestrictionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeIpRestrictionResult::DescribeIpRestrictionResult() : 
    m_enabled(false),
    m_status(0)
{
}

DescribeIpRestrictionResult::DescribeIpRestrictionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_enabled(false),
    m_status(0)
{
  *this = result;
}

DescribeIpRestrictionResult& DescribeIpRestrictionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AwsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");

  }

  if(jsonValue.ValueExists("IpRestrictionRuleMap"))
  {
    Aws::Map<Aws::String, JsonView> ipRestrictionRuleMapJsonMap = jsonValue.GetObject("IpRestrictionRuleMap").GetAllObjects();
    for(auto& ipRestrictionRuleMapItem : ipRestrictionRuleMapJsonMap)
    {
      m_ipRestrictionRuleMap[ipRestrictionRuleMapItem.first] = ipRestrictionRuleMapItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
