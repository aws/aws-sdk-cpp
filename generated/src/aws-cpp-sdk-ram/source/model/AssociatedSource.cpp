/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ram/model/AssociatedSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RAM {
namespace Model {

AssociatedSource::AssociatedSource(JsonView jsonValue) { *this = jsonValue; }

AssociatedSource& AssociatedSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceShareArn")) {
    m_resourceShareArn = jsonValue.GetString("resourceShareArn");
    m_resourceShareArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceId")) {
    m_sourceId = jsonValue.GetString("sourceId");
    m_sourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceType")) {
    m_sourceType = jsonValue.GetString("sourceType");
    m_sourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusMessage")) {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue AssociatedSource::Jsonize() const {
  JsonValue payload;

  if (m_resourceShareArnHasBeenSet) {
    payload.WithString("resourceShareArn", m_resourceShareArn);
  }

  if (m_sourceIdHasBeenSet) {
    payload.WithString("sourceId", m_sourceId);
  }

  if (m_sourceTypeHasBeenSet) {
    payload.WithString("sourceType", m_sourceType);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", m_status);
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("statusMessage", m_statusMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace RAM
}  // namespace Aws
