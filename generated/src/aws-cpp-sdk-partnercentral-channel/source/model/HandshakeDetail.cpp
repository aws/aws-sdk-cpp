/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/HandshakeDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

HandshakeDetail::HandshakeDetail(JsonView jsonValue) { *this = jsonValue; }

HandshakeDetail& HandshakeDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startServicePeriodHandshakeDetail")) {
    m_startServicePeriodHandshakeDetail = jsonValue.GetObject("startServicePeriodHandshakeDetail");
    m_startServicePeriodHandshakeDetailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revokeServicePeriodHandshakeDetail")) {
    m_revokeServicePeriodHandshakeDetail = jsonValue.GetObject("revokeServicePeriodHandshakeDetail");
    m_revokeServicePeriodHandshakeDetailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("programManagementAccountHandshakeDetail")) {
    m_programManagementAccountHandshakeDetail = jsonValue.GetObject("programManagementAccountHandshakeDetail");
    m_programManagementAccountHandshakeDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue HandshakeDetail::Jsonize() const {
  JsonValue payload;

  if (m_startServicePeriodHandshakeDetailHasBeenSet) {
    payload.WithObject("startServicePeriodHandshakeDetail", m_startServicePeriodHandshakeDetail.Jsonize());
  }

  if (m_revokeServicePeriodHandshakeDetailHasBeenSet) {
    payload.WithObject("revokeServicePeriodHandshakeDetail", m_revokeServicePeriodHandshakeDetail.Jsonize());
  }

  if (m_programManagementAccountHandshakeDetailHasBeenSet) {
    payload.WithObject("programManagementAccountHandshakeDetail", m_programManagementAccountHandshakeDetail.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
