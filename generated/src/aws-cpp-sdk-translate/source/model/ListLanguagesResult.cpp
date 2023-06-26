﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/ListLanguagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLanguagesResult::ListLanguagesResult() : 
    m_displayLanguageCode(DisplayLanguageCode::NOT_SET)
{
}

ListLanguagesResult::ListLanguagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_displayLanguageCode(DisplayLanguageCode::NOT_SET)
{
  *this = result;
}

ListLanguagesResult& ListLanguagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Languages"))
  {
    Aws::Utils::Array<JsonView> languagesJsonList = jsonValue.GetArray("Languages");
    for(unsigned languagesIndex = 0; languagesIndex < languagesJsonList.GetLength(); ++languagesIndex)
    {
      m_languages.push_back(languagesJsonList[languagesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DisplayLanguageCode"))
  {
    m_displayLanguageCode = DisplayLanguageCodeMapper::GetDisplayLanguageCodeForName(jsonValue.GetString("DisplayLanguageCode"));

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
