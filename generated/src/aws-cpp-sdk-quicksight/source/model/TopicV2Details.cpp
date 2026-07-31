/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TopicV2Details.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TopicV2Details::TopicV2Details(JsonView jsonValue) { *this = jsonValue; }

TopicV2Details& TopicV2Details::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataSets")) {
    Aws::Utils::Array<JsonView> dataSetsJsonList = jsonValue.GetArray("DataSets");
    for (unsigned dataSetsIndex = 0; dataSetsIndex < dataSetsJsonList.GetLength(); ++dataSetsIndex) {
      m_dataSets.push_back(dataSetsJsonList[dataSetsIndex].AsObject());
    }
    m_dataSetsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataSetRelations")) {
    Aws::Utils::Array<JsonView> dataSetRelationsJsonList = jsonValue.GetArray("DataSetRelations");
    for (unsigned dataSetRelationsIndex = 0; dataSetRelationsIndex < dataSetRelationsJsonList.GetLength(); ++dataSetRelationsIndex) {
      m_dataSetRelations.push_back(dataSetRelationsJsonList[dataSetRelationsIndex].AsObject());
    }
    m_dataSetRelationsHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicV2Details::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_dataSetsHasBeenSet) {
    Aws::Utils::Array<JsonValue> dataSetsJsonList(m_dataSets.size());
    for (unsigned dataSetsIndex = 0; dataSetsIndex < dataSetsJsonList.GetLength(); ++dataSetsIndex) {
      dataSetsJsonList[dataSetsIndex].AsObject(m_dataSets[dataSetsIndex].Jsonize());
    }
    payload.WithArray("DataSets", std::move(dataSetsJsonList));
  }

  if (m_dataSetRelationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> dataSetRelationsJsonList(m_dataSetRelations.size());
    for (unsigned dataSetRelationsIndex = 0; dataSetRelationsIndex < dataSetRelationsJsonList.GetLength(); ++dataSetRelationsIndex) {
      dataSetRelationsJsonList[dataSetRelationsIndex].AsObject(m_dataSetRelations[dataSetRelationsIndex].Jsonize());
    }
    payload.WithArray("DataSetRelations", std::move(dataSetRelationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
