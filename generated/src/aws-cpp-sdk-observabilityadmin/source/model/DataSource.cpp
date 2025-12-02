/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/DataSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

DataSource::DataSource(JsonView jsonValue) { *this = jsonValue; }

DataSource& DataSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSource::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", m_type);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
