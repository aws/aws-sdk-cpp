/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/TranslateTextResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TranslateTextResult::TranslateTextResult()
{
}

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

  }

  if(jsonValue.ValueExists("SourceLanguageCode"))
  {
    m_sourceLanguageCode = jsonValue.GetString("SourceLanguageCode");

  }

  if(jsonValue.ValueExists("TargetLanguageCode"))
  {
    m_targetLanguageCode = jsonValue.GetString("TargetLanguageCode");

  }

  if(jsonValue.ValueExists("AppliedTerminologies"))
  {
    Aws::Utils::Array<JsonView> appliedTerminologiesJsonList = jsonValue.GetArray("AppliedTerminologies");
    for(unsigned appliedTerminologiesIndex = 0; appliedTerminologiesIndex < appliedTerminologiesJsonList.GetLength(); ++appliedTerminologiesIndex)
    {
      m_appliedTerminologies.push_back(appliedTerminologiesJsonList[appliedTerminologiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("AppliedSettings"))
  {
    m_appliedSettings = jsonValue.GetObject("AppliedSettings");

  }



  return *this;
}
