/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/ListRegexMatchSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRegexMatchSetsResult::ListRegexMatchSetsResult()
{
}

ListRegexMatchSetsResult::ListRegexMatchSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRegexMatchSetsResult& ListRegexMatchSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }

  if(jsonValue.ValueExists("RegexMatchSets"))
  {
    Aws::Utils::Array<JsonView> regexMatchSetsJsonList = jsonValue.GetArray("RegexMatchSets");
    for(unsigned regexMatchSetsIndex = 0; regexMatchSetsIndex < regexMatchSetsJsonList.GetLength(); ++regexMatchSetsIndex)
    {
      m_regexMatchSets.push_back(regexMatchSetsJsonList[regexMatchSetsIndex].AsObject());
    }
  }



  return *this;
}
