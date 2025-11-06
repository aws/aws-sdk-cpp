/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ValueColumnConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ValueColumnConfiguration::ValueColumnConfiguration(JsonView jsonValue) { *this = jsonValue; }

ValueColumnConfiguration& ValueColumnConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AggregationFunction")) {
    m_aggregationFunction = jsonValue.GetObject("AggregationFunction");
    m_aggregationFunctionHasBeenSet = true;
  }
  return *this;
}

JsonValue ValueColumnConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_aggregationFunctionHasBeenSet) {
    payload.WithObject("AggregationFunction", m_aggregationFunction.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
