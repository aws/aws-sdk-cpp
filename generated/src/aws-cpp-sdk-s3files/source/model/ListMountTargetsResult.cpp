/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/s3files/model/ListMountTargetsResult.h>

#include <utility>

using namespace Aws::S3Files::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMountTargetsResult::ListMountTargetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListMountTargetsResult& ListMountTargetsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mountTargets")) {
    Aws::Utils::Array<JsonView> mountTargetsJsonList = jsonValue.GetArray("mountTargets");
    for (unsigned mountTargetsIndex = 0; mountTargetsIndex < mountTargetsJsonList.GetLength(); ++mountTargetsIndex) {
      m_mountTargets.push_back(mountTargetsJsonList[mountTargetsIndex].AsObject());
    }
    m_mountTargetsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
