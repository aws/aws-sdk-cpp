/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/ListClusterExtensionVersionsResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListClusterExtensionVersionsResult::ListClusterExtensionVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListClusterExtensionVersionsResult& ListClusterExtensionVersionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ExtensionVersions")) {
    Aws::Utils::Array<JsonView> extensionVersionsJsonList = jsonValue.GetArray("ExtensionVersions");
    for (unsigned extensionVersionsIndex = 0; extensionVersionsIndex < extensionVersionsJsonList.GetLength(); ++extensionVersionsIndex) {
      m_extensionVersions.push_back(extensionVersionsJsonList[extensionVersionsIndex].AsObject());
    }
    m_extensionVersionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
