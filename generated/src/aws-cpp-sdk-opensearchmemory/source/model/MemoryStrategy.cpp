/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/MemoryStrategy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

MemoryStrategy::MemoryStrategy(JsonView jsonValue) { *this = jsonValue; }

MemoryStrategy& MemoryStrategy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = MemoryStrategyTypeMapper::GetMemoryStrategyTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  return *this;
}

JsonValue MemoryStrategy::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", MemoryStrategyTypeMapper::GetNameForMemoryStrategyType(m_type));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
