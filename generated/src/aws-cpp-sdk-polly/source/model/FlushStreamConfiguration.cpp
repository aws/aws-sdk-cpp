/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/polly/model/FlushStreamConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {

FlushStreamConfiguration::FlushStreamConfiguration(JsonView jsonValue) { *this = jsonValue; }

FlushStreamConfiguration& FlushStreamConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Force")) {
    m_force = jsonValue.GetBool("Force");
    m_forceHasBeenSet = true;
  }
  return *this;
}

JsonValue FlushStreamConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_forceHasBeenSet) {
    payload.WithBool("Force", m_force);
  }

  return payload;
}

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
