/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sso-admin/model/DescribeRegionResult.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRegionResult::DescribeRegionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeRegionResult& DescribeRegionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_responseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("RegionName")) {
    m_regionName = jsonValue.GetString("RegionName");
    m_regionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = RegionStatusMapper::GetRegionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AddedDate")) {
    m_addedDate = jsonValue.GetDouble("AddedDate");
    m_addedDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsPrimaryRegion")) {
    m_isPrimaryRegion = jsonValue.GetBool("IsPrimaryRegion");
    m_isPrimaryRegionHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
