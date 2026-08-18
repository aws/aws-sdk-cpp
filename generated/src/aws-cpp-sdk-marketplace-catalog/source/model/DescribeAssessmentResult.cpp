/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/marketplace-catalog/model/DescribeAssessmentResult.h>

#include <utility>

using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAssessmentResult::DescribeAssessmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeAssessmentResult& DescribeAssessmentResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AssessmentArn")) {
    m_assessmentArn = jsonValue.GetString("AssessmentArn");
    m_assessmentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssessmentId")) {
    m_assessmentId = jsonValue.GetString("AssessmentId");
    m_assessmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FrameworkId")) {
    m_frameworkId = jsonValue.GetString("FrameworkId");
    m_frameworkIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssessmentTargetSummary")) {
    m_assessmentTargetSummary = jsonValue.GetObject("AssessmentTargetSummary");
    m_assessmentTargetSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FrameworkSummary")) {
    m_frameworkSummary = jsonValue.GetObject("FrameworkSummary");
    m_frameworkSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssessmentResult")) {
    m_assessmentResult = AssessmentResultMapper::GetAssessmentResultForName(jsonValue.GetString("AssessmentResult"));
    m_assessmentResultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresAt")) {
    m_expiresAt = jsonValue.GetString("ExpiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ControlAssessments")) {
    Aws::Utils::Array<JsonView> controlAssessmentsJsonList = jsonValue.GetArray("ControlAssessments");
    for (unsigned controlAssessmentsIndex = 0; controlAssessmentsIndex < controlAssessmentsJsonList.GetLength();
         ++controlAssessmentsIndex) {
      m_controlAssessments.push_back(controlAssessmentsJsonList[controlAssessmentsIndex].AsObject());
    }
    m_controlAssessmentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
