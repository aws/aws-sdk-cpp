/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/observabilityadmin/model/GetConnectorTelemetrySetupResult.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConnectorTelemetrySetupResult::GetConnectorTelemetrySetupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetConnectorTelemetrySetupResult& GetConnectorTelemetrySetupResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Artifacts")) {
    Aws::Utils::Array<JsonView> artifactsJsonList = jsonValue.GetArray("Artifacts");
    for (unsigned artifactsIndex = 0; artifactsIndex < artifactsJsonList.GetLength(); ++artifactsIndex) {
      m_artifacts.push_back(artifactsJsonList[artifactsIndex].AsObject());
    }
    m_artifactsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequiredPermissionsToApply")) {
    Aws::Utils::Array<JsonView> requiredPermissionsToApplyJsonList = jsonValue.GetArray("RequiredPermissionsToApply");
    for (unsigned requiredPermissionsToApplyIndex = 0; requiredPermissionsToApplyIndex < requiredPermissionsToApplyJsonList.GetLength();
         ++requiredPermissionsToApplyIndex) {
      m_requiredPermissionsToApply.push_back(requiredPermissionsToApplyJsonList[requiredPermissionsToApplyIndex].AsString());
    }
    m_requiredPermissionsToApplyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Format")) {
    m_format = SetupFormatMapper::GetSetupFormatForName(jsonValue.GetString("Format"));
    m_formatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Provider")) {
    m_provider = ConnectorProviderMapper::GetConnectorProviderForName(jsonValue.GetString("Provider"));
    m_providerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ManifestVersion")) {
    m_manifestVersion = jsonValue.GetInt64("ManifestVersion");
    m_manifestVersionHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
