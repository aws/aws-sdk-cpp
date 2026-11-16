/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/DescribeInferenceRouterResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInferenceRouterResult::DescribeInferenceRouterResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeInferenceRouterResult& DescribeInferenceRouterResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("InferenceRouterName")) {
    m_inferenceRouterName = jsonValue.GetString("InferenceRouterName");
    m_inferenceRouterNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InferenceRouterArn")) {
    m_inferenceRouterArn = jsonValue.GetString("InferenceRouterArn");
    m_inferenceRouterArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoutingTargets")) {
    Aws::Utils::Array<JsonView> routingTargetsJsonList = jsonValue.GetArray("RoutingTargets");
    for (unsigned routingTargetsIndex = 0; routingTargetsIndex < routingTargetsJsonList.GetLength(); ++routingTargetsIndex) {
      m_routingTargets.push_back(routingTargetsJsonList[routingTargetsIndex].AsObject());
    }
    m_routingTargetsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = InferenceRouterStatusMapper::GetInferenceRouterStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusReason")) {
    m_statusReason = jsonValue.GetString("StatusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
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
