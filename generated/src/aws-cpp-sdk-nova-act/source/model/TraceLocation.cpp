/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/TraceLocation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {

TraceLocation::TraceLocation(JsonView jsonValue) { *this = jsonValue; }

TraceLocation& TraceLocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("locationType")) {
    m_locationType = TraceLocationTypeMapper::GetTraceLocationTypeForName(jsonValue.GetString("locationType"));
    m_locationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("location")) {
    m_location = jsonValue.GetString("location");
    m_locationHasBeenSet = true;
  }
  return *this;
}

JsonValue TraceLocation::Jsonize() const {
  JsonValue payload;

  if (m_locationTypeHasBeenSet) {
    payload.WithString("locationType", TraceLocationTypeMapper::GetNameForTraceLocationType(m_locationType));
  }

  if (m_locationHasBeenSet) {
    payload.WithString("location", m_location);
  }

  return payload;
}

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
