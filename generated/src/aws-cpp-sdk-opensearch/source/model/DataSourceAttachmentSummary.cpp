/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/DataSourceAttachmentSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

DataSourceAttachmentSummary::DataSourceAttachmentSummary(JsonView jsonValue) { *this = jsonValue; }

DataSourceAttachmentSummary& DataSourceAttachmentSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attachmentId")) {
    m_attachmentId = jsonValue.GetString("attachmentId");
    m_attachmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataSourceArn")) {
    m_dataSourceArn = jsonValue.GetString("dataSourceArn");
    m_dataSourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DataSourceAttachmentStatusMapper::GetDataSourceAttachmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSourceAttachmentSummary::Jsonize() const {
  JsonValue payload;

  if (m_attachmentIdHasBeenSet) {
    payload.WithString("attachmentId", m_attachmentId);
  }

  if (m_dataSourceArnHasBeenSet) {
    payload.WithString("dataSourceArn", m_dataSourceArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DataSourceAttachmentStatusMapper::GetNameForDataSourceAttachmentStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
