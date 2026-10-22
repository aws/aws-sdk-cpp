/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/opensearchserverless/model/DeleteIngestionStreamResult.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteIngestionStreamResult::DeleteIngestionStreamResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DeleteIngestionStreamResult& DeleteIngestionStreamResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ingestionStreamId")) {
    m_ingestionStreamId = jsonValue.GetString("ingestionStreamId");
    m_ingestionStreamIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("collectionId")) {
    m_collectionId = jsonValue.GetString("collectionId");
    m_collectionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ingestionStreamName")) {
    m_ingestionStreamName = jsonValue.GetString("ingestionStreamName");
    m_ingestionStreamNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = IngestionStreamStatusMapper::GetIngestionStreamStatusForName(jsonValue.GetString("status"));
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
