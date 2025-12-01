/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/ToolOverrideInputValueConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

ToolOverrideInputValueConfiguration::ToolOverrideInputValueConfiguration(JsonView jsonValue) { *this = jsonValue; }

ToolOverrideInputValueConfiguration& ToolOverrideInputValueConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("constant")) {
    m_constant = jsonValue.GetObject("constant");
    m_constantHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolOverrideInputValueConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_constantHasBeenSet) {
    payload.WithObject("constant", m_constant.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
