/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/AdminPasswordSourceSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

AdminPasswordSourceSummary::AdminPasswordSourceSummary(JsonView jsonValue) { *this = jsonValue; }

AdminPasswordSourceSummary& AdminPasswordSourceSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("adminPasswordSource")) {
    m_adminPasswordSource = AdminPasswordSourceMapper::GetAdminPasswordSourceForName(jsonValue.GetString("adminPasswordSource"));
    m_adminPasswordSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("adminPasswordSourceConfiguration")) {
    m_adminPasswordSourceConfiguration = jsonValue.GetObject("adminPasswordSourceConfiguration");
    m_adminPasswordSourceConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AdminPasswordSourceSummary::Jsonize() const {
  JsonValue payload;

  if (m_adminPasswordSourceHasBeenSet) {
    payload.WithString("adminPasswordSource", AdminPasswordSourceMapper::GetNameForAdminPasswordSource(m_adminPasswordSource));
  }

  if (m_adminPasswordSourceConfigurationHasBeenSet) {
    payload.WithObject("adminPasswordSourceConfiguration", m_adminPasswordSourceConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
