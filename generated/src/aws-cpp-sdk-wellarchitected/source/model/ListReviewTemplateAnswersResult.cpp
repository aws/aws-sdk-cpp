/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListReviewTemplateAnswersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReviewTemplateAnswersResult::ListReviewTemplateAnswersResult()
{
}

ListReviewTemplateAnswersResult::ListReviewTemplateAnswersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReviewTemplateAnswersResult& ListReviewTemplateAnswersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TemplateArn"))
  {
    m_templateArn = jsonValue.GetString("TemplateArn");

  }

  if(jsonValue.ValueExists("LensAlias"))
  {
    m_lensAlias = jsonValue.GetString("LensAlias");

  }

  if(jsonValue.ValueExists("AnswerSummaries"))
  {
    Aws::Utils::Array<JsonView> answerSummariesJsonList = jsonValue.GetArray("AnswerSummaries");
    for(unsigned answerSummariesIndex = 0; answerSummariesIndex < answerSummariesJsonList.GetLength(); ++answerSummariesIndex)
    {
      m_answerSummaries.push_back(answerSummariesJsonList[answerSummariesIndex].AsObject());
    }
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
