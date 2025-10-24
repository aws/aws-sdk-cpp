﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/memorydb/model/MultiRegionParameterGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MemoryDB {
namespace Model {

MultiRegionParameterGroup::MultiRegionParameterGroup(JsonView jsonValue) { *this = jsonValue; }

MultiRegionParameterGroup& MultiRegionParameterGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Family")) {
    m_family = jsonValue.GetString("Family");
    m_familyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ARN")) {
    m_aRN = jsonValue.GetString("ARN");
    m_aRNHasBeenSet = true;
  }
  return *this;
}

JsonValue MultiRegionParameterGroup::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_familyHasBeenSet) {
    payload.WithString("Family", m_family);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_aRNHasBeenSet) {
    payload.WithString("ARN", m_aRN);
  }

  return payload;
}

}  // namespace Model
}  // namespace MemoryDB
}  // namespace Aws
