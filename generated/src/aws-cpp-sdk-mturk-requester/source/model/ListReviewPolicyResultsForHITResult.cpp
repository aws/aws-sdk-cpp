/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ListReviewPolicyResultsForHITResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

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
    m_hITIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssignmentReviewPolicy"))
  {
    m_assignmentReviewPolicy = jsonValue.GetObject("AssignmentReviewPolicy");
    m_assignmentReviewPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HITReviewPolicy"))
  {
    m_hITReviewPolicy = jsonValue.GetObject("HITReviewPolicy");
    m_hITReviewPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssignmentReviewReport"))
  {
    m_assignmentReviewReport = jsonValue.GetObject("AssignmentReviewReport");
    m_assignmentReviewReportHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HITReviewReport"))
  {
    m_hITReviewReport = jsonValue.GetObject("HITReviewReport");
    m_hITReviewReportHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
