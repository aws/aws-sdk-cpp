/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeSupportedLanguagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSupportedLanguagesResult::DescribeSupportedLanguagesResult()
{
}

DescribeSupportedLanguagesResult::DescribeSupportedLanguagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSupportedLanguagesResult& DescribeSupportedLanguagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("supportedLanguages"))
  {
    Aws::Utils::Array<JsonView> supportedLanguagesJsonList = jsonValue.GetArray("supportedLanguages");
    for(unsigned supportedLanguagesIndex = 0; supportedLanguagesIndex < supportedLanguagesJsonList.GetLength(); ++supportedLanguagesIndex)
    {
      m_supportedLanguages.push_back(supportedLanguagesJsonList[supportedLanguagesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
