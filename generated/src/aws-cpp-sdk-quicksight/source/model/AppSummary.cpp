/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/AppSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

AppSummary::AppSummary(JsonView jsonValue) { *this = jsonValue; }

AppSummary& AppSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AppId")) {
    m_appId = jsonValue.GetString("AppId");
    m_appIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Visibility")) {
    m_visibility = AppVisibilityMapper::GetAppVisibilityForName(jsonValue.GetString("Visibility"));
    m_visibilityHasBeenSet = true;
  }
  return *this;
}

JsonValue AppSummary::Jsonize() const {
  JsonValue payload;

  if (m_appIdHasBeenSet) {
    payload.WithString("AppId", m_appId);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if (m_visibilityHasBeenSet) {
    payload.WithString("Visibility", AppVisibilityMapper::GetNameForAppVisibility(m_visibility));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
