/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/omics/model/ConfigurationListItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {

ConfigurationListItem::ConfigurationListItem(JsonView jsonValue) { *this = jsonValue; }

ConfigurationListItem& ConfigurationListItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ConfigurationStatusMapper::GetConfigurationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationListItem::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ConfigurationStatusMapper::GetNameForConfigurationStatus(m_status));
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
