﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/TranslateTextResult.h>
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

TranslateTextResult::TranslateTextResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

TranslateTextResult& TranslateTextResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TranslatedText"))
  {
    m_translatedText = jsonValue.GetString("TranslatedText");
    m_translatedTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceLanguageCode"))
  {
    m_sourceLanguageCode = jsonValue.GetString("SourceLanguageCode");
    m_sourceLanguageCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetLanguageCode"))
  {
    m_targetLanguageCode = jsonValue.GetString("TargetLanguageCode");
    m_targetLanguageCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppliedTerminologies"))
  {
    Aws::Utils::Array<JsonView> appliedTerminologiesJsonList = jsonValue.GetArray("AppliedTerminologies");
    for(unsigned appliedTerminologiesIndex = 0; appliedTerminologiesIndex < appliedTerminologiesJsonList.GetLength(); ++appliedTerminologiesIndex)
    {
      m_appliedTerminologies.push_back(appliedTerminologiesJsonList[appliedTerminologiesIndex].AsObject());
    }
    m_appliedTerminologiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppliedSettings"))
  {
    m_appliedSettings = jsonValue.GetObject("AppliedSettings");
    m_appliedSettingsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
