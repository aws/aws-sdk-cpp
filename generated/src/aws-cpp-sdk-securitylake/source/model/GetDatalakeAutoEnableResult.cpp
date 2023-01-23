/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/GetDatalakeAutoEnableResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDatalakeAutoEnableResult::GetDatalakeAutoEnableResult()
{
}

GetDatalakeAutoEnableResult::GetDatalakeAutoEnableResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDatalakeAutoEnableResult& GetDatalakeAutoEnableResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("autoEnableNewAccounts"))
  {
    Aws::Utils::Array<JsonView> autoEnableNewAccountsJsonList = jsonValue.GetArray("autoEnableNewAccounts");
    for(unsigned autoEnableNewAccountsIndex = 0; autoEnableNewAccountsIndex < autoEnableNewAccountsJsonList.GetLength(); ++autoEnableNewAccountsIndex)
    {
      m_autoEnableNewAccounts.push_back(autoEnableNewAccountsJsonList[autoEnableNewAccountsIndex].AsObject());
    }
  }



  return *this;
}
