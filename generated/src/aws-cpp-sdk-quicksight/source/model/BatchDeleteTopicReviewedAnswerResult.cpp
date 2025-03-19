/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BatchDeleteTopicReviewedAnswerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteTopicReviewedAnswerResult::BatchDeleteTopicReviewedAnswerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDeleteTopicReviewedAnswerResult& BatchDeleteTopicReviewedAnswerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TopicId"))
  {
    m_topicId = jsonValue.GetString("TopicId");
    m_topicIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TopicArn"))
  {
    m_topicArn = jsonValue.GetString("TopicArn");
    m_topicArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SucceededAnswers"))
  {
    Aws::Utils::Array<JsonView> succeededAnswersJsonList = jsonValue.GetArray("SucceededAnswers");
    for(unsigned succeededAnswersIndex = 0; succeededAnswersIndex < succeededAnswersJsonList.GetLength(); ++succeededAnswersIndex)
    {
      m_succeededAnswers.push_back(succeededAnswersJsonList[succeededAnswersIndex].AsObject());
    }
    m_succeededAnswersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvalidAnswers"))
  {
    Aws::Utils::Array<JsonView> invalidAnswersJsonList = jsonValue.GetArray("InvalidAnswers");
    for(unsigned invalidAnswersIndex = 0; invalidAnswersIndex < invalidAnswersJsonList.GetLength(); ++invalidAnswersIndex)
    {
      m_invalidAnswers.push_back(invalidAnswersJsonList[invalidAnswersIndex].AsObject());
    }
    m_invalidAnswersHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  m_status = static_cast<int>(result.GetResponseCode());
  m_statusHasBeenSet = true;
  return *this;
}
