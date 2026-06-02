/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/ListJobSchemaVersionsResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListJobSchemaVersionsResult::ListJobSchemaVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListJobSchemaVersionsResult& ListJobSchemaVersionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobConfigSchemas")) {
    Aws::Utils::Array<JsonView> jobConfigSchemasJsonList = jsonValue.GetArray("JobConfigSchemas");
    for (unsigned jobConfigSchemasIndex = 0; jobConfigSchemasIndex < jobConfigSchemasJsonList.GetLength(); ++jobConfigSchemasIndex) {
      m_jobConfigSchemas.push_back(jobConfigSchemasJsonList[jobConfigSchemasIndex].AsObject());
    }
    m_jobConfigSchemasHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
