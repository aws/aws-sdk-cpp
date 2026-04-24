/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DataPrepSimpleAggregationFunction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DataPrepSimpleAggregationFunction::DataPrepSimpleAggregationFunction(JsonView jsonValue) { *this = jsonValue; }

DataPrepSimpleAggregationFunction& DataPrepSimpleAggregationFunction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InputColumnName")) {
    m_inputColumnName = jsonValue.GetString("InputColumnName");
    m_inputColumnNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FunctionType")) {
    m_functionType =
        DataPrepSimpleAggregationFunctionTypeMapper::GetDataPrepSimpleAggregationFunctionTypeForName(jsonValue.GetString("FunctionType"));
    m_functionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DataPrepSimpleAggregationFunction::Jsonize() const {
  JsonValue payload;

  if (m_inputColumnNameHasBeenSet) {
    payload.WithString("InputColumnName", m_inputColumnName);
  }

  if (m_functionTypeHasBeenSet) {
    payload.WithString("FunctionType",
                       DataPrepSimpleAggregationFunctionTypeMapper::GetNameForDataPrepSimpleAggregationFunctionType(m_functionType));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
