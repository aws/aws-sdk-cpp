/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/odb/model/ListExascaleDbStorageVaultsResult.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListExascaleDbStorageVaultsResult::ListExascaleDbStorageVaultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListExascaleDbStorageVaultsResult& ListExascaleDbStorageVaultsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exascaleDbStorageVaults")) {
    Aws::Utils::Array<JsonView> exascaleDbStorageVaultsJsonList = jsonValue.GetArray("exascaleDbStorageVaults");
    for (unsigned exascaleDbStorageVaultsIndex = 0; exascaleDbStorageVaultsIndex < exascaleDbStorageVaultsJsonList.GetLength();
         ++exascaleDbStorageVaultsIndex) {
      m_exascaleDbStorageVaults.push_back(exascaleDbStorageVaultsJsonList[exascaleDbStorageVaultsIndex].AsObject());
    }
    m_exascaleDbStorageVaultsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
