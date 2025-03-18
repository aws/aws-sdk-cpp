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

DescribeIpRestrictionResult::DescribeIpRestrictionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeIpRestrictionResult& DescribeIpRestrictionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AwsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IpRestrictionRuleMap"))
  {
    Aws::Map<Aws::String, JsonView> ipRestrictionRuleMapJsonMap = jsonValue.GetObject("IpRestrictionRuleMap").GetAllObjects();
    for(auto& ipRestrictionRuleMapItem : ipRestrictionRuleMapJsonMap)
    {
      m_ipRestrictionRuleMap[ipRestrictionRuleMapItem.first] = ipRestrictionRuleMapItem.second.AsString();
    }
    m_ipRestrictionRuleMapHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcIdRestrictionRuleMap"))
  {
    Aws::Map<Aws::String, JsonView> vpcIdRestrictionRuleMapJsonMap = jsonValue.GetObject("VpcIdRestrictionRuleMap").GetAllObjects();
    for(auto& vpcIdRestrictionRuleMapItem : vpcIdRestrictionRuleMapJsonMap)
    {
      m_vpcIdRestrictionRuleMap[vpcIdRestrictionRuleMapItem.first] = vpcIdRestrictionRuleMapItem.second.AsString();
    }
    m_vpcIdRestrictionRuleMapHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcEndpointIdRestrictionRuleMap"))
  {
    Aws::Map<Aws::String, JsonView> vpcEndpointIdRestrictionRuleMapJsonMap = jsonValue.GetObject("VpcEndpointIdRestrictionRuleMap").GetAllObjects();
    for(auto& vpcEndpointIdRestrictionRuleMapItem : vpcEndpointIdRestrictionRuleMapJsonMap)
    {
      m_vpcEndpointIdRestrictionRuleMap[vpcEndpointIdRestrictionRuleMapItem.first] = vpcEndpointIdRestrictionRuleMapItem.second.AsString();
    }
    m_vpcEndpointIdRestrictionRuleMapHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  m_status = static_cast<int>(result.GetResponseCode());
  m_statusHasBeenSet = true;
  return *this;
}
