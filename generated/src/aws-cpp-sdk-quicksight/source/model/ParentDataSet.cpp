/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ParentDataSet.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ParentDataSet::ParentDataSet(JsonView jsonValue) { *this = jsonValue; }

ParentDataSet& ParentDataSet::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DataSetArn")) {
    m_dataSetArn = jsonValue.GetString("DataSetArn");
    m_dataSetArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InputColumns")) {
    Aws::Utils::Array<JsonView> inputColumnsJsonList = jsonValue.GetArray("InputColumns");
    for (unsigned inputColumnsIndex = 0; inputColumnsIndex < inputColumnsJsonList.GetLength(); ++inputColumnsIndex) {
      m_inputColumns.push_back(inputColumnsJsonList[inputColumnsIndex].AsObject());
    }
    m_inputColumnsHasBeenSet = true;
  }
  return *this;
}

JsonValue ParentDataSet::Jsonize() const {
  JsonValue payload;

  if (m_dataSetArnHasBeenSet) {
    payload.WithString("DataSetArn", m_dataSetArn);
  }

  if (m_inputColumnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> inputColumnsJsonList(m_inputColumns.size());
    for (unsigned inputColumnsIndex = 0; inputColumnsIndex < inputColumnsJsonList.GetLength(); ++inputColumnsIndex) {
      inputColumnsJsonList[inputColumnsIndex].AsObject(m_inputColumns[inputColumnsIndex].Jsonize());
    }
    payload.WithArray("InputColumns", std::move(inputColumnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
