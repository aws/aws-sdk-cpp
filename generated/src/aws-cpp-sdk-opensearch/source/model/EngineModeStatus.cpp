/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/EngineModeStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

EngineModeStatus::EngineModeStatus(JsonView jsonValue) { *this = jsonValue; }

EngineModeStatus& EngineModeStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Options")) {
    m_options = EngineModeMapper::GetEngineModeForName(jsonValue.GetString("Options"));
    m_optionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = jsonValue.GetObject("Status");
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue EngineModeStatus::Jsonize() const {
  JsonValue payload;

  if (m_optionsHasBeenSet) {
    payload.WithString("Options", EngineModeMapper::GetNameForEngineMode(m_options));
  }

  if (m_statusHasBeenSet) {
    payload.WithObject("Status", m_status.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
