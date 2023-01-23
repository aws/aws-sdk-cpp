/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListAnswersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAnswersResult::ListAnswersResult() : 
    m_milestoneNumber(0)
{
}

ListAnswersResult::ListAnswersResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_milestoneNumber(0)
{
  *this = result;
}

ListAnswersResult& ListAnswersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WorkloadId"))
  {
    m_workloadId = jsonValue.GetString("WorkloadId");

  }

  if(jsonValue.ValueExists("MilestoneNumber"))
  {
    m_milestoneNumber = jsonValue.GetInteger("MilestoneNumber");

  }

  if(jsonValue.ValueExists("LensAlias"))
  {
    m_lensAlias = jsonValue.GetString("LensAlias");

  }

  if(jsonValue.ValueExists("LensArn"))
  {
    m_lensArn = jsonValue.GetString("LensArn");

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



  return *this;
}
