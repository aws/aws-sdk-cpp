/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/AvailabilitySlo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

AvailabilitySlo::AvailabilitySlo(JsonView jsonValue) { *this = jsonValue; }

AvailabilitySlo& AvailabilitySlo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("target")) {
    m_target = jsonValue.GetDouble("target");
    m_targetHasBeenSet = true;
  }
  return *this;
}

JsonValue AvailabilitySlo::Jsonize() const {
  JsonValue payload;

  if (m_targetHasBeenSet) {
    payload.WithDouble("target", m_target);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
