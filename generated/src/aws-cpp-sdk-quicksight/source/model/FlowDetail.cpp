/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/FlowDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

FlowDetail::FlowDetail(JsonView jsonValue) { *this = jsonValue; }

FlowDetail& FlowDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FlowId")) {
    m_flowId = jsonValue.GetString("FlowId");
    m_flowIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PublishState")) {
    m_publishState = FlowPublishStateMapper::GetFlowPublishStateForName(jsonValue.GetString("PublishState"));
    m_publishStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedBy")) {
    m_createdBy = jsonValue.GetString("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedBy")) {
    m_lastUpdatedBy = jsonValue.GetString("LastUpdatedBy");
    m_lastUpdatedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FlowDefinition")) {
    m_flowDefinition = jsonValue.GetObject("FlowDefinition");
    m_flowDefinitionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StepAliases")) {
    Aws::Utils::Array<JsonView> stepAliasesJsonList = jsonValue.GetArray("StepAliases");
    for (unsigned stepAliasesIndex = 0; stepAliasesIndex < stepAliasesJsonList.GetLength(); ++stepAliasesIndex) {
      m_stepAliases.push_back(stepAliasesJsonList[stepAliasesIndex].AsObject());
    }
    m_stepAliasesHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowDetail::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_flowIdHasBeenSet) {
    payload.WithString("FlowId", m_flowId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_publishStateHasBeenSet) {
    payload.WithString("PublishState", FlowPublishStateMapper::GetNameForFlowPublishState(m_publishState));
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("CreatedBy", m_createdBy);
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedByHasBeenSet) {
    payload.WithString("LastUpdatedBy", m_lastUpdatedBy);
  }

  if (m_flowDefinitionHasBeenSet) {
    if (!m_flowDefinition.View().IsNull()) {
      payload.WithObject("FlowDefinition", JsonValue(m_flowDefinition.View()));
    }
  }

  if (m_stepAliasesHasBeenSet) {
    Aws::Utils::Array<JsonValue> stepAliasesJsonList(m_stepAliases.size());
    for (unsigned stepAliasesIndex = 0; stepAliasesIndex < stepAliasesJsonList.GetLength(); ++stepAliasesIndex) {
      stepAliasesJsonList[stepAliasesIndex].AsObject(m_stepAliases[stepAliasesIndex].Jsonize());
    }
    payload.WithArray("StepAliases", std::move(stepAliasesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
