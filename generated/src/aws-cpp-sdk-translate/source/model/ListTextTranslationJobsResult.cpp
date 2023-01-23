/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/ListTextTranslationJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTextTranslationJobsResult::ListTextTranslationJobsResult()
{
}

ListTextTranslationJobsResult::ListTextTranslationJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTextTranslationJobsResult& ListTextTranslationJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TextTranslationJobPropertiesList"))
  {
    Aws::Utils::Array<JsonView> textTranslationJobPropertiesListJsonList = jsonValue.GetArray("TextTranslationJobPropertiesList");
    for(unsigned textTranslationJobPropertiesListIndex = 0; textTranslationJobPropertiesListIndex < textTranslationJobPropertiesListJsonList.GetLength(); ++textTranslationJobPropertiesListIndex)
    {
      m_textTranslationJobPropertiesList.push_back(textTranslationJobPropertiesListJsonList[textTranslationJobPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
