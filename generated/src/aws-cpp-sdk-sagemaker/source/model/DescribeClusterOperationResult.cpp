/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/DescribeClusterOperationResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeClusterOperationResult::DescribeClusterOperationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeClusterOperationResult& DescribeClusterOperationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("OperationId")) {
    m_operationId = jsonValue.GetString("OperationId");
    m_operationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClusterArn")) {
    m_clusterArn = jsonValue.GetString("ClusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = ClusterOperationTypeMapper::GetClusterOperationTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ClusterOperationStatusMapper::GetClusterOperationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScalingDetails")) {
    Aws::Utils::Array<JsonView> scalingDetailsJsonList = jsonValue.GetArray("ScalingDetails");
    for (unsigned scalingDetailsIndex = 0; scalingDetailsIndex < scalingDetailsJsonList.GetLength(); ++scalingDetailsIndex) {
      m_scalingDetails.push_back(scalingDetailsJsonList[scalingDetailsIndex].AsObject());
    }
    m_scalingDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeepHealthCheckDetails")) {
    Aws::Utils::Array<JsonView> deepHealthCheckDetailsJsonList = jsonValue.GetArray("DeepHealthCheckDetails");
    for (unsigned deepHealthCheckDetailsIndex = 0; deepHealthCheckDetailsIndex < deepHealthCheckDetailsJsonList.GetLength();
         ++deepHealthCheckDetailsIndex) {
      m_deepHealthCheckDetails.push_back(deepHealthCheckDetailsJsonList[deepHealthCheckDetailsIndex].AsObject());
    }
    m_deepHealthCheckDetailsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
