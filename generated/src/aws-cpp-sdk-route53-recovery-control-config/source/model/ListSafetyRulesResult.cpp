/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/ListSafetyRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53RecoveryControlConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSafetyRulesResult::ListSafetyRulesResult()
{
}

ListSafetyRulesResult::ListSafetyRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSafetyRulesResult& ListSafetyRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("SafetyRules"))
  {
    Aws::Utils::Array<JsonView> safetyRulesJsonList = jsonValue.GetArray("SafetyRules");
    for(unsigned safetyRulesIndex = 0; safetyRulesIndex < safetyRulesJsonList.GetLength(); ++safetyRulesIndex)
    {
      m_safetyRules.push_back(safetyRulesJsonList[safetyRulesIndex].AsObject());
    }
  }



  return *this;
}
