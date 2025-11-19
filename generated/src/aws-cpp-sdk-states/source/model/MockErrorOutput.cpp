/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/states/model/MockErrorOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SFN {
namespace Model {

MockErrorOutput::MockErrorOutput(JsonView jsonValue) { *this = jsonValue; }

MockErrorOutput& MockErrorOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetString("error");
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cause")) {
    m_cause = jsonValue.GetString("cause");
    m_causeHasBeenSet = true;
  }
  return *this;
}

JsonValue MockErrorOutput::Jsonize() const {
  JsonValue payload;

  if (m_errorHasBeenSet) {
    payload.WithString("error", m_error);
  }

  if (m_causeHasBeenSet) {
    payload.WithString("cause", m_cause);
  }

  return payload;
}

}  // namespace Model
}  // namespace SFN
}  // namespace Aws
