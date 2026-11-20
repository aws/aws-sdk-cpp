/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/DescribeGlobalInferenceGatewayResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeGlobalInferenceGatewayResult::DescribeGlobalInferenceGatewayResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

DescribeGlobalInferenceGatewayResult& DescribeGlobalInferenceGatewayResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionRoleArn")) {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = GlobalInferenceGatewayStatusMapper::GetGlobalInferenceGatewayStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndpointUrl")) {
    m_endpointUrl = jsonValue.GetString("EndpointUrl");
    m_endpointUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VpcEndpointServiceName")) {
    m_vpcEndpointServiceName = jsonValue.GetString("VpcEndpointServiceName");
    m_vpcEndpointServiceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Routing")) {
    m_routing = jsonValue.GetObject("Routing");
    m_routingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
