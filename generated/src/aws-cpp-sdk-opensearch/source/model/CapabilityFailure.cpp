/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/CapabilityFailure.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

CapabilityFailure::CapabilityFailure(JsonView jsonValue) { *this = jsonValue; }

CapabilityFailure& CapabilityFailure::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reason")) {
    m_reason = CapabilityFailureReasonMapper::GetCapabilityFailureReasonForName(jsonValue.GetString("reason"));
    m_reasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("details")) {
    m_details = jsonValue.GetString("details");
    m_detailsHasBeenSet = true;
  }
  return *this;
}

JsonValue CapabilityFailure::Jsonize() const {
  JsonValue payload;

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", CapabilityFailureReasonMapper::GetNameForCapabilityFailureReason(m_reason));
  }

  if (m_detailsHasBeenSet) {
    payload.WithString("details", m_details);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
