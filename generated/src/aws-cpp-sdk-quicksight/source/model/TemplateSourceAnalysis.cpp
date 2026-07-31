/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TemplateSourceAnalysis.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TemplateSourceAnalysis::TemplateSourceAnalysis(JsonView jsonValue) { *this = jsonValue; }

TemplateSourceAnalysis& TemplateSourceAnalysis::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataSetReferences")) {
    Aws::Utils::Array<JsonView> dataSetReferencesJsonList = jsonValue.GetArray("DataSetReferences");
    for (unsigned dataSetReferencesIndex = 0; dataSetReferencesIndex < dataSetReferencesJsonList.GetLength(); ++dataSetReferencesIndex) {
      m_dataSetReferences.push_back(dataSetReferencesJsonList[dataSetReferencesIndex].AsObject());
    }
    m_dataSetReferencesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TopicReferences")) {
    Aws::Utils::Array<JsonView> topicReferencesJsonList = jsonValue.GetArray("TopicReferences");
    for (unsigned topicReferencesIndex = 0; topicReferencesIndex < topicReferencesJsonList.GetLength(); ++topicReferencesIndex) {
      m_topicReferences.push_back(topicReferencesJsonList[topicReferencesIndex].AsObject());
    }
    m_topicReferencesHasBeenSet = true;
  }
  return *this;
}

JsonValue TemplateSourceAnalysis::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_dataSetReferencesHasBeenSet) {
    Aws::Utils::Array<JsonValue> dataSetReferencesJsonList(m_dataSetReferences.size());
    for (unsigned dataSetReferencesIndex = 0; dataSetReferencesIndex < dataSetReferencesJsonList.GetLength(); ++dataSetReferencesIndex) {
      dataSetReferencesJsonList[dataSetReferencesIndex].AsObject(m_dataSetReferences[dataSetReferencesIndex].Jsonize());
    }
    payload.WithArray("DataSetReferences", std::move(dataSetReferencesJsonList));
  }

  if (m_topicReferencesHasBeenSet) {
    Aws::Utils::Array<JsonValue> topicReferencesJsonList(m_topicReferences.size());
    for (unsigned topicReferencesIndex = 0; topicReferencesIndex < topicReferencesJsonList.GetLength(); ++topicReferencesIndex) {
      topicReferencesJsonList[topicReferencesIndex].AsObject(m_topicReferences[topicReferencesIndex].Jsonize());
    }
    payload.WithArray("TopicReferences", std::move(topicReferencesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
