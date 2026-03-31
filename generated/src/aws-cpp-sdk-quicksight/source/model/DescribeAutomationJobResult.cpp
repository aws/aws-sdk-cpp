/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/DescribeAutomationJobResult.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAutomationJobResult::DescribeAutomationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeAutomationJobResult& DescribeAutomationJobResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedAt")) {
    m_startedAt = jsonValue.GetDouble("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndedAt")) {
    m_endedAt = jsonValue.GetDouble("EndedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobStatus")) {
    m_jobStatus = AutomationJobStatusMapper::GetAutomationJobStatusForName(jsonValue.GetString("JobStatus"));
    m_jobStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InputPayload")) {
    m_inputPayload = jsonValue.GetString("InputPayload");
    m_inputPayloadHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OutputPayload")) {
    m_outputPayload = jsonValue.GetString("OutputPayload");
    m_outputPayloadHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
