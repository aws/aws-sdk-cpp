/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mgn/model/UpdateLaunchConfigurationDefaultsResult.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateLaunchConfigurationDefaultsResult::UpdateLaunchConfigurationDefaultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

UpdateLaunchConfigurationDefaultsResult& UpdateLaunchConfigurationDefaultsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("sourceServerID")) {
    m_sourceServerID = jsonValue.GetString("sourceServerID");
    m_sourceServerIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("smallVolumeMaxSize")) {
    m_smallVolumeMaxSize = jsonValue.GetInt64("smallVolumeMaxSize");
    m_smallVolumeMaxSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("smallVolumeConfiguration")) {
    m_smallVolumeConfiguration = jsonValue.GetObject("smallVolumeConfiguration");
    m_smallVolumeConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("largeVolumeConfiguration")) {
    m_largeVolumeConfiguration = jsonValue.GetObject("largeVolumeConfiguration");
    m_largeVolumeConfigurationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
