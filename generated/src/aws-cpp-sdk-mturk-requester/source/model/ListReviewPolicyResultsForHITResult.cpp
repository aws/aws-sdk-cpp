/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ListReviewPolicyResultsForHITResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReviewPolicyResultsForHITResult::ListReviewPolicyResultsForHITResult()
{
}

ListReviewPolicyResultsForHITResult::ListReviewPolicyResultsForHITResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReviewPolicyResultsForHITResult& ListReviewPolicyResultsForHITResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HITId"))
  {
    m_hITId = jsonValue.GetString("HITId");

  }

  if(jsonValue.ValueExists("AssignmentReviewPolicy"))
  {
    m_assignmentReviewPolicy = jsonValue.GetObject("AssignmentReviewPolicy");

  }

  if(jsonValue.ValueExists("HITReviewPolicy"))
  {
    m_hITReviewPolicy = jsonValue.GetObject("HITReviewPolicy");

  }

  if(jsonValue.ValueExists("AssignmentReviewReport"))
  {
    m_assignmentReviewReport = jsonValue.GetObject("AssignmentReviewReport");

  }

  if(jsonValue.ValueExists("HITReviewReport"))
  {
    m_hITReviewReport = jsonValue.GetObject("HITReviewReport");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
