/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/GetCallAnalyticsCategoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCallAnalyticsCategoryResult::GetCallAnalyticsCategoryResult()
{
}

GetCallAnalyticsCategoryResult::GetCallAnalyticsCategoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCallAnalyticsCategoryResult& GetCallAnalyticsCategoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CategoryProperties"))
  {
    m_categoryProperties = jsonValue.GetObject("CategoryProperties");

  }



  return *this;
}
