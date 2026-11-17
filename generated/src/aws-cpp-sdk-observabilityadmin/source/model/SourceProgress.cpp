/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/SourceProgress.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

SourceProgress::SourceProgress(JsonView jsonValue) { *this = jsonValue; }

SourceProgress& SourceProgress::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Active")) {
    m_active = jsonValue.GetInteger("Active");
    m_activeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Total")) {
    m_total = jsonValue.GetInteger("Total");
    m_totalHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceProgress::Jsonize() const {
  JsonValue payload;

  if (m_activeHasBeenSet) {
    payload.WithInteger("Active", m_active);
  }

  if (m_totalHasBeenSet) {
    payload.WithInteger("Total", m_total);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
