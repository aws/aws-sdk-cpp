/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityhub/model/GetExportJobV2Result.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetExportJobV2Result::GetExportJobV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetExportJobV2Result& GetExportJobV2Result::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ExportJobId")) {
    m_exportJobId = jsonValue.GetString("ExportJobId");
    m_exportJobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ExportStatusMapper::GetExportStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataType")) {
    m_dataType = ExportDataTypeMapper::GetExportDataTypeForName(jsonValue.GetString("DataType"));
    m_dataTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OutputConfiguration")) {
    m_outputConfiguration = jsonValue.GetObject("OutputConfiguration");
    m_outputConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Scopes")) {
    m_scopes = jsonValue.GetObject("Scopes");
    m_scopesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Destination")) {
    m_destination = jsonValue.GetObject("Destination");
    m_destinationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureCode")) {
    m_failureCode = ExportFailureCodeMapper::GetExportFailureCodeForName(jsonValue.GetString("FailureCode"));
    m_failureCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureMessage")) {
    m_failureMessage = jsonValue.GetString("FailureMessage");
    m_failureMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartedAt")) {
    m_startedAt = jsonValue.GetString("StartedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndedAt")) {
    m_endedAt = jsonValue.GetString("EndedAt");
    m_endedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
