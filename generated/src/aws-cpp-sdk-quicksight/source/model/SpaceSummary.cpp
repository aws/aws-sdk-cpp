/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SpaceSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SpaceSummary::SpaceSummary(JsonView jsonValue) { *this = jsonValue; }

SpaceSummary& SpaceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("spaceId")) {
    m_spaceId = jsonValue.GetString("spaceId");
    m_spaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spaceArn")) {
    m_spaceArn = jsonValue.GetString("spaceArn");
    m_spaceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("consumedSourceSize")) {
    m_consumedSourceSize = jsonValue.GetInt64("consumedSourceSize");
    m_consumedSourceSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("consumedSourceDocCount")) {
    m_consumedSourceDocCount = jsonValue.GetInteger("consumedSourceDocCount");
    m_consumedSourceDocCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdByArn")) {
    m_createdByArn = jsonValue.GetString("createdByArn");
    m_createdByArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourcesCount")) {
    m_resourcesCount = jsonValue.GetInteger("resourcesCount");
    m_resourcesCountHasBeenSet = true;
  }
  return *this;
}

JsonValue SpaceSummary::Jsonize() const {
  JsonValue payload;

  if (m_spaceIdHasBeenSet) {
    payload.WithString("spaceId", m_spaceId);
  }

  if (m_spaceArnHasBeenSet) {
    payload.WithString("spaceArn", m_spaceArn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_consumedSourceSizeHasBeenSet) {
    payload.WithInt64("consumedSourceSize", m_consumedSourceSize);
  }

  if (m_consumedSourceDocCountHasBeenSet) {
    payload.WithInteger("consumedSourceDocCount", m_consumedSourceDocCount);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("createdBy", m_createdBy);
  }

  if (m_createdByArnHasBeenSet) {
    payload.WithString("createdByArn", m_createdByArn);
  }

  if (m_resourcesCountHasBeenSet) {
    payload.WithInteger("resourcesCount", m_resourcesCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
