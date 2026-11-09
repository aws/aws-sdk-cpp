/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mediaconnect/model/BatchGetSourceEndpointResult.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetSourceEndpointResult::BatchGetSourceEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchGetSourceEndpointResult& BatchGetSourceEndpointResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("sourceEndpoints")) {
    Aws::Utils::Array<JsonView> sourceEndpointsJsonList = jsonValue.GetArray("sourceEndpoints");
    for (unsigned sourceEndpointsIndex = 0; sourceEndpointsIndex < sourceEndpointsJsonList.GetLength(); ++sourceEndpointsIndex) {
      m_sourceEndpoints.push_back(sourceEndpointsJsonList[sourceEndpointsIndex].AsObject());
    }
    m_sourceEndpointsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errors")) {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for (unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex) {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
