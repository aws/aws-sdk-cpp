/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/networkmanager/model/ListCoreNetworkPrefixListAssociationsResult.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCoreNetworkPrefixListAssociationsResult::ListCoreNetworkPrefixListAssociationsResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListCoreNetworkPrefixListAssociationsResult& ListCoreNetworkPrefixListAssociationsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("PrefixListAssociations")) {
    Aws::Utils::Array<JsonView> prefixListAssociationsJsonList = jsonValue.GetArray("PrefixListAssociations");
    for (unsigned prefixListAssociationsIndex = 0; prefixListAssociationsIndex < prefixListAssociationsJsonList.GetLength();
         ++prefixListAssociationsIndex) {
      m_prefixListAssociations.push_back(prefixListAssociationsJsonList[prefixListAssociationsIndex].AsObject());
    }
    m_prefixListAssociationsHasBeenSet = true;
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
