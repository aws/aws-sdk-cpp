/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TransformStep.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TransformStep::TransformStep(JsonView jsonValue) { *this = jsonValue; }

TransformStep& TransformStep::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ImportTableStep")) {
    m_importTableStep = jsonValue.GetObject("ImportTableStep");
    m_importTableStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProjectStep")) {
    m_projectStep = jsonValue.GetObject("ProjectStep");
    m_projectStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FiltersStep")) {
    m_filtersStep = jsonValue.GetObject("FiltersStep");
    m_filtersStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateColumnsStep")) {
    m_createColumnsStep = jsonValue.GetObject("CreateColumnsStep");
    m_createColumnsStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RenameColumnsStep")) {
    m_renameColumnsStep = jsonValue.GetObject("RenameColumnsStep");
    m_renameColumnsStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CastColumnTypesStep")) {
    m_castColumnTypesStep = jsonValue.GetObject("CastColumnTypesStep");
    m_castColumnTypesStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("JoinStep")) {
    m_joinStep = jsonValue.GetObject("JoinStep");
    m_joinStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AggregateStep")) {
    m_aggregateStep = jsonValue.GetObject("AggregateStep");
    m_aggregateStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PivotStep")) {
    m_pivotStep = jsonValue.GetObject("PivotStep");
    m_pivotStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UnpivotStep")) {
    m_unpivotStep = jsonValue.GetObject("UnpivotStep");
    m_unpivotStepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AppendStep")) {
    m_appendStep = jsonValue.GetObject("AppendStep");
    m_appendStepHasBeenSet = true;
  }
  return *this;
}

JsonValue TransformStep::Jsonize() const {
  JsonValue payload;

  if (m_importTableStepHasBeenSet) {
    payload.WithObject("ImportTableStep", m_importTableStep.Jsonize());
  }

  if (m_projectStepHasBeenSet) {
    payload.WithObject("ProjectStep", m_projectStep.Jsonize());
  }

  if (m_filtersStepHasBeenSet) {
    payload.WithObject("FiltersStep", m_filtersStep.Jsonize());
  }

  if (m_createColumnsStepHasBeenSet) {
    payload.WithObject("CreateColumnsStep", m_createColumnsStep.Jsonize());
  }

  if (m_renameColumnsStepHasBeenSet) {
    payload.WithObject("RenameColumnsStep", m_renameColumnsStep.Jsonize());
  }

  if (m_castColumnTypesStepHasBeenSet) {
    payload.WithObject("CastColumnTypesStep", m_castColumnTypesStep.Jsonize());
  }

  if (m_joinStepHasBeenSet) {
    payload.WithObject("JoinStep", m_joinStep.Jsonize());
  }

  if (m_aggregateStepHasBeenSet) {
    payload.WithObject("AggregateStep", m_aggregateStep.Jsonize());
  }

  if (m_pivotStepHasBeenSet) {
    payload.WithObject("PivotStep", m_pivotStep.Jsonize());
  }

  if (m_unpivotStepHasBeenSet) {
    payload.WithObject("UnpivotStep", m_unpivotStep.Jsonize());
  }

  if (m_appendStepHasBeenSet) {
    payload.WithObject("AppendStep", m_appendStep.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
