/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/EffectiveLimit.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

EffectiveLimit::EffectiveLimit(JsonView jsonValue) { *this = jsonValue; }

EffectiveLimit& EffectiveLimit::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("limitValue")) {
    m_limitValue = jsonValue.GetInt64("limitValue");
    m_limitValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("limitUnit")) {
    m_limitUnit = LimitUnitMapper::GetLimitUnitForName(jsonValue.GetString("limitUnit"));
    m_limitUnitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = LimitSourceMapper::GetLimitSourceForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("profileId")) {
    m_profileId = jsonValue.GetString("profileId");
    m_profileIdHasBeenSet = true;
  }
  return *this;
}

JsonValue EffectiveLimit::Jsonize() const {
  JsonValue payload;

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if (m_limitValueHasBeenSet) {
    payload.WithInt64("limitValue", m_limitValue);
  }

  if (m_limitUnitHasBeenSet) {
    payload.WithString("limitUnit", LimitUnitMapper::GetNameForLimitUnit(m_limitUnit));
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("source", LimitSourceMapper::GetNameForLimitSource(m_source));
  }

  if (m_profileIdHasBeenSet) {
    payload.WithString("profileId", m_profileId);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
