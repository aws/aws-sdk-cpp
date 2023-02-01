/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeTrustedAdvisorCheckSummariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTrustedAdvisorCheckSummariesResult::DescribeTrustedAdvisorCheckSummariesResult()
{
}

DescribeTrustedAdvisorCheckSummariesResult::DescribeTrustedAdvisorCheckSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTrustedAdvisorCheckSummariesResult& DescribeTrustedAdvisorCheckSummariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("summaries"))
  {
    Aws::Utils::Array<JsonView> summariesJsonList = jsonValue.GetArray("summaries");
    for(unsigned summariesIndex = 0; summariesIndex < summariesJsonList.GetLength(); ++summariesIndex)
    {
      m_summaries.push_back(summariesJsonList[summariesIndex].AsObject());
    }
  }



  return *this;
}
