﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/s3vectors/model/QueryVectorsResult.h>

#include <utility>

using namespace Aws::S3Vectors::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

QueryVectorsResult::QueryVectorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

QueryVectorsResult& QueryVectorsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("vectors")) {
    Aws::Utils::Array<JsonView> vectorsJsonList = jsonValue.GetArray("vectors");
    for (unsigned vectorsIndex = 0; vectorsIndex < vectorsJsonList.GetLength(); ++vectorsIndex) {
      m_vectors.push_back(vectorsJsonList[vectorsIndex].AsObject());
    }
    m_vectorsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
