/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/BatchGetCodeReviewsResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetCodeReviewsResult::BatchGetCodeReviewsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchGetCodeReviewsResult& BatchGetCodeReviewsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("codeReviews")) {
    Aws::Utils::Array<JsonView> codeReviewsJsonList = jsonValue.GetArray("codeReviews");
    for (unsigned codeReviewsIndex = 0; codeReviewsIndex < codeReviewsJsonList.GetLength(); ++codeReviewsIndex) {
      m_codeReviews.push_back(codeReviewsJsonList[codeReviewsIndex].AsObject());
    }
    m_codeReviewsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("notFound")) {
    Aws::Utils::Array<JsonView> notFoundJsonList = jsonValue.GetArray("notFound");
    for (unsigned notFoundIndex = 0; notFoundIndex < notFoundJsonList.GetLength(); ++notFoundIndex) {
      m_notFound.push_back(notFoundJsonList[notFoundIndex].AsString());
    }
    m_notFoundHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
