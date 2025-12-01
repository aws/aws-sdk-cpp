/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/route53globalresolver/model/ListHostedZoneAssociationsResult.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListHostedZoneAssociationsResult::ListHostedZoneAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListHostedZoneAssociationsResult& ListHostedZoneAssociationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hostedZoneAssociations")) {
    Aws::Utils::Array<JsonView> hostedZoneAssociationsJsonList = jsonValue.GetArray("hostedZoneAssociations");
    for (unsigned hostedZoneAssociationsIndex = 0; hostedZoneAssociationsIndex < hostedZoneAssociationsJsonList.GetLength();
         ++hostedZoneAssociationsIndex) {
      m_hostedZoneAssociations.push_back(hostedZoneAssociationsJsonList[hostedZoneAssociationsIndex].AsObject());
    }
    m_hostedZoneAssociationsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
