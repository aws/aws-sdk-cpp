﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-web/model/IpAccessSettingsSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {

IpAccessSettingsSummary::IpAccessSettingsSummary(JsonView jsonValue) { *this = jsonValue; }

IpAccessSettingsSummary& IpAccessSettingsSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ipAccessSettingsArn")) {
    m_ipAccessSettingsArn = jsonValue.GetString("ipAccessSettingsArn");
    m_ipAccessSettingsArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationDate")) {
    m_creationDate = jsonValue.GetDouble("creationDate");
    m_creationDateHasBeenSet = true;
  }
  return *this;
}

JsonValue IpAccessSettingsSummary::Jsonize() const {
  JsonValue payload;

  if (m_ipAccessSettingsArnHasBeenSet) {
    payload.WithString("ipAccessSettingsArn", m_ipAccessSettingsArn);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_creationDateHasBeenSet) {
    payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
