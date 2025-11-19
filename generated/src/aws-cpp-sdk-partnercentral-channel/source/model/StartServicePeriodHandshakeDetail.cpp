/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/StartServicePeriodHandshakeDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

StartServicePeriodHandshakeDetail::StartServicePeriodHandshakeDetail(JsonView jsonValue) { *this = jsonValue; }

StartServicePeriodHandshakeDetail& StartServicePeriodHandshakeDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("note")) {
    m_note = jsonValue.GetString("note");
    m_noteHasBeenSet = true;
  }
  if (jsonValue.ValueExists("servicePeriodType")) {
    m_servicePeriodType = ServicePeriodTypeMapper::GetServicePeriodTypeForName(jsonValue.GetString("servicePeriodType"));
    m_servicePeriodTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minimumNoticeDays")) {
    m_minimumNoticeDays = jsonValue.GetString("minimumNoticeDays");
    m_minimumNoticeDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startDate")) {
    m_startDate = jsonValue.GetString("startDate");
    m_startDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endDate")) {
    m_endDate = jsonValue.GetString("endDate");
    m_endDateHasBeenSet = true;
  }
  return *this;
}

JsonValue StartServicePeriodHandshakeDetail::Jsonize() const {
  JsonValue payload;

  if (m_noteHasBeenSet) {
    payload.WithString("note", m_note);
  }

  if (m_servicePeriodTypeHasBeenSet) {
    payload.WithString("servicePeriodType", ServicePeriodTypeMapper::GetNameForServicePeriodType(m_servicePeriodType));
  }

  if (m_minimumNoticeDaysHasBeenSet) {
    payload.WithString("minimumNoticeDays", m_minimumNoticeDays);
  }

  if (m_startDateHasBeenSet) {
    payload.WithString("startDate", m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endDateHasBeenSet) {
    payload.WithString("endDate", m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
