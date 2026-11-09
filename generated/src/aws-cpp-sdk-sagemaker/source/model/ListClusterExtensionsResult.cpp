/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/ListClusterExtensionsResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListClusterExtensionsResult::ListClusterExtensionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListClusterExtensionsResult& ListClusterExtensionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Extensions")) {
    Aws::Utils::Array<JsonView> extensionsJsonList = jsonValue.GetArray("Extensions");
    for (unsigned extensionsIndex = 0; extensionsIndex < extensionsJsonList.GetLength(); ++extensionsIndex) {
      m_extensions.push_back(extensionsJsonList[extensionsIndex].AsObject());
    }
    m_extensionsHasBeenSet = true;
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
