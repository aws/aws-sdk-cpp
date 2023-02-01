/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ListAvailableManagedRuleGroupVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAvailableManagedRuleGroupVersionsResult::ListAvailableManagedRuleGroupVersionsResult()
{
}

ListAvailableManagedRuleGroupVersionsResult::ListAvailableManagedRuleGroupVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAvailableManagedRuleGroupVersionsResult& ListAvailableManagedRuleGroupVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }

  if(jsonValue.ValueExists("Versions"))
  {
    Aws::Utils::Array<JsonView> versionsJsonList = jsonValue.GetArray("Versions");
    for(unsigned versionsIndex = 0; versionsIndex < versionsJsonList.GetLength(); ++versionsIndex)
    {
      m_versions.push_back(versionsJsonList[versionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("CurrentDefaultVersion"))
  {
    m_currentDefaultVersion = jsonValue.GetString("CurrentDefaultVersion");

  }



  return *this;
}
