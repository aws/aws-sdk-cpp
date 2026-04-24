/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rolesanywhere/model/Source.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RolesAnywhere {
namespace Model {

Source::Source(JsonView jsonValue) { *this = jsonValue; }

Source& Source::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceType")) {
    m_sourceType = TrustAnchorTypeMapper::GetTrustAnchorTypeForName(jsonValue.GetString("sourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceData")) {
    m_sourceData = jsonValue.GetObject("sourceData");
    m_sourceDataHasBeenSet = true;
  }
  return *this;
}

JsonValue Source::Jsonize() const {
  JsonValue payload;

  if (m_sourceTypeHasBeenSet) {
    payload.WithString("sourceType", TrustAnchorTypeMapper::GetNameForTrustAnchorType(m_sourceType));
  }

  if (m_sourceDataHasBeenSet) {
    payload.WithObject("sourceData", m_sourceData.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
