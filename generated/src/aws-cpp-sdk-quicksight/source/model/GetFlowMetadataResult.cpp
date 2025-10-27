/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/GetFlowMetadataResult.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFlowMetadataResult::GetFlowMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetFlowMetadataResult& GetFlowMetadataResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FlowId")) {
    m_flowId = jsonValue.GetString("FlowId");
    m_flowIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PublishState")) {
    m_publishState = FlowPublishStateMapper::GetFlowPublishStateForName(jsonValue.GetString("PublishState"));
    m_publishStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UserCount")) {
    m_userCount = jsonValue.GetInteger("UserCount");
    m_userCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RunCount")) {
    m_runCount = jsonValue.GetInteger("RunCount");
    m_runCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  m_status = static_cast<int>(result.GetResponseCode());
  m_statusHasBeenSet = true;
  return *this;
}
