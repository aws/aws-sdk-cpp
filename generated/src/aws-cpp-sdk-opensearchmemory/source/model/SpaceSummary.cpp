/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/SpaceSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

SpaceSummary::SpaceSummary(JsonView jsonValue) { *this = jsonValue; }

SpaceSummary& SpaceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("spaceId")) {
    m_spaceId = jsonValue.GetString("spaceId");
    m_spaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = SpaceStatusMapper::GetSpaceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue SpaceSummary::Jsonize() const {
  JsonValue payload;

  if (m_spaceIdHasBeenSet) {
    payload.WithString("spaceId", m_spaceId);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", SpaceStatusMapper::GetNameForSpaceStatus(m_status));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
