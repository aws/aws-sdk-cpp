/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mediatailor/model/GetFunctionResult.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFunctionResult::GetFunctionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetFunctionResult& GetFunctionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("FunctionId")) {
    m_functionId = jsonValue.GetString("FunctionId");
    m_functionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FunctionType")) {
    m_functionType = FunctionTypeMapper::GetFunctionTypeForName(jsonValue.GetString("FunctionType"));
    m_functionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HttpRequestConfiguration")) {
    m_httpRequestConfiguration = jsonValue.GetObject("HttpRequestConfiguration");
    m_httpRequestConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomOutputConfiguration")) {
    m_customOutputConfiguration = jsonValue.GetObject("CustomOutputConfiguration");
    m_customOutputConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConcurrentExecutorConfiguration")) {
    m_concurrentExecutorConfiguration = jsonValue.GetObject("ConcurrentExecutorConfiguration");
    m_concurrentExecutorConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SequentialExecutorConfiguration")) {
    m_sequentialExecutorConfiguration = jsonValue.GetObject("SequentialExecutorConfiguration");
    m_sequentialExecutorConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VastRequestConfiguration")) {
    m_vastRequestConfiguration = jsonValue.GetObject("VastRequestConfiguration");
    m_vastRequestConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
