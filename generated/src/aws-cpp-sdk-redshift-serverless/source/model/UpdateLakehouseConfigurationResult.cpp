/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/redshift-serverless/model/UpdateLakehouseConfigurationResult.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateLakehouseConfigurationResult::UpdateLakehouseConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

UpdateLakehouseConfigurationResult& UpdateLakehouseConfigurationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("catalogArn")) {
    m_catalogArn = jsonValue.GetString("catalogArn");
    m_catalogArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lakehouseIdcApplicationArn")) {
    m_lakehouseIdcApplicationArn = jsonValue.GetString("lakehouseIdcApplicationArn");
    m_lakehouseIdcApplicationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lakehouseRegistrationStatus")) {
    m_lakehouseRegistrationStatus = jsonValue.GetString("lakehouseRegistrationStatus");
    m_lakehouseRegistrationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namespaceName")) {
    m_namespaceName = jsonValue.GetString("namespaceName");
    m_namespaceNameHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
