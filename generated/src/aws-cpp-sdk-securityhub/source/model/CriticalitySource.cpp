/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/CriticalitySource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

CriticalitySource::CriticalitySource(JsonView jsonValue) { *this = jsonValue; }

CriticalitySource& CriticalitySource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Source")) {
    m_source = CriticalitySourceTypeMapper::GetCriticalitySourceTypeForName(jsonValue.GetString("Source"));
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Reason")) {
    m_reason = jsonValue.GetString("Reason");
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue CriticalitySource::Jsonize() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithString("Source", CriticalitySourceTypeMapper::GetNameForCriticalitySourceType(m_source));
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("Reason", m_reason);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
