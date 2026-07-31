/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TopicV2DataSetReference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TopicV2DataSetReference::TopicV2DataSetReference(JsonView jsonValue) { *this = jsonValue; }

TopicV2DataSetReference& TopicV2DataSetReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DataSetArn")) {
    m_dataSetArn = jsonValue.GetString("DataSetArn");
    m_dataSetArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataSetName")) {
    m_dataSetName = jsonValue.GetString("DataSetName");
    m_dataSetNameHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicV2DataSetReference::Jsonize() const {
  JsonValue payload;

  if (m_dataSetArnHasBeenSet) {
    payload.WithString("DataSetArn", m_dataSetArn);
  }

  if (m_dataSetNameHasBeenSet) {
    payload.WithString("DataSetName", m_dataSetName);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
