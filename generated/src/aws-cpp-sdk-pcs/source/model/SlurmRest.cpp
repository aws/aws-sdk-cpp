/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/model/SlurmRest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {

SlurmRest::SlurmRest(JsonView jsonValue) { *this = jsonValue; }

SlurmRest& SlurmRest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mode")) {
    m_mode = SlurmRestModeMapper::GetSlurmRestModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  return *this;
}

JsonValue SlurmRest::Jsonize() const {
  JsonValue payload;

  if (m_modeHasBeenSet) {
    payload.WithString("mode", SlurmRestModeMapper::GetNameForSlurmRestMode(m_mode));
  }

  return payload;
}

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
