/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/ListRegexPatternSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRegexPatternSetsResult::ListRegexPatternSetsResult()
{
}

ListRegexPatternSetsResult::ListRegexPatternSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRegexPatternSetsResult& ListRegexPatternSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }

  if(jsonValue.ValueExists("RegexPatternSets"))
  {
    Aws::Utils::Array<JsonView> regexPatternSetsJsonList = jsonValue.GetArray("RegexPatternSets");
    for(unsigned regexPatternSetsIndex = 0; regexPatternSetsIndex < regexPatternSetsJsonList.GetLength(); ++regexPatternSetsIndex)
    {
      m_regexPatternSets.push_back(regexPatternSetsJsonList[regexPatternSetsIndex].AsObject());
    }
  }



  return *this;
}
