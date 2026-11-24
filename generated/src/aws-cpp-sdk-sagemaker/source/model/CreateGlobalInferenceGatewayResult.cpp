/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/CreateGlobalInferenceGatewayResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateGlobalInferenceGatewayResult::CreateGlobalInferenceGatewayResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

CreateGlobalInferenceGatewayResult& CreateGlobalInferenceGatewayResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
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
  if (jsonValue.ValueExists("Status")) {
    m_status = GlobalInferenceGatewayStatusMapper::GetGlobalInferenceGatewayStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionRoleArn")) {
    m_executionRoleArn = jsonValue.GetString("ExecutionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Routing")) {
    m_routing = jsonValue.GetObject("Routing");
    m_routingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Gateways")) {
    Aws::Utils::Array<JsonView> gatewaysJsonList = jsonValue.GetArray("Gateways");
    for (unsigned gatewaysIndex = 0; gatewaysIndex < gatewaysJsonList.GetLength(); ++gatewaysIndex) {
      m_gateways.push_back(gatewaysJsonList[gatewaysIndex].AsObject());
    }
    m_gatewaysHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
