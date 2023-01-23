/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/ListLanguageModelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLanguageModelsResult::ListLanguageModelsResult()
{
}

ListLanguageModelsResult::ListLanguageModelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLanguageModelsResult& ListLanguageModelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Models"))
  {
    Aws::Utils::Array<JsonView> modelsJsonList = jsonValue.GetArray("Models");
    for(unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex)
    {
      m_models.push_back(modelsJsonList[modelsIndex].AsObject());
    }
  }



  return *this;
}
