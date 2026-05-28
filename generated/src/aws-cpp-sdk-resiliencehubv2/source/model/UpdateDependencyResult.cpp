/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/resiliencehubv2/model/UpdateDependencyResult.h>

#include <utility>

using namespace Aws::resiliencehubv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateDependencyResult::UpdateDependencyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateDependencyResult& UpdateDependencyResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("dependencyId")) {
    m_dependencyId = jsonValue.GetString("dependencyId");
    m_dependencyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dependencyName")) {
    m_dependencyName = jsonValue.GetString("dependencyName");
    m_dependencyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("location")) {
    m_location = jsonValue.GetString("location");
    m_locationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("criticality")) {
    m_criticality = DependencyCriticalityMapper::GetDependencyCriticalityForName(jsonValue.GetString("criticality"));
    m_criticalityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("comment")) {
    m_comment = jsonValue.GetString("comment");
    m_commentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("provider")) {
    m_provider = jsonValue.GetString("provider");
    m_providerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
