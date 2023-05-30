/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/GetDataLakeOrganizationConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataLakeOrganizationConfigurationResult::GetDataLakeOrganizationConfigurationResult()
{
}

GetDataLakeOrganizationConfigurationResult::GetDataLakeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDataLakeOrganizationConfigurationResult& GetDataLakeOrganizationConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("autoEnableNewAccount"))
  {
    Aws::Utils::Array<JsonView> autoEnableNewAccountJsonList = jsonValue.GetArray("autoEnableNewAccount");
    for(unsigned autoEnableNewAccountIndex = 0; autoEnableNewAccountIndex < autoEnableNewAccountJsonList.GetLength(); ++autoEnableNewAccountIndex)
    {
      m_autoEnableNewAccount.push_back(autoEnableNewAccountJsonList[autoEnableNewAccountIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
