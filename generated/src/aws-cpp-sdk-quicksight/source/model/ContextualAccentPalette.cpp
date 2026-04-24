/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ContextualAccentPalette.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ContextualAccentPalette::ContextualAccentPalette(JsonView jsonValue) { *this = jsonValue; }

ContextualAccentPalette& ContextualAccentPalette::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Connection")) {
    m_connection = jsonValue.GetObject("Connection");
    m_connectionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Visualization")) {
    m_visualization = jsonValue.GetObject("Visualization");
    m_visualizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Insight")) {
    m_insight = jsonValue.GetObject("Insight");
    m_insightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Automation")) {
    m_automation = jsonValue.GetObject("Automation");
    m_automationHasBeenSet = true;
  }
  return *this;
}

JsonValue ContextualAccentPalette::Jsonize() const {
  JsonValue payload;

  if (m_connectionHasBeenSet) {
    payload.WithObject("Connection", m_connection.Jsonize());
  }

  if (m_visualizationHasBeenSet) {
    payload.WithObject("Visualization", m_visualization.Jsonize());
  }

  if (m_insightHasBeenSet) {
    payload.WithObject("Insight", m_insight.Jsonize());
  }

  if (m_automationHasBeenSet) {
    payload.WithObject("Automation", m_automation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
