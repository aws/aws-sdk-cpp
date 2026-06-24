/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/BatchGetThreatModelJobsResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetThreatModelJobsResult::BatchGetThreatModelJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchGetThreatModelJobsResult& BatchGetThreatModelJobsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("threatModelJobs")) {
    Aws::Utils::Array<JsonView> threatModelJobsJsonList = jsonValue.GetArray("threatModelJobs");
    for (unsigned threatModelJobsIndex = 0; threatModelJobsIndex < threatModelJobsJsonList.GetLength(); ++threatModelJobsIndex) {
      m_threatModelJobs.push_back(threatModelJobsJsonList[threatModelJobsIndex].AsObject());
    }
    m_threatModelJobsHasBeenSet = true;
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
