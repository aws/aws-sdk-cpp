/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/ListXssMatchSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListXssMatchSetsResult::ListXssMatchSetsResult()
{
}

ListXssMatchSetsResult::ListXssMatchSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListXssMatchSetsResult& ListXssMatchSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");

  }

  if(jsonValue.ValueExists("XssMatchSets"))
  {
    Aws::Utils::Array<JsonView> xssMatchSetsJsonList = jsonValue.GetArray("XssMatchSets");
    for(unsigned xssMatchSetsIndex = 0; xssMatchSetsIndex < xssMatchSetsJsonList.GetLength(); ++xssMatchSetsIndex)
    {
      m_xssMatchSets.push_back(xssMatchSetsJsonList[xssMatchSetsIndex].AsObject());
    }
  }



  return *this;
}
