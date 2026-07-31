/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/VisualMessageConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

VisualMessageConfiguration::VisualMessageConfiguration(JsonView jsonValue) { *this = jsonValue; }

VisualMessageConfiguration& VisualMessageConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Title")) {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TitleVisibility")) {
    m_titleVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("TitleVisibility"));
    m_titleVisibilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DescriptionVisibility")) {
    m_descriptionVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("DescriptionVisibility"));
    m_descriptionVisibilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LinkText")) {
    m_linkText = jsonValue.GetString("LinkText");
    m_linkTextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LinkUrl")) {
    m_linkUrl = jsonValue.GetString("LinkUrl");
    m_linkUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LinkVisibility")) {
    m_linkVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("LinkVisibility"));
    m_linkVisibilityHasBeenSet = true;
  }
  return *this;
}

JsonValue VisualMessageConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("Title", m_title);
  }

  if (m_titleVisibilityHasBeenSet) {
    payload.WithString("TitleVisibility", VisibilityMapper::GetNameForVisibility(m_titleVisibility));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_descriptionVisibilityHasBeenSet) {
    payload.WithString("DescriptionVisibility", VisibilityMapper::GetNameForVisibility(m_descriptionVisibility));
  }

  if (m_linkTextHasBeenSet) {
    payload.WithString("LinkText", m_linkText);
  }

  if (m_linkUrlHasBeenSet) {
    payload.WithString("LinkUrl", m_linkUrl);
  }

  if (m_linkVisibilityHasBeenSet) {
    payload.WithString("LinkVisibility", VisibilityMapper::GetNameForVisibility(m_linkVisibility));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
