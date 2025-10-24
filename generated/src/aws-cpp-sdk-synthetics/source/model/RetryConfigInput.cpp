﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/synthetics/model/RetryConfigInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Synthetics {
namespace Model {

RetryConfigInput::RetryConfigInput(JsonView jsonValue) { *this = jsonValue; }

RetryConfigInput& RetryConfigInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MaxRetries")) {
    m_maxRetries = jsonValue.GetInteger("MaxRetries");
    m_maxRetriesHasBeenSet = true;
  }
  return *this;
}

JsonValue RetryConfigInput::Jsonize() const {
  JsonValue payload;

  if (m_maxRetriesHasBeenSet) {
    payload.WithInteger("MaxRetries", m_maxRetries);
  }

  return payload;
}

}  // namespace Model
}  // namespace Synthetics
}  // namespace Aws
