/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/route53globalresolver/model/ListManagedFirewallDomainListsResult.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListManagedFirewallDomainListsResult::ListManagedFirewallDomainListsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListManagedFirewallDomainListsResult& ListManagedFirewallDomainListsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("managedFirewallDomainLists")) {
    Aws::Utils::Array<JsonView> managedFirewallDomainListsJsonList = jsonValue.GetArray("managedFirewallDomainLists");
    for (unsigned managedFirewallDomainListsIndex = 0; managedFirewallDomainListsIndex < managedFirewallDomainListsJsonList.GetLength();
         ++managedFirewallDomainListsIndex) {
      m_managedFirewallDomainLists.push_back(managedFirewallDomainListsJsonList[managedFirewallDomainListsIndex].AsObject());
    }
    m_managedFirewallDomainListsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
