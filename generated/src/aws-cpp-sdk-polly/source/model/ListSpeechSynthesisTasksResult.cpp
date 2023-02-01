/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/ListSpeechSynthesisTasksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Polly::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSpeechSynthesisTasksResult::ListSpeechSynthesisTasksResult()
{
}

ListSpeechSynthesisTasksResult::ListSpeechSynthesisTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSpeechSynthesisTasksResult& ListSpeechSynthesisTasksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("SynthesisTasks"))
  {
    Aws::Utils::Array<JsonView> synthesisTasksJsonList = jsonValue.GetArray("SynthesisTasks");
    for(unsigned synthesisTasksIndex = 0; synthesisTasksIndex < synthesisTasksJsonList.GetLength(); ++synthesisTasksIndex)
    {
      m_synthesisTasks.push_back(synthesisTasksJsonList[synthesisTasksIndex].AsObject());
    }
  }



  return *this;
}
