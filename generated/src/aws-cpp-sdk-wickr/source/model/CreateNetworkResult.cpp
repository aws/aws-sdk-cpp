/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/CreateNetworkResult.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateNetworkResult::CreateNetworkResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateNetworkResult& CreateNetworkResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("networkId")) {
    m_networkId = jsonValue.GetString("networkId");
    m_networkIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkName")) {
    m_networkName = jsonValue.GetString("networkName");
    m_networkNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionKeyArn")) {
    m_encryptionKeyArn = jsonValue.GetString("encryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
