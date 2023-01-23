/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/GetSqlInjectionMatchSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAFRegional::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSqlInjectionMatchSetResult::GetSqlInjectionMatchSetResult()
{
}

GetSqlInjectionMatchSetResult::GetSqlInjectionMatchSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSqlInjectionMatchSetResult& GetSqlInjectionMatchSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SqlInjectionMatchSet"))
  {
    m_sqlInjectionMatchSet = jsonValue.GetObject("SqlInjectionMatchSet");

  }



  return *this;
}
