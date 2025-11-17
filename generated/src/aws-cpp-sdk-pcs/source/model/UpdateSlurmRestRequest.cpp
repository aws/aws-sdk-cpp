/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/model/UpdateSlurmRestRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {

UpdateSlurmRestRequest::UpdateSlurmRestRequest(JsonView jsonValue) { *this = jsonValue; }

UpdateSlurmRestRequest& UpdateSlurmRestRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mode")) {
    m_mode = SlurmRestModeMapper::GetSlurmRestModeForName(jsonValue.GetString("mode"));
    m_modeHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateSlurmRestRequest::Jsonize() const {
  JsonValue payload;

  if (m_modeHasBeenSet) {
    payload.WithString("mode", SlurmRestModeMapper::GetNameForSlurmRestMode(m_mode));
  }

  return payload;
}

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
