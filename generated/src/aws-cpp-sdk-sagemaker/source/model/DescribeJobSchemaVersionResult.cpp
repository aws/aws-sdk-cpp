/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/DescribeJobSchemaVersionResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeJobSchemaVersionResult::DescribeJobSchemaVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeJobSchemaVersionResult& DescribeJobSchemaVersionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("JobCategory")) {
    m_jobCategory = JobCategoryMapper::GetJobCategoryForName(jsonValue.GetString("JobCategory"));
    m_jobCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobConfigSchemaVersion")) {
    m_jobConfigSchemaVersion = jsonValue.GetString("JobConfigSchemaVersion");
    m_jobConfigSchemaVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JobConfigSchema")) {
    m_jobConfigSchema = jsonValue.GetString("JobConfigSchema");
    m_jobConfigSchemaHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
