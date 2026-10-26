/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/ResourceShareDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

ResourceShareDetails::ResourceShareDetails(JsonView jsonValue) { *this = jsonValue; }

ResourceShareDetails& ResourceShareDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("owned")) {
    m_owned = jsonValue.GetObject("owned");
    m_ownedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("consumed")) {
    m_consumed = jsonValue.GetObject("consumed");
    m_consumedHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceShareDetails::Jsonize() const {
  JsonValue payload;

  if (m_ownedHasBeenSet) {
    payload.WithObject("owned", m_owned.Jsonize());
  }

  if (m_consumedHasBeenSet) {
    payload.WithObject("consumed", m_consumed.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
