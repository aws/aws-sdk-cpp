/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/PolicySharingRevokedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

PolicySharingRevokedMetadata::PolicySharingRevokedMetadata(JsonView jsonValue) { *this = jsonValue; }

PolicySharingRevokedMetadata& PolicySharingRevokedMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("affectedServiceCount")) {
    m_affectedServiceCount = jsonValue.GetInteger("affectedServiceCount");
    m_affectedServiceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicySharingRevokedMetadata::Jsonize() const {
  JsonValue payload;

  if (m_affectedServiceCountHasBeenSet) {
    payload.WithInteger("affectedServiceCount", m_affectedServiceCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
