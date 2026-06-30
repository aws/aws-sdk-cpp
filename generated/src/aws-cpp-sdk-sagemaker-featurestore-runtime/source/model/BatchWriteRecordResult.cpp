/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchWriteRecordResult.h>

#include <utility>

using namespace Aws::SageMakerFeatureStoreRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchWriteRecordResult::BatchWriteRecordResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchWriteRecordResult& BatchWriteRecordResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Errors")) {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for (unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex) {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UnprocessedEntries")) {
    Aws::Utils::Array<JsonView> unprocessedEntriesJsonList = jsonValue.GetArray("UnprocessedEntries");
    for (unsigned unprocessedEntriesIndex = 0; unprocessedEntriesIndex < unprocessedEntriesJsonList.GetLength();
         ++unprocessedEntriesIndex) {
      m_unprocessedEntries.push_back(unprocessedEntriesJsonList[unprocessedEntriesIndex].AsObject());
    }
    m_unprocessedEntriesHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
