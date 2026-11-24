/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/model/DeepHealthChecks.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {

DeepHealthChecks::DeepHealthChecks(JsonView jsonValue) { *this = jsonValue; }

DeepHealthChecks& DeepHealthChecks::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("onStart")) {
    m_onStart = jsonValue.GetObject("onStart");
    m_onStartHasBeenSet = true;
  }
  return *this;
}

JsonValue DeepHealthChecks::Jsonize() const {
  JsonValue payload;

  if (m_onStartHasBeenSet) {
    payload.WithObject("onStart", m_onStart.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
