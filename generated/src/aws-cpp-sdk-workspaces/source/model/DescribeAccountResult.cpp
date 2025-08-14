/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeAccountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccountResult::DescribeAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAccountResult& DescribeAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DedicatedTenancySupport"))
  {
    m_dedicatedTenancySupport = DedicatedTenancySupportResultEnumMapper::GetDedicatedTenancySupportResultEnumForName(jsonValue.GetString("DedicatedTenancySupport"));
    m_dedicatedTenancySupportHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DedicatedTenancyManagementCidrRange"))
  {
    m_dedicatedTenancyManagementCidrRange = jsonValue.GetString("DedicatedTenancyManagementCidrRange");
    m_dedicatedTenancyManagementCidrRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DedicatedTenancyAccountType"))
  {
    m_dedicatedTenancyAccountType = DedicatedTenancyAccountTypeMapper::GetDedicatedTenancyAccountTypeForName(jsonValue.GetString("DedicatedTenancyAccountType"));
    m_dedicatedTenancyAccountTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
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
