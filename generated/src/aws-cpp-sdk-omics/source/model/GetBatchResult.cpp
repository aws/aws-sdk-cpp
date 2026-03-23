/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/omics/model/GetBatchResult.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBatchResult::GetBatchResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetBatchResult& GetBatchResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("uuid")) {
    m_uuid = jsonValue.GetString("uuid");
    m_uuidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = BatchStatusMapper::GetBatchStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalRuns")) {
    m_totalRuns = jsonValue.GetInteger("totalRuns");
    m_totalRunsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultRunSetting")) {
    m_defaultRunSetting = jsonValue.GetObject("defaultRunSetting");
    m_defaultRunSettingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("submissionSummary")) {
    m_submissionSummary = jsonValue.GetObject("submissionSummary");
    m_submissionSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("runSummary")) {
    m_runSummary = jsonValue.GetObject("runSummary");
    m_runSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("submittedTime")) {
    m_submittedTime = jsonValue.GetString("submittedTime");
    m_submittedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("processedTime")) {
    m_processedTime = jsonValue.GetString("processedTime");
    m_processedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedTime")) {
    m_failedTime = jsonValue.GetString("failedTime");
    m_failedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureReason")) {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
