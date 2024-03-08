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

DescribeOrganizationConfigurationResult::DescribeOrganizationConfigurationResult() : 
    m_autoEnable(false),
    m_memberAccountLimitReached(false),
    m_autoEnableStandards(AutoEnableStandards::NOT_SET)
{
}

DescribeOrganizationConfigurationResult::DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_autoEnable(false),
    m_memberAccountLimitReached(false),
    m_autoEnableStandards(AutoEnableStandards::NOT_SET)
{
  *this = result;
}

DescribeOrganizationConfigurationResult& DescribeOrganizationConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AutoEnable"))
  {
    m_autoEnable = jsonValue.GetBool("AutoEnable");

  }

  if(jsonValue.ValueExists("MemberAccountLimitReached"))
  {
    m_memberAccountLimitReached = jsonValue.GetBool("MemberAccountLimitReached");

  }

  if(jsonValue.ValueExists("AutoEnableStandards"))
  {
    m_autoEnableStandards = AutoEnableStandardsMapper::GetAutoEnableStandardsForName(jsonValue.GetString("AutoEnableStandards"));

  }

  if(jsonValue.ValueExists("OrganizationConfiguration"))
  {
    m_organizationConfiguration = jsonValue.GetObject("OrganizationConfiguration");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
