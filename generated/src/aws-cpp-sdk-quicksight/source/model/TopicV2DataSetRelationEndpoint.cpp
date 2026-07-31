/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TopicV2DataSetRelationEndpoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TopicV2DataSetRelationEndpoint::TopicV2DataSetRelationEndpoint(JsonView jsonValue) { *this = jsonValue; }

TopicV2DataSetRelationEndpoint& TopicV2DataSetRelationEndpoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DataSetArn")) {
    m_dataSetArn = jsonValue.GetString("DataSetArn");
    m_dataSetArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ColumnNames")) {
    Aws::Utils::Array<JsonView> columnNamesJsonList = jsonValue.GetArray("ColumnNames");
    for (unsigned columnNamesIndex = 0; columnNamesIndex < columnNamesJsonList.GetLength(); ++columnNamesIndex) {
      m_columnNames.push_back(columnNamesJsonList[columnNamesIndex].AsString());
    }
    m_columnNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicV2DataSetRelationEndpoint::Jsonize() const {
  JsonValue payload;

  if (m_dataSetArnHasBeenSet) {
    payload.WithString("DataSetArn", m_dataSetArn);
  }

  if (m_columnNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> columnNamesJsonList(m_columnNames.size());
    for (unsigned columnNamesIndex = 0; columnNamesIndex < columnNamesJsonList.GetLength(); ++columnNamesIndex) {
      columnNamesJsonList[columnNamesIndex].AsString(m_columnNames[columnNamesIndex]);
    }
    payload.WithArray("ColumnNames", std::move(columnNamesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
