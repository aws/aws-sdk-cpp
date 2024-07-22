/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ListTopicReviewedAnswersResult.h>
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

ListTopicReviewedAnswersResult::ListTopicReviewedAnswersResult() : 
    m_status(0)
{
}

ListTopicReviewedAnswersResult::ListTopicReviewedAnswersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : ListTopicReviewedAnswersResult()
{
  *this = result;
}

ListTopicReviewedAnswersResult& ListTopicReviewedAnswersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TopicId"))
  {
    m_topicId = jsonValue.GetString("TopicId");

  }

  if(jsonValue.ValueExists("TopicArn"))
  {
    m_topicArn = jsonValue.GetString("TopicArn");

  }

  if(jsonValue.ValueExists("Answers"))
  {
    Aws::Utils::Array<JsonView> answersJsonList = jsonValue.GetArray("Answers");
    for(unsigned answersIndex = 0; answersIndex < answersJsonList.GetLength(); ++answersIndex)
    {
      m_answers.push_back(answersJsonList[answersIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
