/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeTrustedAdvisorCheckResultResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTrustedAdvisorCheckResultResult::DescribeTrustedAdvisorCheckResultResult()
{
}

DescribeTrustedAdvisorCheckResultResult::DescribeTrustedAdvisorCheckResultResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTrustedAdvisorCheckResultResult& DescribeTrustedAdvisorCheckResultResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("result"))
  {
    m_result = jsonValue.GetObject("result");

  }



  return *this;
}
