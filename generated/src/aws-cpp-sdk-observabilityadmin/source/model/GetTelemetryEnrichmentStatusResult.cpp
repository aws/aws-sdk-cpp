﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/observabilityadmin/model/GetTelemetryEnrichmentStatusResult.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTelemetryEnrichmentStatusResult::GetTelemetryEnrichmentStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetTelemetryEnrichmentStatusResult& GetTelemetryEnrichmentStatusResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Status")) {
    m_status = TelemetryEnrichmentStatusMapper::GetTelemetryEnrichmentStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AwsResourceExplorerManagedViewArn")) {
    m_awsResourceExplorerManagedViewArn = jsonValue.GetString("AwsResourceExplorerManagedViewArn");
    m_awsResourceExplorerManagedViewArnHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
