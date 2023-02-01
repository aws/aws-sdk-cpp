/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeTrustedAdvisorChecksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTrustedAdvisorChecksResult::DescribeTrustedAdvisorChecksResult()
{
}

DescribeTrustedAdvisorChecksResult::DescribeTrustedAdvisorChecksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTrustedAdvisorChecksResult& DescribeTrustedAdvisorChecksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("checks"))
  {
    Aws::Utils::Array<JsonView> checksJsonList = jsonValue.GetArray("checks");
    for(unsigned checksIndex = 0; checksIndex < checksJsonList.GetLength(); ++checksIndex)
    {
      m_checks.push_back(checksJsonList[checksIndex].AsObject());
    }
  }



  return *this;
}
