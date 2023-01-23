/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ListManagedRuleSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListManagedRuleSetsResult::ListManagedRuleSetsResult()
{
}

ListManagedRuleSetsResult::ListManagedRuleSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListManagedRuleSetsResult& ListManagedRuleSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }

  if(jsonValue.ValueExists("ManagedRuleSets"))
  {
    Aws::Utils::Array<JsonView> managedRuleSetsJsonList = jsonValue.GetArray("ManagedRuleSets");
    for(unsigned managedRuleSetsIndex = 0; managedRuleSetsIndex < managedRuleSetsJsonList.GetLength(); ++managedRuleSetsIndex)
    {
      m_managedRuleSets.push_back(managedRuleSetsJsonList[managedRuleSetsIndex].AsObject());
    }
  }



  return *this;
}
