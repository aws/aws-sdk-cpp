/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/s3files/model/ListFileSystemsResult.h>

#include <utility>

using namespace Aws::S3Files::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFileSystemsResult::ListFileSystemsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListFileSystemsResult& ListFileSystemsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fileSystems")) {
    Aws::Utils::Array<JsonView> fileSystemsJsonList = jsonValue.GetArray("fileSystems");
    for (unsigned fileSystemsIndex = 0; fileSystemsIndex < fileSystemsJsonList.GetLength(); ++fileSystemsIndex) {
      m_fileSystems.push_back(fileSystemsJsonList[fileSystemsIndex].AsObject());
    }
    m_fileSystemsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
