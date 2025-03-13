/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/BatchGetTaxExemptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TaxSettings::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetTaxExemptionsResult::BatchGetTaxExemptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetTaxExemptionsResult& BatchGetTaxExemptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("failedAccounts"))
  {
    Aws::Utils::Array<JsonView> failedAccountsJsonList = jsonValue.GetArray("failedAccounts");
    for(unsigned failedAccountsIndex = 0; failedAccountsIndex < failedAccountsJsonList.GetLength(); ++failedAccountsIndex)
    {
      m_failedAccounts.push_back(failedAccountsJsonList[failedAccountsIndex].AsString());
    }
    m_failedAccountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("taxExemptionDetailsMap"))
  {
    Aws::Map<Aws::String, JsonView> taxExemptionDetailsMapJsonMap = jsonValue.GetObject("taxExemptionDetailsMap").GetAllObjects();
    for(auto& taxExemptionDetailsMapItem : taxExemptionDetailsMapJsonMap)
    {
      m_taxExemptionDetailsMap[taxExemptionDetailsMapItem.first] = taxExemptionDetailsMapItem.second.AsObject();
    }
    m_taxExemptionDetailsMapHasBeenSet = true;
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
