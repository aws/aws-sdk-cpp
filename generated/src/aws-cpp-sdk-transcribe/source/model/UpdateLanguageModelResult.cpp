/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/transcribe/model/UpdateLanguageModelResult.h>

#include <utility>

using namespace Aws::TranscribeService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateLanguageModelResult::UpdateLanguageModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateLanguageModelResult& UpdateLanguageModelResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ModelName")) {
    m_modelName = jsonValue.GetString("ModelName");
    m_modelNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModelStatus")) {
    m_modelStatus = ModelStatusMapper::GetModelStatusForName(jsonValue.GetString("ModelStatus"));
    m_modelStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
