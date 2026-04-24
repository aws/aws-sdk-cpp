/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/FlowSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

FlowSummary::FlowSummary(JsonView jsonValue) { *this = jsonValue; }

FlowSummary& FlowSummary::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("PublishState")) {
    m_publishState = FlowPublishStateMapper::GetFlowPublishStateForName(jsonValue.GetString("PublishState"));
    m_publishStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RunCount")) {
    m_runCount = jsonValue.GetInteger("RunCount");
    m_runCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UserCount")) {
    m_userCount = jsonValue.GetInteger("UserCount");
    m_userCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastPublishedBy")) {
    m_lastPublishedBy = jsonValue.GetString("LastPublishedBy");
    m_lastPublishedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastPublishedAt")) {
    m_lastPublishedAt = jsonValue.GetDouble("LastPublishedAt");
    m_lastPublishedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowSummary::Jsonize() const {
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

  if (m_publishStateHasBeenSet) {
    payload.WithString("PublishState", FlowPublishStateMapper::GetNameForFlowPublishState(m_publishState));
  }

  if (m_runCountHasBeenSet) {
    payload.WithInteger("RunCount", m_runCount);
  }

  if (m_userCountHasBeenSet) {
    payload.WithInteger("UserCount", m_userCount);
  }

  if (m_lastPublishedByHasBeenSet) {
    payload.WithString("LastPublishedBy", m_lastPublishedBy);
  }

  if (m_lastPublishedAtHasBeenSet) {
    payload.WithDouble("LastPublishedAt", m_lastPublishedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
