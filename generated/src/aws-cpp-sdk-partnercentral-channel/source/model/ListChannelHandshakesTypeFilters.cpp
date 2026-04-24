/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ListChannelHandshakesTypeFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ListChannelHandshakesTypeFilters::ListChannelHandshakesTypeFilters(JsonView jsonValue) { *this = jsonValue; }

ListChannelHandshakesTypeFilters& ListChannelHandshakesTypeFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startServicePeriodTypeFilters")) {
    m_startServicePeriodTypeFilters = jsonValue.GetObject("startServicePeriodTypeFilters");
    m_startServicePeriodTypeFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revokeServicePeriodTypeFilters")) {
    m_revokeServicePeriodTypeFilters = jsonValue.GetObject("revokeServicePeriodTypeFilters");
    m_revokeServicePeriodTypeFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("programManagementAccountTypeFilters")) {
    m_programManagementAccountTypeFilters = jsonValue.GetObject("programManagementAccountTypeFilters");
    m_programManagementAccountTypeFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue ListChannelHandshakesTypeFilters::Jsonize() const {
  JsonValue payload;

  if (m_startServicePeriodTypeFiltersHasBeenSet) {
    payload.WithObject("startServicePeriodTypeFilters", m_startServicePeriodTypeFilters.Jsonize());
  }

  if (m_revokeServicePeriodTypeFiltersHasBeenSet) {
    payload.WithObject("revokeServicePeriodTypeFilters", m_revokeServicePeriodTypeFilters.Jsonize());
  }

  if (m_programManagementAccountTypeFiltersHasBeenSet) {
    payload.WithObject("programManagementAccountTypeFilters", m_programManagementAccountTypeFilters.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
