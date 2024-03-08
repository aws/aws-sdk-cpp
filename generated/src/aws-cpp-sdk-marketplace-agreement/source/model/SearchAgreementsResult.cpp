/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/SearchAgreementsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchAgreementsResult::SearchAgreementsResult()
{
}

SearchAgreementsResult::SearchAgreementsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchAgreementsResult& SearchAgreementsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("agreementViewSummaries"))
  {
    Aws::Utils::Array<JsonView> agreementViewSummariesJsonList = jsonValue.GetArray("agreementViewSummaries");
    for(unsigned agreementViewSummariesIndex = 0; agreementViewSummariesIndex < agreementViewSummariesJsonList.GetLength(); ++agreementViewSummariesIndex)
    {
      m_agreementViewSummaries.push_back(agreementViewSummariesJsonList[agreementViewSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
