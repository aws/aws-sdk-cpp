/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/ListChannelContractsTypeSort.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

ListChannelContractsTypeSort::ListChannelContractsTypeSort(JsonView jsonValue) { *this = jsonValue; }

ListChannelContractsTypeSort& ListChannelContractsTypeSort::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("managedServicesAttestationTypeSort")) {
    m_managedServicesAttestationTypeSort = jsonValue.GetObject("managedServicesAttestationTypeSort");
    m_managedServicesAttestationTypeSortHasBeenSet = true;
  }
  return *this;
}

JsonValue ListChannelContractsTypeSort::Jsonize() const {
  JsonValue payload;

  if (m_managedServicesAttestationTypeSortHasBeenSet) {
    payload.WithObject("managedServicesAttestationTypeSort", m_managedServicesAttestationTypeSort.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
