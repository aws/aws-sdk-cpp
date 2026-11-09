/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mediaconnect/model/DisconnectEndpointsResult.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisconnectEndpointsResult::DisconnectEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DisconnectEndpointsResult& DisconnectEndpointsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("destinationEndpointArn")) {
    m_destinationEndpointArn = jsonValue.GetString("destinationEndpointArn");
    m_destinationEndpointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationEndpointName")) {
    m_destinationEndpointName = jsonValue.GetString("destinationEndpointName");
    m_destinationEndpointNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceEndpointArn")) {
    m_sourceEndpointArn = jsonValue.GetString("sourceEndpointArn");
    m_sourceEndpointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceEndpointName")) {
    m_sourceEndpointName = jsonValue.GetString("sourceEndpointName");
    m_sourceEndpointNameHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
