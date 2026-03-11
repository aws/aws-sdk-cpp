/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/simpledbv2/model/ExportSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SimpleDBv2 {
namespace Model {

ExportSummary::ExportSummary(JsonView jsonValue) { *this = jsonValue; }

ExportSummary& ExportSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("exportArn")) {
    m_exportArn = jsonValue.GetString("exportArn");
    m_exportArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exportStatus")) {
    m_exportStatus = ExportStatusMapper::GetExportStatusForName(jsonValue.GetString("exportStatus"));
    m_exportStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestedAt")) {
    m_requestedAt = jsonValue.GetDouble("requestedAt");
    m_requestedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainName")) {
    m_domainName = jsonValue.GetString("domainName");
    m_domainNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportSummary::Jsonize() const {
  JsonValue payload;

  if (m_exportArnHasBeenSet) {
    payload.WithString("exportArn", m_exportArn);
  }

  if (m_exportStatusHasBeenSet) {
    payload.WithString("exportStatus", ExportStatusMapper::GetNameForExportStatus(m_exportStatus));
  }

  if (m_requestedAtHasBeenSet) {
    payload.WithDouble("requestedAt", m_requestedAt.SecondsWithMSPrecision());
  }

  if (m_domainNameHasBeenSet) {
    payload.WithString("domainName", m_domainName);
  }

  return payload;
}

}  // namespace Model
}  // namespace SimpleDBv2
}  // namespace Aws
