/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/opensearch/model/DescribeDomainReplicationResult.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDomainReplicationResult::DescribeDomainReplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeDomainReplicationResult& DescribeDomainReplicationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("DomainArn")) {
    m_domainArn = jsonValue.GetString("DomainArn");
    m_domainArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Role")) {
    m_role = ReplicationRoleMapper::GetReplicationRoleForName(jsonValue.GetString("Role"));
    m_roleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Peers")) {
    Aws::Utils::Array<JsonView> peersJsonList = jsonValue.GetArray("Peers");
    for (unsigned peersIndex = 0; peersIndex < peersJsonList.GetLength(); ++peersIndex) {
      m_peers.push_back(peersJsonList[peersIndex].AsObject());
    }
    m_peersHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
