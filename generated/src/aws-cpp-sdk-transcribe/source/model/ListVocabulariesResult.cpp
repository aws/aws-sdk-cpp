/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/ListVocabulariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVocabulariesResult::ListVocabulariesResult() : 
    m_status(VocabularyState::NOT_SET)
{
}

ListVocabulariesResult::ListVocabulariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(VocabularyState::NOT_SET)
{
  *this = result;
}

ListVocabulariesResult& ListVocabulariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Status"))
  {
    m_status = VocabularyStateMapper::GetVocabularyStateForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Vocabularies"))
  {
    Aws::Utils::Array<JsonView> vocabulariesJsonList = jsonValue.GetArray("Vocabularies");
    for(unsigned vocabulariesIndex = 0; vocabulariesIndex < vocabulariesJsonList.GetLength(); ++vocabulariesIndex)
    {
      m_vocabularies.push_back(vocabulariesJsonList[vocabulariesIndex].AsObject());
    }
  }



  return *this;
}
