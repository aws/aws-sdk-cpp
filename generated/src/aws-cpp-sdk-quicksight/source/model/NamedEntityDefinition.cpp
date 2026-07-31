/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/NamedEntityDefinition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

NamedEntityDefinition::NamedEntityDefinition(JsonView jsonValue) { *this = jsonValue; }

NamedEntityDefinition& NamedEntityDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldName")) {
    m_fieldName = jsonValue.GetString("FieldName");
    m_fieldNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PropertyName")) {
    m_propertyName = jsonValue.GetString("PropertyName");
    m_propertyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PropertyRole")) {
    m_propertyRole = PropertyRoleMapper::GetPropertyRoleForName(jsonValue.GetString("PropertyRole"));
    m_propertyRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PropertyUsage")) {
    m_propertyUsage = PropertyUsageMapper::GetPropertyUsageForName(jsonValue.GetString("PropertyUsage"));
    m_propertyUsageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Metric")) {
    m_metric = jsonValue.GetObject("Metric");
    m_metricHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RankOrder")) {
    m_rankOrder = jsonValue.GetInteger("RankOrder");
    m_rankOrderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PresentationOrder")) {
    m_presentationOrder = jsonValue.GetInteger("PresentationOrder");
    m_presentationOrderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsHidden")) {
    m_isHidden = jsonValue.GetBool("IsHidden");
    m_isHiddenHasBeenSet = true;
  }
  return *this;
}

JsonValue NamedEntityDefinition::Jsonize() const {
  JsonValue payload;

  if (m_fieldNameHasBeenSet) {
    payload.WithString("FieldName", m_fieldName);
  }

  if (m_propertyNameHasBeenSet) {
    payload.WithString("PropertyName", m_propertyName);
  }

  if (m_propertyRoleHasBeenSet) {
    payload.WithString("PropertyRole", PropertyRoleMapper::GetNameForPropertyRole(m_propertyRole));
  }

  if (m_propertyUsageHasBeenSet) {
    payload.WithString("PropertyUsage", PropertyUsageMapper::GetNameForPropertyUsage(m_propertyUsage));
  }

  if (m_metricHasBeenSet) {
    payload.WithObject("Metric", m_metric.Jsonize());
  }

  if (m_rankOrderHasBeenSet) {
    payload.WithInteger("RankOrder", m_rankOrder);
  }

  if (m_presentationOrderHasBeenSet) {
    payload.WithInteger("PresentationOrder", m_presentationOrder);
  }

  if (m_isHiddenHasBeenSet) {
    payload.WithBool("IsHidden", m_isHidden);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
