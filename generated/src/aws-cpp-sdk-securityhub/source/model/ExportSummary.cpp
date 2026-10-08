/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/ExportSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

ExportSummary::ExportSummary(JsonView jsonValue) { *this = jsonValue; }

ExportSummary& ExportSummary::operator=(JsonView jsonValue) {
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
  return *this;
}

JsonValue ExportSummary::Jsonize() const {
  JsonValue payload;

  if (m_exportJobIdHasBeenSet) {
    payload.WithString("ExportJobId", m_exportJobId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ExportStatusMapper::GetNameForExportStatus(m_status));
  }

  if (m_dataTypeHasBeenSet) {
    payload.WithString("DataType", ExportDataTypeMapper::GetNameForExportDataType(m_dataType));
  }

  if (m_outputConfigurationHasBeenSet) {
    payload.WithObject("OutputConfiguration", m_outputConfiguration.Jsonize());
  }

  if (m_scopesHasBeenSet) {
    payload.WithObject("Scopes", m_scopes.Jsonize());
  }

  if (m_destinationHasBeenSet) {
    payload.WithObject("Destination", m_destination.Jsonize());
  }

  if (m_failureCodeHasBeenSet) {
    payload.WithString("FailureCode", ExportFailureCodeMapper::GetNameForExportFailureCode(m_failureCode));
  }

  if (m_failureMessageHasBeenSet) {
    payload.WithString("FailureMessage", m_failureMessage);
  }

  if (m_startedAtHasBeenSet) {
    payload.WithString("StartedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endedAtHasBeenSet) {
    payload.WithString("EndedAt", m_endedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
