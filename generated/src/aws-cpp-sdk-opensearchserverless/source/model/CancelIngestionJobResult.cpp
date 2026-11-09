/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/opensearchserverless/model/CancelIngestionJobResult.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelIngestionJobResult::CancelIngestionJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CancelIngestionJobResult& CancelIngestionJobResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ingestionJobId")) {
    m_ingestionJobId = jsonValue.GetString("ingestionJobId");
    m_ingestionJobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("collectionId")) {
    m_collectionId = jsonValue.GetString("collectionId");
    m_collectionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ingestionJobName")) {
    m_ingestionJobName = jsonValue.GetString("ingestionJobName");
    m_ingestionJobNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = IngestionJobStatusMapper::GetIngestionJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
