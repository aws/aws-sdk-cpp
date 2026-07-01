/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/supportauthz/model/ActionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SupportAuthZ {
namespace Model {

ActionSummary::ActionSummary(JsonView jsonValue) { *this = jsonValue; }

ActionSummary& ActionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("action")) {
    m_action = jsonValue.GetString("action");
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("service")) {
    m_service = jsonValue.GetString("service");
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue ActionSummary::Jsonize() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("action", m_action);
  }

  if (m_serviceHasBeenSet) {
    payload.WithString("service", m_service);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
