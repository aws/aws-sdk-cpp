/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/GetTaxExemptionTypesResult.h>
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

GetTaxExemptionTypesResult::GetTaxExemptionTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTaxExemptionTypesResult& GetTaxExemptionTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("taxExemptionTypes"))
  {
    Aws::Utils::Array<JsonView> taxExemptionTypesJsonList = jsonValue.GetArray("taxExemptionTypes");
    for(unsigned taxExemptionTypesIndex = 0; taxExemptionTypesIndex < taxExemptionTypesJsonList.GetLength(); ++taxExemptionTypesIndex)
    {
      m_taxExemptionTypes.push_back(taxExemptionTypesJsonList[taxExemptionTypesIndex].AsObject());
    }
    m_taxExemptionTypesHasBeenSet = true;
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
