/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/GetRateBasedRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRateBasedRuleResult::GetRateBasedRuleResult()
{
}

GetRateBasedRuleResult::GetRateBasedRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRateBasedRuleResult& GetRateBasedRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Rule"))
  {
    m_rule = jsonValue.GetObject("Rule");

  }



  return *this;
}
