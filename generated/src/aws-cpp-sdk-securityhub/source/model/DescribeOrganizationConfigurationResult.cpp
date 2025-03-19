/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/DescribeOrganizationConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOrganizationConfigurationResult::DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeOrganizationConfigurationResult& DescribeOrganizationConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AutoEnable"))
  {
    m_autoEnable = jsonValue.GetBool("AutoEnable");
    m_autoEnableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MemberAccountLimitReached"))
  {
    m_memberAccountLimitReached = jsonValue.GetBool("MemberAccountLimitReached");
    m_memberAccountLimitReachedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoEnableStandards"))
  {
    m_autoEnableStandards = AutoEnableStandardsMapper::GetAutoEnableStandardsForName(jsonValue.GetString("AutoEnableStandards"));
    m_autoEnableStandardsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OrganizationConfiguration"))
  {
    m_organizationConfiguration = jsonValue.GetObject("OrganizationConfiguration");
    m_organizationConfigurationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
