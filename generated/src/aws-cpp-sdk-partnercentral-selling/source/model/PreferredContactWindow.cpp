/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/PreferredContactWindow.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

PreferredContactWindow::PreferredContactWindow(JsonView jsonValue) { *this = jsonValue; }

PreferredContactWindow& PreferredContactWindow::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Window")) {
    m_window = ContactWindowMapper::GetContactWindowForName(jsonValue.GetString("Window"));
    m_windowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Timezone")) {
    m_timezone = jsonValue.GetString("Timezone");
    m_timezoneHasBeenSet = true;
  }
  return *this;
}

JsonValue PreferredContactWindow::Jsonize() const {
  JsonValue payload;

  if (m_windowHasBeenSet) {
    payload.WithString("Window", ContactWindowMapper::GetNameForContactWindow(m_window));
  }

  if (m_timezoneHasBeenSet) {
    payload.WithString("Timezone", m_timezone);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
