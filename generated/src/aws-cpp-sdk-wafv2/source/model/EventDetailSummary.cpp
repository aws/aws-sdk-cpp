/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/EventDetailSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

EventDetailSummary::EventDetailSummary(JsonView jsonValue) { *this = jsonValue; }

EventDetailSummary& EventDetailSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EventId")) {
    m_eventId = jsonValue.GetString("EventId");
    m_eventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventStatus")) {
    m_eventStatus = EventStatusMapper::GetEventStatusForName(jsonValue.GetString("EventStatus"));
    m_eventStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventCategory")) {
    m_eventCategory = EventCategoryMapper::GetEventCategoryForName(jsonValue.GetString("EventCategory"));
    m_eventCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WebAclArn")) {
    m_webAclArn = jsonValue.GetString("WebAclArn");
    m_webAclArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApiSecurityEventDetail")) {
    m_apiSecurityEventDetail = jsonValue.GetObject("ApiSecurityEventDetail");
    m_apiSecurityEventDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue EventDetailSummary::Jsonize() const {
  JsonValue payload;

  if (m_eventIdHasBeenSet) {
    payload.WithString("EventId", m_eventId);
  }

  if (m_eventStatusHasBeenSet) {
    payload.WithString("EventStatus", EventStatusMapper::GetNameForEventStatus(m_eventStatus));
  }

  if (m_eventCategoryHasBeenSet) {
    payload.WithString("EventCategory", EventCategoryMapper::GetNameForEventCategory(m_eventCategory));
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_webAclArnHasBeenSet) {
    payload.WithString("WebAclArn", m_webAclArn);
  }

  if (m_apiSecurityEventDetailHasBeenSet) {
    payload.WithObject("ApiSecurityEventDetail", m_apiSecurityEventDetail.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
