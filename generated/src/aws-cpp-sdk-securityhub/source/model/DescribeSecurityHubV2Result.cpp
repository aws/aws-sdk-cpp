﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityhub/model/DescribeSecurityHubV2Result.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSecurityHubV2Result::DescribeSecurityHubV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeSecurityHubV2Result& DescribeSecurityHubV2Result::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("HubV2Arn")) {
    m_hubV2Arn = jsonValue.GetString("HubV2Arn");
    m_hubV2ArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubscribedAt")) {
    m_subscribedAt = jsonValue.GetString("SubscribedAt");
    m_subscribedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
