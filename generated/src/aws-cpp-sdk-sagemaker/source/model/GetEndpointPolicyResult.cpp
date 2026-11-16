/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/GetEndpointPolicyResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEndpointPolicyResult::GetEndpointPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetEndpointPolicyResult& GetEndpointPolicyResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("EndpointName")) {
    m_endpointName = jsonValue.GetString("EndpointName");
    m_endpointNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndpointArn")) {
    m_endpointArn = jsonValue.GetString("EndpointArn");
    m_endpointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourcePolicy")) {
    m_resourcePolicy = jsonValue.GetString("ResourcePolicy");
    m_resourcePolicyHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
