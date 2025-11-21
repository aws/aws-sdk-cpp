/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ListChannelHandshakesTypeSort.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ListChannelHandshakesTypeSort::ListChannelHandshakesTypeSort(JsonView jsonValue) { *this = jsonValue; }

ListChannelHandshakesTypeSort& ListChannelHandshakesTypeSort::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startServicePeriodTypeSort")) {
    m_startServicePeriodTypeSort = jsonValue.GetObject("startServicePeriodTypeSort");
    m_startServicePeriodTypeSortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revokeServicePeriodTypeSort")) {
    m_revokeServicePeriodTypeSort = jsonValue.GetObject("revokeServicePeriodTypeSort");
    m_revokeServicePeriodTypeSortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("programManagementAccountTypeSort")) {
    m_programManagementAccountTypeSort = jsonValue.GetObject("programManagementAccountTypeSort");
    m_programManagementAccountTypeSortHasBeenSet = true;
  }
  return *this;
}

JsonValue ListChannelHandshakesTypeSort::Jsonize() const {
  JsonValue payload;

  if (m_startServicePeriodTypeSortHasBeenSet) {
    payload.WithObject("startServicePeriodTypeSort", m_startServicePeriodTypeSort.Jsonize());
  }

  if (m_revokeServicePeriodTypeSortHasBeenSet) {
    payload.WithObject("revokeServicePeriodTypeSort", m_revokeServicePeriodTypeSort.Jsonize());
  }

  if (m_programManagementAccountTypeSortHasBeenSet) {
    payload.WithObject("programManagementAccountTypeSort", m_programManagementAccountTypeSort.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
