/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DataPrepAggregationFunction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DataPrepAggregationFunction::DataPrepAggregationFunction(JsonView jsonValue) { *this = jsonValue; }

DataPrepAggregationFunction& DataPrepAggregationFunction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SimpleAggregation")) {
    m_simpleAggregation = jsonValue.GetObject("SimpleAggregation");
    m_simpleAggregationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ListAggregation")) {
    m_listAggregation = jsonValue.GetObject("ListAggregation");
    m_listAggregationHasBeenSet = true;
  }
  return *this;
}

JsonValue DataPrepAggregationFunction::Jsonize() const {
  JsonValue payload;

  if (m_simpleAggregationHasBeenSet) {
    payload.WithObject("SimpleAggregation", m_simpleAggregation.Jsonize());
  }

  if (m_listAggregationHasBeenSet) {
    payload.WithObject("ListAggregation", m_listAggregation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
