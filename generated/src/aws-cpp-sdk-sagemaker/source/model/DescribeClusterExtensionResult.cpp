/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/DescribeClusterExtensionResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeClusterExtensionResult::DescribeClusterExtensionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeClusterExtensionResult& DescribeClusterExtensionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ExtensionDetails")) {
    m_extensionDetails = jsonValue.GetObject("ExtensionDetails");
    m_extensionDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NodeSummary")) {
    m_nodeSummary = jsonValue.GetObject("NodeSummary");
    m_nodeSummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Health")) {
    m_health = jsonValue.GetObject("Health");
    m_healthHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
